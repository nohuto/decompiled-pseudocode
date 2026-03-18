/*
 * XREFs of ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C009DC6C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0013A34 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00670C0 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C0072A24 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C00A1C48 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00AD194 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UpdateAllocationPriority(VIDMM_GLOBAL *this, __int64 **a2, int a3)
{
  __int64 v4; // rbx
  bool v5; // zf
  unsigned int v6; // ecx
  __int64 PriorityClass; // rsi
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // r10
  __int64 v14; // r15
  _QWORD *v15; // rsi
  _QWORD **v16; // rsi
  _QWORD *v17; // r11
  _DWORD *v18; // rcx
  VIDMM_PROCESS_BUDGET_STATE *v19; // rcx
  __int64 v20; // r9
  char IsHighPriorityProcess; // al
  struct VIDMM_PROCESS_BUDGET_STATE *v22; // r8

  v4 = **a2;
  v5 = *(_DWORD *)(v4 + 128) == 2;
  v6 = *(_DWORD *)(v4 + 376);
  *(_DWORD *)(v4 + 376) = a3;
  if ( v5 && (*(_DWORD *)(*(_QWORD *)(v4 + 136) + 80LL) & 0x1001) != 0 && (*(_DWORD *)(v4 + 76) & 0x400) == 0 )
  {
    PriorityClass = (int)VIDMM_SEGMENT::GetPriorityClass(v6);
    v9 = VIDMM_SEGMENT::GetPriorityClass(v8);
    v10 = v9;
    if ( (_DWORD)PriorityClass != v9 )
    {
      DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v4 + 320));
      v13 = *(_QWORD **)(v4 + 296);
      if ( v13 != (_QWORD *)(v4 + 296) )
      {
        v14 = PriorityClass;
        do
        {
          v15 = v13;
          v13 = (_QWORD *)*v13;
          v16 = (_QWORD **)(v15 - 2);
          v17 = *v16;
          while ( v17 != v16 )
          {
            v18 = v17 - 5;
            v17 = (_QWORD *)*v17;
            if ( (v18[7] & 3) == 2 )
            {
              v19 = (VIDMM_PROCESS_BUDGET_STATE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 8LL)
                                                                                     + 16LL)
                                                                         + 8LL
                                                                         * *(unsigned int *)(*((_QWORD *)this + 3)
                                                                                           + 200LL))
                                                             + 48LL)
                                                 + 296LL * (*(_DWORD *)(v4 + 76) & 0x3F));
              *((_QWORD *)v19 + v14 + 32) -= *(_QWORD *)(v4 + 16);
              *((_QWORD *)v19 + v10 + 32) += *(_QWORD *)(v4 + 16);
              if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v19) )
              {
                IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(v20 + 32));
                VIDMM_GLOBAL::AddToPromotionCandidateList(this, *(_DWORD *)(v4 + 76) & 0x3F, v22, IsHighPriorityProcess);
              }
            }
          }
        }
        while ( v13 != (_QWORD *)(v4 + 296) );
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v4 + 320), v11, v12);
      VIDMM_GLOBAL::RequestNewBudget(this, 1);
    }
  }
}
