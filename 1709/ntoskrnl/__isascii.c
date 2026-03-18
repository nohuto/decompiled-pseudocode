/*
 * XREFs of __isascii @ 0x14015F0D4
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140148930 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x140254C40 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x140254D80 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x140254F50 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x140255360 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
