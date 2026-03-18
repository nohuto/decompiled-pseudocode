/*
 * XREFs of strtol @ 0x14018AF20
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x14028CF70 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x14018ACFC (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
