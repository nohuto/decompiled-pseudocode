/*
 * XREFs of ResCGetSubIndexedName @ 0x180111190
 * Callers:
 *     ResCRuntimeGetSegmentDataEx @ 0x18008E028 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18010E75C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ResCGetIndexedName @ 0x180110974 (ResCGetIndexedName.c)
 *     ResCGetName @ 0x180110DA8 (ResCGetName.c)
 */

__int64 __fastcall ResCGetSubIndexedName(__int64 a1, __int64 a2, int a3, int a4, wchar_t *Buffer)
{
  int v6; // eax

  if ( !Buffer )
    return 0LL;
  if ( a3 >= 0 )
  {
    if ( a4 >= 0 )
    {
      v6 = StringCchPrintfW(Buffer, 0x103uLL, L"%s\\%s%04d\\%s%d%s", a1, L"rc", a3, L"Segment", a4, L".cmf");
      Buffer[259] = 0;
      return v6 >= 0;
    }
    else
    {
      return ResCGetIndexedName(a1, 261LL, a3, Buffer);
    }
  }
  else
  {
    if ( a4 >= 0 )
      return 0LL;
    return ResCGetName(a1, 261, Buffer);
  }
}
