
#include "libft.h"

char	*ft_itoa(int n)
{
	int		strlen;
	int		temp_n;
	char	*ret;

	strlen = 0;
	if (n <= 0)
		strlen++;
	temp_n = n;
	while (temp_n != 0 && strlen++ > -1)
		temp_n /= 10;
	ret = ft_calloc(strlen + 1, 1);
	if (ret == NULL)
		return (NULL);
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
		ret[0] = '-';
	while (n != 0)
	{
		ret[--strlen] = (n % 10) + '0';
		if (ret[0] == '-')
			ret[strlen] = ((n % 10) * -1) + '0';
		n /= 10;
	}
	return (ret);
}
