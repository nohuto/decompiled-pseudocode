/*
 * XREFs of ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00A56F0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002144 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C004E974 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C00A53B4 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 */

void __fastcall VIDMM_GLOBAL::SetupBudgetState(VIDMM_GLOBAL *this, struct VIDMM_BUDGET_STATE *a2, unsigned int a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // r9
  __int64 v6; // rdx
  char *v8; // r14
  char *v9; // rsi
  __int64 v10; // r12
  _QWORD *v11; // rdi
  VIDMM_GLOBAL *v12; // rcx
  VIDMM_PROCESS *v13; // rax
  struct DXGPROCESS *v14; // rdx
  int *v15; // r8
  int *v16; // r9
  __int64 v17; // rdx
  _QWORD *v18; // rax
  char *v19; // rcx
  char *v20; // rax
  char **v21; // rdx
  __int64 v22; // rdx
  _QWORD *v23; // rdi
  __int64 v24; // r9
  unsigned __int64 *v25; // r8
  unsigned int v26; // r10d
  _DWORD *v27; // rsi
  unsigned int v28; // r11d
  int v29; // r9d
  __int64 v30; // r14
  _QWORD *v31; // rdi
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rcx
  int v34; // eax
  unsigned __int64 v35; // rcx
  _BYTE v36[72]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+80h] [rbp+18h]

  v3 = a3;
  v4 = (_QWORD *)((char *)a2 + 48);
  *((_DWORD *)a2 + 69) = a3;
  v6 = 3LL;
  do
  {
    *(v4 - 5) = v4 - 6;
    *(v4 - 6) = v4 - 6;
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v6;
  }
  while ( v6 );
  v8 = (char *)this + 41008;
  v9 = (char *)*((_QWORD *)this + 5126);
  if ( v9 != (char *)this + 41008 )
  {
    v10 = 264LL * a3;
    do
    {
      v11 = (_QWORD *)(v10 + *((_QWORD *)v9 + 3));
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v36, (struct _KTHREAD **)v9 + 38);
      v11[23] = v11[17];
      v11[24] = v11[18];
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
      v11[24] += VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v11);
      v13 = (VIDMM_PROCESS *)*((_QWORD *)v9 + 2);
      v14 = (struct DXGPROCESS *)*((_QWORD *)v13 + 4);
      if ( v14 && v13 != g_pVidMmSystemProcess )
      {
        VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
          v12,
          v14,
          (enum VIDMM_BUDGET_PRIORITY_BAND *)(v9 + 336),
          (enum VIDMM_BUDGET_VISIBILITY_STATE *)(v9 + 328));
        v17 = *v11;
        if ( *v11 )
        {
          v18 = (_QWORD *)v11[1];
          if ( *(_QWORD **)(v17 + 8) != v11 || (_QWORD *)*v18 != v11 )
            __fastfail(3u);
          *v18 = v17;
          *(_QWORD *)(v17 + 8) = v18;
          *v11 = 0LL;
          v11[1] = 0LL;
        }
        v19 = v9 + 344;
        v20 = (char *)a2 + 16 * *v15;
        v21 = (char **)*((_QWORD *)v20 + 1);
        if ( *v21 != v20 )
          __fastfail(3u);
        *((_QWORD *)v9 + 44) = v21;
        *(_QWORD *)v19 = v20;
        *v21 = v19;
        *((_QWORD *)v20 + 1) = v19;
        v22 = 24LL;
        *((_DWORD *)a2 + *v15 + 66) += dword_1C0031408[*v16];
        v23 = v11 + 7;
        v24 = 2LL;
        do
        {
          *((_QWORD *)a2 + v22 + *v15 - 12) += v23[16];
          if ( *v23 )
          {
            *((_QWORD *)a2 + v22 + *v15) += *v23;
            ++*((_DWORD *)a2 + v22 + *v15 + 36);
          }
          ++v23;
          v22 += 3LL;
          --v24;
        }
        while ( v24 );
      }
      v9 = *(char **)v9;
    }
    while ( v9 != v8 );
  }
  v25 = (unsigned __int64 *)((char *)a2 + 152);
  v26 = v37;
  v27 = (_DWORD *)((char *)a2 + 244);
  v28 = v37;
  v29 = 0;
  v30 = 280 * v3;
  v31 = (_QWORD *)(280 * v3 + *((_QWORD *)this + 5150) + 32LL);
  do
  {
    if ( *(_BYTE *)(v30 + *((_QWORD *)this + 5150) + 275) )
    {
      if ( v29 )
      {
        if ( v29 == 1 )
        {
          v26 = dword_1C003C428;
          v28 = dword_1C003C42C;
        }
      }
      else
      {
        v26 = dword_1C003C420;
        v28 = dword_1C003C424;
      }
    }
    else
    {
      v26 = dword_1C003C418;
      v28 = dword_1C003C41C;
    }
    v32 = *v31 * (unsigned __int64)v26 / 0x64;
    *(v25 - 1) = v32;
    v33 = *v31 * (unsigned __int64)v28 / 0x64;
    *v25 = v33;
    v34 = *((_DWORD *)a2 + 67);
    if ( v34 && *v27 == v34 )
    {
      if ( v25[6] < v33 )
        v33 = v25[6];
      *v25 = v33;
    }
    ++v29;
    v35 = *v31++ - *v25;
    v27 += 3;
    v25[1] = v35 - v32;
    v25 += 3;
  }
  while ( v29 < 2 );
}
