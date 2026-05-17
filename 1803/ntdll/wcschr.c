/*
 * XREFs of wcschr @ 0x180090C50
 * Callers:
 *     LdrSetDllDirectory @ 0x180002990 (LdrSetDllDirectory.c)
 *     sub_180004530 @ 0x180004530 (sub_180004530.c)
 *     sub_18006E510 @ 0x18006E510 (sub_18006E510.c)
 *     RtlGetExePath @ 0x1800814A0 (RtlGetExePath.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}
