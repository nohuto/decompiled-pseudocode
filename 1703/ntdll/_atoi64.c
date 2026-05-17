/*
 * XREFs of _atoi64 @ 0x180096780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return sub_18009C3D8(String, 0LL, 10LL);
  else
    return 0LL;
}
