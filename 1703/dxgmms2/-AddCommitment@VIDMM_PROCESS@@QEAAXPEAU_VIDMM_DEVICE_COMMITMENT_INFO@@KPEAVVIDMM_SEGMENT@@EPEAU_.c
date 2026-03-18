/*
 * XREFs of ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E4CC
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00915B4 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0012984 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     Template_xxpqhc @ 0x1C0020B14 (Template_xxpqhc.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C006D220 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C0099858 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00A4C40 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVID.c)
 */

void __fastcall VIDMM_PROCESS::AddCommitment(
        DXGPROCESS **this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
  _BYTE *v7; // r9
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // r12
  _QWORD *v13; // rcx
  __int64 v14; // rax
  unsigned __int8 v15; // bl
  struct VIDMM_SEGMENT *v16; // rdi
  __int64 *v17; // rdi
  struct VIDMM_PROCESS_BUDGET_STATE *v18; // rbx
  _QWORD *v19; // r8
  struct VIDMM_SEGMENT **v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  int PriorityClass; // eax
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v25; // rcx
  struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *v26; // r10

  v7 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  v10 = a3;
  v11 = *((_QWORD *)a6 + 2);
  if ( g_IsInternalReleaseOrDbg )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v7 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
    v21[3] = this;
    v21[4] = v10;
    v21[5] = a4;
    v21[6] = a5;
    v21[7] = v11;
  }
  v12 = v10;
  v13 = (_QWORD *)*((_QWORD *)this[2] + v10);
  if ( v13 )
    v14 = v13[2] + 184LL * *((unsigned int *)a4 + 5);
  else
    v14 = 0LL;
  *(_QWORD *)(v14 + 16) += v11;
  v15 = 1;
  ++*(_DWORD *)(v14 + 56);
  if ( !a5 )
    goto LABEL_6;
  ++*(_DWORD *)(v14 + 8);
  v19 = *(_QWORD **)(v14 + 48);
  v13 = (_QWORD *)((char *)a2 + 16);
  if ( *v19 != v14 + 40 )
    __fastfail(3u);
  *v13 = v14 + 40;
  *((_QWORD *)a2 + 3) = v19;
  *v19 = v13;
  *(_QWORD *)(v14 + 48) = v13;
  if ( *(_DWORD *)(v14 + 8) != 1 )
LABEL_6:
    v15 = 0;
  v16 = (struct VIDMM_SEGMENT *)(v14 + 24);
  if ( *v7 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
    v22[3] = v16;
    v22[4] = a4;
    v22[5] = v15;
    v22[6] = v11;
  }
  if ( v15 )
  {
    v20 = (struct VIDMM_SEGMENT **)*((_QWORD *)a4 + 21);
    if ( *v20 != (struct VIDMM_SEGMENT *)((char *)a4 + 160) )
      __fastfail(3u);
    *(_QWORD *)v16 = (char *)a4 + 160;
    *((_QWORD *)v16 + 1) = v20;
    *v20 = v16;
    *((_QWORD *)a4 + 21) = v16;
  }
  v17 = (__int64 *)*((_QWORD *)this[2] + v12);
  v18 = (struct VIDMM_PROCESS_BUDGET_STATE *)(v17[6] + 264 * (*((_DWORD *)a6 + 19) & 0x3FLL));
  _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + *((int *)a4 + 125) + 25, v11);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    Template_xxpqhc(v17[5], &EventVidMmProcessCommitmentChange, *v17);
  if ( (*((_DWORD *)a4 + 20) & 0x1001) != 0 && (*((_DWORD *)a6 + 19) & 0x400) == 0 )
  {
    PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a6 + 102));
    *((_QWORD *)v18 + PriorityClass + 28) += v11;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      Template_xxpqhc(v17[5], &EventVidMmProcessDemotedCommitmentChange, *v17);
    if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v18) )
    {
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(this[4]);
      VIDMM_GLOBAL::AddToPromotionCandidateList(v25, v26, v18, IsHighPriorityProcess);
    }
  }
}
