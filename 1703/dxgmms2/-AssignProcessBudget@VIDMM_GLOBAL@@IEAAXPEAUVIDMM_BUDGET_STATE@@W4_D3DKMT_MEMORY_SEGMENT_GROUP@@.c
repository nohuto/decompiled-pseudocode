/*
 * XREFs of ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C00A5284
 * Callers:
 *     ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C00A4D84 (-AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GRO.c)
 *     ?AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00A5134 (-AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0012984 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     Template_xxpqhccccc @ 0x1C0021CCC (Template_xxpqhccccc.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C0099858 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00A4C40 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVID.c)
 */

void __fastcall VIDMM_GLOBAL::AssignProcessBudget(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        struct VIDMM_PROCESS_ADAPTER_INFO *a4,
        unsigned __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  struct VIDMM_PROCESS_BUDGET_STATE *v9; // rdi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE ***v13; // rsi
  __int64 v14; // rdx
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v16; // rcx

  v5 = *((unsigned int *)a2 + 69);
  v7 = 280 * v5;
  v8 = a3;
  v9 = (struct VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)a4 + 6) + 264 * v5);
  v11 = a5;
  v12 = *((_QWORD *)v9 + v8 + 5);
  v13 = (struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE ***)(*((_QWORD *)this + 5150) + v7);
  if ( v12 && a5 >= v12 )
    v11 = *((_QWORD *)v9 + v8 + 5);
  v14 = *((_QWORD *)v9 + v8 + 3);
  if ( v11 >= (unsigned __int64)v13[v8 + 8] )
    v11 = (unsigned __int64)v13[v8 + 8];
  *((_QWORD *)v9 + v8 + 3) = v11;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    Template_xxpqhccccc(*((_QWORD *)a4 + 5), v14, (__int64)a2);
  *((_DWORD *)a4 + 91) = *((_DWORD *)a4 + 90);
  *((_DWORD *)a4 + 89) = *((_DWORD *)a4 + 88);
  if ( !(_DWORD)v8 && VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v9) )
  {
    IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(*((_QWORD *)a4 + 5) + 32LL));
    VIDMM_GLOBAL::AddToPromotionCandidateList(v16, v13, v9, IsHighPriorityProcess);
  }
}
