/*
 * XREFs of __isascii @ 0x140188E24
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14015ACB0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x14028CC50 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x14028CD90 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x14028CF70 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x14028D380 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
