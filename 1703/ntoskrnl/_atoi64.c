/*
 * XREFs of _atoi64 @ 0x140169830
 * Callers:
 *     KiMatchLoadOption @ 0x140412910 (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x140836EAC (RamdiskStart.c)
 * Callees:
 *     <none>
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
