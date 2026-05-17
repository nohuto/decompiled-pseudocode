/*
 * XREFs of isxdigit @ 0x180096750
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x18007D750 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x18007D7D0 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x18007E4B0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007E5D0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800F42C0 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180155150[v1] & 0x80;
}
