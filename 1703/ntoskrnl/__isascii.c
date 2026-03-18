/*
 * XREFs of __isascii @ 0x14016A694
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x140160D30 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x14023EC20 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x14023ED70 (RtlIpv4StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x14023EFE0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x14023F1B0 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
