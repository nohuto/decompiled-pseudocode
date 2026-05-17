/*
 * XREFs of strtol @ 0x18009B210
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x18007D7D0 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     sub_18009AFFC @ 0x18009AFFC (sub_18009AFFC.c)
 */

int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  return sub_18009AFFC((__int64)&off_180110B08, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
