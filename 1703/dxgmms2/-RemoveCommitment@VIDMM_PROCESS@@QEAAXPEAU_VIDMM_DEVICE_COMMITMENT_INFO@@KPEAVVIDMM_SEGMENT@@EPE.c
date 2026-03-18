/*
 * XREFs of ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E644
 * Callers:
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004D484 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     Template_xxpqhc @ 0x1C0020B14 (Template_xxpqhc.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C006D220 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_PROCESS::RemoveCommitment(
        VIDMM_PROCESS *this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
  _BYTE *v7; // r9
  __int64 v9; // rbx
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int8 v16; // si
  _QWORD *v17; // rbx
  __int64 *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  int PriorityClass; // eax

  v7 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  v9 = a3;
  v11 = *((_QWORD *)a6 + 2);
  if ( g_IsInternalReleaseOrDbg )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v7 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
    v24[3] = this;
    v24[4] = v9;
    v24[5] = a4;
    v24[6] = a5;
    v24[7] = v11;
  }
  v12 = v9;
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v9);
  if ( v13 )
    v14 = *(_QWORD *)(v13 + 16) + 184LL * *((unsigned int *)a4 + 5);
  else
    v14 = 0LL;
  *(_QWORD *)(v14 + 16) -= v11;
  v15 = 0xFFFFFFFFLL;
  --*(_DWORD *)(v14 + 56);
  if ( !a5 )
    goto LABEL_6;
  --*(_DWORD *)(v14 + 8);
  v15 = (__int64)a2 + 16;
  v20 = *((_QWORD *)a2 + 2);
  v21 = (_QWORD *)*((_QWORD *)a2 + 3);
  if ( *(struct _VIDMM_DEVICE_COMMITMENT_INFO **)(v20 + 8) != (struct _VIDMM_DEVICE_COMMITMENT_INFO *)((char *)a2 + 16)
    || *v21 != v15 )
  {
    __fastfail(3u);
  }
  *v21 = v20;
  *(_QWORD *)(v20 + 8) = v21;
  *(_QWORD *)v15 = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  if ( *(_DWORD *)(v14 + 8) )
LABEL_6:
    v16 = 0;
  else
    v16 = 1;
  v17 = (_QWORD *)(v14 + 24);
  if ( *v7 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
    v25[3] = v17;
    v25[4] = a4;
    v25[5] = v16;
    v25[6] = v11;
  }
  if ( v16 )
  {
    v22 = *v17;
    v23 = (_QWORD *)v17[1];
    if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v23 != v17 )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    *v17 = 0LL;
    v17[1] = 0LL;
  }
  v18 = *(__int64 **)(*((_QWORD *)this + 2) + 8 * v12);
  v19 = v18[6] + 264 * (*((_DWORD *)a6 + 19) & 0x3FLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 8LL * *((int *)a4 + 125) + 200), -v11);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    Template_xxpqhc(v18[5], &EventVidMmProcessCommitmentChange, *v18);
  if ( (*((_DWORD *)a4 + 20) & 0x1001) != 0 && (*((_DWORD *)a6 + 19) & 0x400) == 0 )
  {
    PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a6 + 102));
    *(_QWORD *)(v19 + 8LL * PriorityClass + 224) -= v11;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      Template_xxpqhc(*((_WORD *)a6 + 38) & 0x3F, &EventVidMmProcessDemotedCommitmentChange, PriorityClass);
  }
}
