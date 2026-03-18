/*
 * XREFs of ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00ADD58
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013B00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C0050E60 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00581DC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C0066DB4 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 *     ?CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00ADB84 (-CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET.c)
 */

void __fastcall VIDMM_GLOBAL::SetupBudgetState(VIDMM_GLOBAL *this, struct VIDMM_BUDGET_STATE *a2, unsigned int a3)
{
  int v4; // r12d
  __int64 v5; // rcx
  struct VIDMM_BUDGET_STATE *v6; // r8
  char *v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rsi
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rbx
  char *v19; // rdi
  struct _KTHREAD *v20; // rdi
  __int64 v21; // r12
  _QWORD *v22; // rbx
  VIDMM_GLOBAL *v23; // rcx
  VIDMM_PROCESS *v24; // rax
  struct DXGPROCESS *v25; // rdx
  int *v26; // rbp
  __int64 v27; // rdx
  _QWORD *v28; // rax
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v29; // esi
  _QWORD *v30; // rbx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  char *v32; // rbp
  int v33; // esi
  __int64 v34; // rdi
  __int64 v35; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // rbx
  _QWORD **v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  struct VIDMM_PHYSICAL_ADAPTER *v41; // [rsp+20h] [rbp-78h]
  char *v42; // [rsp+28h] [rbp-70h]
  _BYTE v43[104]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+8h]
  __int64 v45; // [rsp+A8h] [rbp+10h]
  struct VIDMM_BUDGET_STATE *v47; // [rsp+B8h] [rbp+20h]

  *(_DWORD *)a2 = a3;
  v4 = 0;
  v44 = a3;
  v5 = a3;
  v6 = (struct VIDMM_BUDGET_STATE *)(1552LL * a3);
  v47 = v6;
  v41 = (struct VIDMM_BUDGET_STATE *)((char *)v6 + *((_QWORD *)this + 5021));
  v42 = (char *)v6 + 504;
  v7 = (char *)v6 + 504;
  v8 = ((*((_BYTE *)v41 + 437) & 8) != 0) + 1LL;
  v45 = v8;
  v9 = 0LL;
  do
  {
    v10 = *((_QWORD *)this + 5021);
    if ( (v7[v10] & 1) == 0 )
    {
      v18 = 3LL;
      v19 = (char *)v6 + 328 * v4 + v10;
      do
      {
        memset(v19 + 760, 0, 0x60uLL);
        --v18;
      }
      while ( v18 );
LABEL_20:
      v6 = v47;
      v5 = v44;
      goto LABEL_21;
    }
    v11 = VIDMM_PARTITION::_PartitionTree;
    v12 = 0LL;
    while ( v11 )
    {
      v12 = v11;
      v11 = (_QWORD *)*v11;
    }
    if ( v12 )
    {
      v13 = 328 * v5;
      do
      {
        v14 = 3LL;
        v15 = *(_QWORD *)(368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL) + v12[4] + 24);
        do
        {
          memset((void *)(v15 + v13 + 224), 0, 0x60uLL);
          --v14;
        }
        while ( v14 );
        v16 = (_QWORD *)v12[1];
        v17 = v12;
        if ( v16 )
        {
          do
          {
            v12 = v16;
            v16 = (_QWORD *)*v16;
          }
          while ( v16 );
        }
        else
        {
          while ( 1 )
          {
            v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v12 || (_QWORD *)*v12 == v17 )
              break;
            v17 = v12;
          }
        }
      }
      while ( v12 );
      v8 = v45;
      goto LABEL_20;
    }
LABEL_21:
    ++v4;
    ++v9;
    v7 += 24;
  }
  while ( v9 < v8 );
  v20 = (struct _KTHREAD *)*((_QWORD *)this + 5126);
  if ( v20 != (VIDMM_GLOBAL *)((char *)this + 41008) )
  {
    v21 = 296 * v5;
    do
    {
      v22 = (_QWORD *)(v21 + *((_QWORD *)v20 + 3));
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v43, (struct _KTHREAD **)v20 + 42);
      v22[23] = v22[17];
      v22[24] = v22[18];
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
      v22[24] += VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v22);
      v24 = (VIDMM_PROCESS *)*((_QWORD *)v20 + 2);
      v25 = (struct DXGPROCESS *)*((_QWORD *)v24 + 4);
      if ( v25 && v24 != g_pVidMmSystemProcess )
      {
        v26 = (int *)((char *)v20 + 368);
        VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
          v23,
          v25,
          (struct _KTHREAD *)((char *)v20 + 368),
          (struct _KTHREAD *)((char *)v20 + 360));
        v27 = *v22;
        if ( *v22 )
        {
          if ( *(_QWORD **)(v27 + 8) != v22 || (v28 = (_QWORD *)v22[1], (_QWORD *)*v28 != v22) )
            __fastfail(3u);
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
          *v22 = 0LL;
          v22[1] = 0LL;
        }
        v29 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
        v30 = v22 + 7;
        do
        {
          SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                                this,
                                a3,
                                v29,
                                *(struct VIDMM_PARTITION **)(*((_QWORD *)v20 + 2) + 168LL));
          *((_QWORD *)SegmentGroupState + *v26 + 28) += v30[16];
          if ( *v30 )
          {
            *((_QWORD *)SegmentGroupState + *v26 + 34) += *v30;
            ++*((_DWORD *)SegmentGroupState + *v26 + 74);
          }
          ++v29;
          ++v30;
        }
        while ( v29 < 2 );
        v8 = v45;
      }
      v20 = *(struct _KTHREAD **)v20;
    }
    while ( v20 != (VIDMM_GLOBAL *)((char *)this + 41008) );
  }
  v32 = v42;
  v33 = 0;
  v34 = 0LL;
  do
  {
    v35 = *((_QWORD *)this + 5021);
    if ( (v32[v35] & 1) != 0 )
    {
      v36 = VIDMM_PARTITION::_PartitionTree;
      v37 = 0LL;
      while ( v36 )
      {
        v37 = v36;
        v36 = (_QWORD *)*v36;
      }
      if ( v37 )
      {
        do
        {
          VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
            this,
            v41,
            v6,
            (struct VIDMM_SEGMENT_GROUP_STATE *)(328 * v44
                                               + *(_QWORD *)(368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL)
                                                           + v37[4]
                                                           + 24)));
          v38 = (_QWORD **)v37[1];
          v39 = v37;
          if ( v38 )
          {
            v40 = *v38;
            v37 = (_QWORD *)v37[1];
            while ( v40 )
            {
              v37 = v40;
              v40 = (_QWORD *)*v40;
            }
          }
          else
          {
            while ( 1 )
            {
              v37 = (_QWORD *)(v37[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v37 || (_QWORD *)*v37 == v39 )
                break;
              v39 = v37;
            }
          }
        }
        while ( v37 );
        v8 = v45;
      }
    }
    else
    {
      VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
        this,
        v41,
        v6,
        (struct VIDMM_BUDGET_STATE *)((char *)v47 + 328 * v33 + v35 + 536));
    }
    ++v33;
    ++v34;
    v32 += 24;
  }
  while ( v34 < v8 );
}
