/*
 * XREFs of ?InsertDependenciesInOrder@CInteractionTrackerPositionAnimation@@MEAAX_K@Z @ 0x1801831A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180132968 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 */

void __fastcall CInteractionTrackerPositionAnimation::InsertDependenciesInOrder(
        CInteractionTrackerPositionAnimation *this,
        __int64 a2)
{
  struct CResource *v2; // rbx
  struct _RTL_GENERIC_TABLE *v5; // rcx
  int WeakReferenceBase; // eax
  int *v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rcx
  int v10; // eax
  struct CWeakReferenceBase *v11; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v12[4]; // [rsp+28h] [rbp-30h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (struct CResource *)*((_QWORD *)this + 29);
  if ( v2 )
    v2 = (struct CResource *)*((_QWORD *)v2 + 1);
  v5 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 2);
  v11 = 0LL;
  WeakReferenceBase = CComposition::GetWeakReferenceBase(v5, v2, &v11);
  if ( WeakReferenceBase < 0 )
  {
    ModuleFailFastForHRESULT(WeakReferenceBase, retaddr);
    __debugbreak();
  }
  v12[0] = 2;
  v7 = v12;
  v12[1] = 20;
  v8 = 0;
  v12[2] = 23;
  do
  {
    CExpressionManager::InsertExpressionsInOrderForTarget(
      *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
      a2,
      (__int64)v11,
      *v7);
    ++v8;
    ++v7;
  }
  while ( v8 < 3 );
  v9 = *((_QWORD *)v2 + 64);
  if ( v9 )
  {
    v11 = 0LL;
    v10 = CComposition::GetWeakReferenceBase(
            *((struct _RTL_GENERIC_TABLE **)this + 2),
            (struct CResource *)((v9 + 8) & -(__int64)(v9 != 0)),
            &v11);
    if ( v10 < 0 )
    {
      ModuleFailFastForHRESULT(v10, retaddr);
      __debugbreak();
    }
    CExpressionManager::InsertExpressionsInOrderForTarget(
      *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
      a2,
      (__int64)v11,
      1);
    CExpressionManager::InsertExpressionsInOrderForTarget(
      *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
      a2,
      (__int64)v11,
      9);
  }
}
