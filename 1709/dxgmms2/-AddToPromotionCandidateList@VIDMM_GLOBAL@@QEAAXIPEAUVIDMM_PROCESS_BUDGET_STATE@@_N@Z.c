/*
 * XREFs of ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00AD194
 * Callers:
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0052E98 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C009DC6C (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C00AD914 (-AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddToPromotionCandidateList(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_PROCESS_BUDGET_STATE *a3,
        char a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rcx

  if ( !*(_QWORD *)a3 )
  {
    v4 = (_QWORD *)(*((_QWORD *)this + 5021) + 1552LL * a2 + 472);
    if ( a4 )
    {
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 )
        __fastfail(3u);
      *(_QWORD *)a3 = v5;
      *((_QWORD *)a3 + 1) = v4;
      *(_QWORD *)(v5 + 8) = a3;
      *v4 = a3;
    }
    else
    {
      v6 = *(_QWORD **)(*((_QWORD *)this + 5021) + 1552LL * a2 + 480);
      if ( (_QWORD *)*v6 != v4 )
        __fastfail(3u);
      *(_QWORD *)a3 = v4;
      *((_QWORD *)a3 + 1) = v6;
      *v6 = a3;
      v4[1] = a3;
    }
  }
}
