/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0009204
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C0008710 (GdiMultiUserFontCleanup.c)
 *     CloseFNTCache @ 0x1C000A6DC (CloseFNTCache.c)
 *     InitFNTCache @ 0x1C000F2D0 (InitFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C000928C (vUnmapFontCacheFile.c)
 */

void vCleanUpFntCacheInternal(void)
{
  __int64 v0; // rcx

  if ( ghkeyGreInitialize )
  {
    ZwClose(ghkeyGreInitialize);
    ghkeyGreInitialize = 0LL;
  }
  v0 = qword_1C032C4C8;
  if ( qword_1C032C4C8 )
  {
    if ( *(_QWORD *)qword_1C032C4C8 )
    {
      vUnmapFontCacheFile();
      v0 = qword_1C032C4C8;
    }
    if ( *(_QWORD *)(v0 + 152) )
    {
      ZwClose(*(HANDLE *)(v0 + 152));
      v0 = qword_1C032C4C8;
      *(_QWORD *)(qword_1C032C4C8 + 152) = 0LL;
    }
    Win32FreePool(v0);
    qword_1C032C4C8 = 0LL;
  }
  dword_1C032C4C0 = 0;
  gbFntCacheClosed = 1;
}
