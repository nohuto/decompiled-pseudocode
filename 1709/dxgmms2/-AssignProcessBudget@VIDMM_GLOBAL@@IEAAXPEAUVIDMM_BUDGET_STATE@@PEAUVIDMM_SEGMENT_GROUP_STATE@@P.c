/*
 * XREFs of ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C00AD914
 * Callers:
 *     ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C00AD450 (-AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STAT.c)
 *     ?AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00AD7F4 (-AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0013A34 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     McTemplateK0xxpqhccccc @ 0x1C0023F9C (McTemplateK0xxpqhccccc.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C00A1C48 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00AD194 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AssignProcessBudget(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3,
        struct VIDMM_PROCESS_ADAPTER_INFO *a4,
        unsigned __int64 a5)
{
  __int64 v6; // rsi
  struct VIDMM_PROCESS_BUDGET_STATE *v9; // rdi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  char IsHighPriorityProcess; // al

  v6 = *(int *)a3;
  v9 = (struct VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)a4 + 6) + 296LL * *(unsigned int *)a2);
  v10 = a5;
  v11 = *((_QWORD *)v9 + v6 + 5);
  if ( v11 && a5 >= v11 )
    v10 = *((_QWORD *)v9 + v6 + 5);
  v12 = *((_QWORD *)v9 + v6 + 3);
  if ( v10 >= *((_QWORD *)a3 + 3) )
    v10 = *((_QWORD *)a3 + 3);
  *((_QWORD *)v9 + v6 + 3) = v10;
  if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    McTemplateK0xxpqhccccc(*((_QWORD *)a4 + 5), v12, (__int64)a3);
  *((_DWORD *)a4 + 99) = *((_DWORD *)a4 + 98);
  *((_DWORD *)a4 + 97) = *((_DWORD *)a4 + 96);
  if ( !(_DWORD)v6 && VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v9) )
  {
    IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(*((_QWORD *)a4 + 5) + 32LL));
    VIDMM_GLOBAL::AddToPromotionCandidateList(this, *(_DWORD *)a2, v9, IsHighPriorityProcess);
  }
}
