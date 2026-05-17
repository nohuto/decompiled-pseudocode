/*
 * XREFs of islower @ 0x180091460
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x1800771E0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv4StringToAddressExA @ 0x18007D350 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007D470 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800F4F30 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180159150[v1] & 2;
}
