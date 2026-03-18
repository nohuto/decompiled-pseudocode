/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00C1AB0
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C00BEF10 (GdiMultiUserFontCleanup.c)
 *     EngCloseFNTCache @ 0x1C00BFD94 (EngCloseFNTCache.c)
 *     InitFNTCache @ 0x1C00C0ED0 (InitFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C00C1B34 (vUnmapFontCacheFile.c)
 */

void __fastcall vCleanUpFntCacheInternal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( ghkeyGreInitialize )
  {
    ZwClose(ghkeyGreInitialize);
    ghkeyGreInitialize = 0LL;
  }
  v3 = qword_1C0327748;
  if ( qword_1C0327748 )
  {
    if ( *(_QWORD *)qword_1C0327748 )
    {
      vUnmapFontCacheFile();
      v3 = qword_1C0327748;
    }
    if ( *(_QWORD *)(v3 + 104) )
    {
      ZwClose(*(HANDLE *)(v3 + 104));
      v3 = qword_1C0327748;
      *(_QWORD *)(qword_1C0327748 + 104) = 0LL;
    }
    Win32FreePool(v3, a2, a3);
    qword_1C0327748 = 0LL;
  }
  dword_1C0327740 = 0;
  gbFntCacheClosed = 1;
}
