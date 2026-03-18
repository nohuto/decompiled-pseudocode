/*
 * XREFs of RaspClearCache @ 0x140755AA0
 * Callers:
 *     ResFwFreeContext @ 0x140755078 (ResFwFreeContext.c)
 *     AnFwpDisableProgressTimer @ 0x140755A34 (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x140757A8C (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x140758C40 (BgpTxtDestroyRegion.c)
 * Callees:
 *     RaspDestroyCachedBitmap @ 0x1407586A4 (RaspDestroyCachedBitmap.c)
 */

__int64 *RaspClearCache()
{
  __int64 *result; // rax
  __int64 v1; // rcx

  result = (__int64 *)RaspBitmapCache;
  v1 = *(_QWORD *)RaspBitmapCache;
  if ( *(__int64 **)(RaspBitmapCache + 8) != &RaspBitmapCache || *(_QWORD *)(v1 + 8) != RaspBitmapCache )
    __fastfail(3u);
  while ( 1 )
  {
    RaspBitmapCache = v1;
    *(_QWORD *)(v1 + 8) = &RaspBitmapCache;
    if ( result == &RaspBitmapCache )
      break;
    RaspDestroyCachedBitmap(result);
    result = (__int64 *)RaspBitmapCache;
    v1 = *(_QWORD *)RaspBitmapCache;
    if ( *(__int64 **)(RaspBitmapCache + 8) != &RaspBitmapCache || *(_QWORD *)(v1 + 8) != RaspBitmapCache )
      __fastfail(3u);
  }
  dword_140341934 = 0;
  return result;
}
