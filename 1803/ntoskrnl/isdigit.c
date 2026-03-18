/*
 * XREFs of isdigit @ 0x140188E40
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14015ACB0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x14028CC50 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x14028CD90 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x14028CF70 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x14028D380 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl isdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return _initiallocinfo.pctype[v1] & 4;
}
