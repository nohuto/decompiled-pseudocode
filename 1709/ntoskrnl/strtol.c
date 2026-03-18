/*
 * XREFs of strtol @ 0x140160D7C
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x140254F50 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x140160B5C (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
