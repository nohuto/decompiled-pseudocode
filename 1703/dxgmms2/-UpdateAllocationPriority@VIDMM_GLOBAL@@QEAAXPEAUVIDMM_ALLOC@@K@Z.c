/*
 * XREFs of ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C0095A6C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0012984 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0063A64 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C006D220 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C0099858 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00A4C40 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVID.c)
 */

void __fastcall VIDMM_GLOBAL::UpdateAllocationPriority(VIDMM_GLOBAL *this, __int64 **a2, int a3)
{
  __int64 v4; // rbx
  bool v5; // zf
  unsigned int v6; // ecx
  __int64 PriorityClass; // rdi
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // r11
  __int64 v14; // r12
  _QWORD **v15; // r14
  _QWORD *v16; // rdi
  _DWORD *v17; // rcx
  VIDMM_PROCESS_BUDGET_STATE *v18; // rcx
  __int64 v19; // r9
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v21; // rcx
  struct VIDMM_PROCESS_BUDGET_STATE *v22; // r8
  struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *v23; // r10

  v4 = **a2;
  v5 = *(_DWORD *)(v4 + 128) == 2;
  v6 = *(_DWORD *)(v4 + 408);
  *(_DWORD *)(v4 + 408) = a3;
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
          v15 = (_QWORD **)(v13 - 2);
          v13 = (_QWORD *)*v13;
          v16 = *v15;
          while ( v16 != v15 )
          {
            v17 = v16 - 5;
            v16 = (_QWORD *)*v16;
            if ( (v17[7] & 3) == 2 )
            {
              v18 = (VIDMM_PROCESS_BUDGET_STATE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL)
                                                                                     + 16LL)
                                                                         + 8LL
                                                                         * *(unsigned int *)(*((_QWORD *)this + 3)
                                                                                           + 200LL))
                                                             + 48LL)
                                                 + 264LL * (*(_DWORD *)(v4 + 76) & 0x3F));
              *((_QWORD *)v18 + v14 + 28) -= *(_QWORD *)(v4 + 16);
              *((_QWORD *)v18 + v10 + 28) += *(_QWORD *)(v4 + 16);
              if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v18) )
              {
                IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(v19 + 32));
                VIDMM_GLOBAL::AddToPromotionCandidateList(v21, v23, v22, IsHighPriorityProcess);
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
