/*
 * XREFs of ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0052E98
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C005BE50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0098D3C (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0013A34 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     McTemplateK0xxpqhc @ 0x1C0022BB4 (McTemplateK0xxpqhc.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C0072A24 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C00A1C48 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00AD194 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::AddCommitment(
        DXGPROCESS **this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // r12
  _QWORD *v12; // rcx
  __int64 v13; // rax
  unsigned __int8 v14; // bl
  struct VIDMM_SEGMENT *v15; // rdi
  __int64 *v16; // rdi
  struct VIDMM_PROCESS_BUDGET_STATE *v17; // rbx
  _QWORD *v18; // r8
  struct VIDMM_SEGMENT **v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  int PriorityClass; // eax
  char IsHighPriorityProcess; // al

  v9 = a3;
  v10 = *((_QWORD *)a6 + 2);
  if ( g_IsInternalReleaseOrDbg )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v20[3] = this;
    v20[4] = v9;
    v20[5] = a4;
    v20[6] = a5;
    v20[7] = v10;
  }
  v11 = v9;
  v12 = (_QWORD *)*((_QWORD *)this[2] + v9);
  if ( v12 )
    v13 = v12[2] + 184LL * *((unsigned int *)a4 + 5);
  else
    v13 = 0LL;
  *(_QWORD *)(v13 + 16) += v10;
  v14 = 1;
  ++*(_DWORD *)(v13 + 56);
  if ( !a5 )
    goto LABEL_6;
  ++*(_DWORD *)(v13 + 8);
  v18 = *(_QWORD **)(v13 + 48);
  v12 = (_QWORD *)((char *)a2 + 16);
  if ( *v18 != v13 + 40 )
    __fastfail(3u);
  *v12 = v13 + 40;
  *((_QWORD *)a2 + 3) = v18;
  *v18 = v12;
  *(_QWORD *)(v13 + 48) = v12;
  if ( *(_DWORD *)(v13 + 8) != 1 )
LABEL_6:
    v14 = 0;
  v15 = (struct VIDMM_SEGMENT *)(v13 + 24);
  if ( g_IsInternalReleaseOrDbg )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
    v21[3] = v15;
    v21[4] = a4;
    v21[5] = v14;
    v21[6] = v10;
  }
  if ( v14 )
  {
    v19 = (struct VIDMM_SEGMENT **)*((_QWORD *)a4 + 18);
    if ( *v19 != (struct VIDMM_SEGMENT *)((char *)a4 + 136) )
      __fastfail(3u);
    *(_QWORD *)v15 = (char *)a4 + 136;
    *((_QWORD *)v15 + 1) = v19;
    *v19 = v15;
    *((_QWORD *)a4 + 18) = v15;
  }
  v16 = (__int64 *)*((_QWORD *)this[2] + v11);
  v17 = (struct VIDMM_PROCESS_BUDGET_STATE *)(v16[6] + 296 * (*((_DWORD *)a6 + 19) & 0x3FLL));
  _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + *((int *)a4 + 119) + 25, v10);
  if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    McTemplateK0xxpqhc(v16[5], &EventVidMmProcessCommitmentChange, *v16);
  if ( (*((_DWORD *)a4 + 20) & 0x1001) != 0 && (*((_DWORD *)a6 + 19) & 0x400) == 0 )
  {
    PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a6 + 94));
    *((_QWORD *)v17 + PriorityClass + 32) += v10;
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      McTemplateK0xxpqhc(v16[5], &EventVidMmProcessDemotedCommitmentChange, *v16);
    if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v17) )
    {
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(this[4]);
      VIDMM_GLOBAL::AddToPromotionCandidateList(
        (VIDMM_GLOBAL *)*v16,
        *((_DWORD *)a6 + 19) & 0x3F,
        v17,
        IsHighPriorityProcess);
    }
  }
}
