/*
 * XREFs of islower @ 0x14016A6E0
 * Callers:
 *     RtlEthernetStringToAddressA @ 0x14023EC20 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressA @ 0x14023ED70 (RtlIpv4StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x14023EFE0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x14023F1B0 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return _initiallocinfo.pctype[v1] & 2;
}
