/*
 * XREFs of ?SetProperty@CHolographicExclusiveMode@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801BD570
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z @ 0x1801C13F8 (-SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z.c)
 */

__int64 __fastcall CHolographicExclusiveMode::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  CHolographicManager *v4; // rcx

  if ( a3 == 18 && a2 == 1 )
  {
    v4 = *(CHolographicManager **)(a1 + 56);
    if ( v4 )
      CHolographicManager::SetExclusiveOpacity(v4, *a4);
  }
  return 0LL;
}
