/*
 * XREFs of _atoi64 @ 0x140187E70
 * Callers:
 *     KiMatchLoadOption @ 0x14047CB50 (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x1408E2E3C (RamdiskStart.c)
 * Callees:
 *     _strtoi64 @ 0x140188678 (_strtoi64.c)
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
