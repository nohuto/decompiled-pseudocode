/*
 * XREFs of isxdigit @ 0x14016A7A0
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x140160D30 (RtlIpv6StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x14023EC20 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x14023ED70 (RtlIpv4StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x14023EFE0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x14023F1B0 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return _initiallocinfo.pctype[v1] & 0x80;
}
