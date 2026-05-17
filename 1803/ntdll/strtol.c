/*
 * XREFs of strtol @ 0x1800905B0
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x1800751F0 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     sub_18009038C @ 0x18009038C (sub_18009038C.c)
 */

int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  return sub_18009038C((__int64)&off_180110AF8, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
