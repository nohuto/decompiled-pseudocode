/*
 * XREFs of islower @ 0x18008B8E0
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x180075150 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv4StringToAddressExA @ 0x18007AB40 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007ABD0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800F1460 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180156150[v1] & 2;
}
