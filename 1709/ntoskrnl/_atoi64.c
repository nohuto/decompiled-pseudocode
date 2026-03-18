/*
 * XREFs of _atoi64 @ 0x14015E170
 * Callers:
 *     KiMatchLoadOption @ 0x140428BB4 (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x14086E0DC (RamdiskStart.c)
 * Callees:
 *     _strtoi64 @ 0x14015E954 (_strtoi64.c)
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
