/*
 * XREFs of isxdigit @ 0x14015F1E0
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140148930 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x140254C40 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x140254D80 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x140254F50 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x140255360 (RtlIpv6StringToAddressExA.c)
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
