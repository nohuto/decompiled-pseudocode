/*
 * XREFs of ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z @ 0x180183780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180132968 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::InsertDependenciesInOrder(
        CInteractionTrackerScaleAnimation *this,
        __int64 a2)
{
  struct CResource *v2; // rdi
  struct _RTL_GENERIC_TABLE *v5; // rcx
  int WeakReferenceBase; // eax
  int *v7; // r14
  unsigned int i; // esi
  __int64 v9; // rcx
  int v10; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CWeakReferenceBase *v12; // [rsp+40h] [rbp+8h] BYREF
  struct CWeakReferenceBase *v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = (struct CResource *)*((_QWORD *)this + 29);
  if ( v2 )
    v2 = (struct CResource *)*((_QWORD *)v2 + 1);
  v5 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 2);
  v13 = 0LL;
  WeakReferenceBase = CComposition::GetWeakReferenceBase(v5, v2, &v13);
  if ( WeakReferenceBase < 0 )
  {
    ModuleFailFastForHRESULT(WeakReferenceBase, retaddr);
    __debugbreak();
  }
  v12 = (struct CWeakReferenceBase *)0x1B0000001ALL;
  v7 = (int *)&v12;
  for ( i = 0; i < 2; ++i )
    CExpressionManager::InsertExpressionsInOrderForTarget(
      *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
      a2,
      (__int64)v13,
      *v7++);
  v9 = *((_QWORD *)v2 + 64);
  if ( v9 )
  {
    v12 = 0LL;
    v10 = CComposition::GetWeakReferenceBase(
            *((struct _RTL_GENERIC_TABLE **)this + 2),
            (struct CResource *)((v9 + 8) & -(__int64)(v9 != 0)),
            &v12);
    if ( v10 < 0 )
    {
      ModuleFailFastForHRESULT(v10, retaddr);
      __debugbreak();
    }
    CExpressionManager::InsertExpressionsInOrderForTarget(
      *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
      a2,
      (__int64)v12,
      3);
    CExpressionManager::InsertExpressionsInOrderForTarget(
      *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
      a2,
      (__int64)v12,
      9);
  }
}
