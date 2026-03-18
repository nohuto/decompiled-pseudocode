/*
 * XREFs of ?SetProperty@CHolographicExclusiveMode@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801F9B60
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z @ 0x1801F9320 (-SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z.c)
 */

__int64 __fastcall CHolographicExclusiveMode::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  CHolographicInteropTaskQueue **v4; // rcx

  if ( a3 == 18 && a2 == 1 )
  {
    v4 = *(CHolographicInteropTaskQueue ***)(a1 + 56);
    if ( v4 )
      CHolographicManager::SetExclusiveOpacity(v4, *a4);
  }
  return 0LL;
}
