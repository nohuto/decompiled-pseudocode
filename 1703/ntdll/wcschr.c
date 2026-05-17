/*
 * XREFs of wcschr @ 0x18009BA10
 * Callers:
 *     LdrSetDllDirectory @ 0x1800038F0 (LdrSetDllDirectory.c)
 *     sub_18004F9DC @ 0x18004F9DC (sub_18004F9DC.c)
 *     RtlGetExePath @ 0x1800504F0 (RtlGetExePath.c)
 *     sub_1801050C4 @ 0x1801050C4 (sub_1801050C4.c)
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
