/*
 * XREFs of RaspClearCache @ 0x1407CF9E4
 * Callers:
 *     AnFwpDisableProgressTimer @ 0x1407CE49C (AnFwpDisableProgressTimer.c)
 *     BgpTxtDestroyRegion @ 0x1407CF358 (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x1407CFA7C (AnFwDisplayProgressIndicator.c)
 *     ResFwFreeContext @ 0x1407D3A5C (ResFwFreeContext.c)
 * Callees:
 *     RaspDestroyCachedBitmap @ 0x1407D00AC (RaspDestroyCachedBitmap.c)
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
  dword_14035A0B4 = 0;
  return result;
}
