/*
 * XREFs of ?QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C0025170
 * Callers:
 *     ?VidMmQueryProcessSegmentStatistics@@YAJPEAVVIDMM_GLOBAL@@IPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C0022F20 (-VidMmQueryProcessSegmentStatistics@@YAJPEAVVIDMM_GLOBAL@@IPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYS.c)
 * Callees:
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C005650C (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0063CE4 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C0074528 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?GetProcessWorkingSetInformation@VIDMM_PROCESS@@QEAAXPEAVVIDMM_SEGMENT@@PEA_K1@Z @ 0x1C00A8A4C (-GetProcessWorkingSetInformation@VIDMM_PROCESS@@QEAAXPEAVVIDMM_SEGMENT@@PEA_K1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessSegmentStatistics(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_PROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION *a4)
{
  unsigned int v6; // eax
  unsigned int v7; // r8d
  VIDMM_PROCESS *v8; // r10
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  VIDMM_PROCESS *v12; // r10
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r9
  struct VIDMM_SEGMENT *v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 >= *(_DWORD *)(*((_QWORD *)this + 5090) + 24LL) )
    return 3221225485LL;
  v6 = VIDMM_GLOBAL::AdapterId(this);
  CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(v8, v6, v7);
  if ( !CommitmentInformation )
    return 3221225485LL;
  v13 = *(_QWORD *)(v11 + 3712);
  v14 = (_QWORD *)((char *)a4 + 48);
  v15 = 5LL;
  v16 = *(struct VIDMM_SEGMENT **)(v13 + 8 * v10);
  v17 = CommitmentInformation - a4;
  *((_DWORD *)a4 + 8) = *((_DWORD *)CommitmentInformation + 14);
  *((_QWORD *)a4 + 16) = *((_QWORD *)CommitmentInformation + 19);
  *((_DWORD *)a4 + 30) = *((_DWORD *)CommitmentInformation + 36);
  *((_QWORD *)a4 + 17) = *((_QWORD *)CommitmentInformation + 20);
  do
  {
    *v14 = *(_QWORD *)((char *)v14 + v17 + 24);
    *((_DWORD *)v14 - 2) = *(_DWORD *)((char *)v14 + v17 + 16);
    v14 += 2;
    --v15;
  }
  while ( v15 );
  VIDMM_PROCESS::GetProcessWorkingSetInformation(v12, v16, &v20, v19);
  v18 = v20;
  *((_QWORD *)a4 + 2) = v19[0];
  *((_QWORD *)a4 + 1) = v18;
  *((_QWORD *)a4 + 18) = (int)VIDMM_POLICY::IsActive((struct _VIDMM_PROCESS_COMMITMENT_INFO *)((char *)CommitmentInformation
                                                                                             + 168));
  *(_QWORD *)a4 = *((_QWORD *)CommitmentInformation + 2);
  *((_DWORD *)a4 + 6) = *((_DWORD *)CommitmentInformation + 45);
  return 0LL;
}
