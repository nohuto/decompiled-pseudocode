/*
 * XREFs of wcschr @ 0x180096780
 * Callers:
 *     LdrSetDllDirectory @ 0x180001F70 (LdrSetDllDirectory.c)
 *     RtlpGetDirPath @ 0x18007D694 (RtlpGetDirPath.c)
 *     RtlGetExePath @ 0x1800865B0 (RtlGetExePath.c)
 *     EtwpGenerateFileName @ 0x18010A398 (EtwpGenerateFileName.c)
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
