/*
 * XREFs of ?SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z @ 0x1801F9320
 * Callers:
 *     ?SetProperty@CHolographicExclusiveMode@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801F9B60 (-SetProperty@CHolographicExclusiveMode@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::SetExclusiveOpacity(CHolographicInteropTaskQueue **this, float a2)
{
  void *v2; // [rsp+50h] [rbp+8h]

  *(float *)&v2 = a2;
  if ( this[5] )
  {
    if ( *((_BYTE *)this + 224) )
      CHolographicInteropTaskQueue::PostMessageW(this[5], 0x11u, 0LL, v2, 0LL, 0LL, 0LL);
  }
}
