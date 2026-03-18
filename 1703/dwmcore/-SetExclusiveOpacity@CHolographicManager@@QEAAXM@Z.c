/*
 * XREFs of ?SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z @ 0x1801A6570
 * Callers:
 *     ?SetProperty@CHolographicExclusiveMode@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A4810 (-SetProperty@CHolographicExclusiveMode@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::SetExclusiveOpacity(CHolographicManager *this, float a2)
{
  CHolographicInteropTaskQueue *v2; // rcx
  void *v3; // [rsp+50h] [rbp+8h]

  v2 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
  *(float *)&v3 = a2;
  if ( v2 )
    CHolographicInteropTaskQueue::PostMessageW(v2, 0x10u, 0LL, v3, 0LL, 0LL, 0LL);
}
