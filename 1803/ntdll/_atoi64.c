/*
 * XREFs of _atoi64 @ 0x18008BA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return sub_18009161C(String, 0LL, 10LL);
  else
    return 0LL;
}
