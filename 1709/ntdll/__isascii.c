/*
 * XREFs of __isascii @ 0x1800912C0
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x1800771E0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x180077290 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x18007D350 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007D470 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800F4F30 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
