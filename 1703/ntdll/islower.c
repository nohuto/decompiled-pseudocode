/*
 * XREFs of islower @ 0x180096660
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x18007D750 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv4StringToAddressExA @ 0x18007E4B0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007E5D0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800F42C0 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180155150[v1] & 2;
}
