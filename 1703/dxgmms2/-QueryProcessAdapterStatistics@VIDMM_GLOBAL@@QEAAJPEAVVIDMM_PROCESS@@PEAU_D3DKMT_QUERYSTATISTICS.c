/*
 * XREFs of ?QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C0020540
 * Callers:
 *     ?VidMmQueryProcessAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C001EAA0 (-VidMmQueryProcessAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYST.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002144 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C004E4A4 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C005C218 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C006D3C8 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessAdapterStatistics(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *a3)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // r8d
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  int v11; // r8d
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v13, this + 5121);
  v6 = 0;
  v7 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * VIDMM_GLOBAL::AdapterId((VIDMM_GLOBAL *)this));
  if ( v7 )
  {
    *(_DWORD *)a3 = *((_DWORD *)this[5021] + 6);
    *((_QWORD *)a3 + 3) = *(_QWORD *)(v7 + 416);
    *((_DWORD *)a3 + 4) = *(_DWORD *)(v7 + 408);
    *((_DWORD *)a3 + 8) = *(_DWORD *)(v7 + 424);
    *((_DWORD *)a3 + 9) = *(_DWORD *)(v7 + 428);
    *((_QWORD *)a3 + 23) = 1LL;
    *((_QWORD *)a3 + 22) = *(int *)(v7 + 444);
    *((_QWORD *)a3 + 21) = (int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v7 + 432));
    memset((char *)a3 + 40, 0, 0x30uLL);
    if ( *(_DWORD *)a3 )
    {
      do
      {
        v8 = VIDMM_GLOBAL::AdapterId((VIDMM_GLOBAL *)this);
        CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(a2, v8, v9);
        *((_QWORD *)a3 + 5) += *((_QWORD *)CommitmentInformation + 20);
        *((_QWORD *)a3 + 6) += *((_QWORD *)CommitmentInformation + 9);
        *((_QWORD *)a3 + 7) += *((_QWORD *)CommitmentInformation + 11);
        *((_QWORD *)a3 + 8) += *((_QWORD *)CommitmentInformation + 13);
        *((_QWORD *)a3 + 9) += *((_QWORD *)CommitmentInformation + 15);
        *((_QWORD *)a3 + 10) += *((_QWORD *)CommitmentInformation + 17);
      }
      while ( (unsigned int)(v11 + 1) < *(_DWORD *)a3 );
    }
  }
  else
  {
    v6 = -1073741811;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v6;
}
