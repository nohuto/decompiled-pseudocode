/*
 * XREFs of ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001964
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049610 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00499F0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004A470 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C005575C (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C00557E0 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055990 (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C005BAD4 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0075920 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C009EFD0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 * Callees:
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C004E4A4 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C005C218 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 */

void __fastcall VidMmRecordAlloc(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  int v13; // esi
  unsigned int v14; // ebx
  __int64 v15; // rdi
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  unsigned int v17; // edx
  unsigned int i; // ecx

  v7 = VIDMM_GLOBAL::AdapterId(a1);
  v11 = v10[5];
  v12 = v7;
  if ( (v10[20] & 0x1000) != 0 )
    v13 = 0;
  else
    v13 = v10[4] + 1;
  v14 = *(_DWORD *)(v8 + 72);
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL) + 8LL * v7);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v15 + 400, 0LL);
  CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(*(VIDMM_PROCESS **)(a3 + 8), v12, v11);
  if ( v14 && (v14 & 0x1F) != v13 )
  {
    v17 = 1;
    for ( i = 6; i < 0x1E; i += 6 )
    {
      if ( ((v14 >> i) & 0x1F) == v13 )
      {
        if ( a6 )
        {
          --*((_DWORD *)CommitmentInformation + 4 * v17 + 16);
          *((_QWORD *)CommitmentInformation + 2 * v17 + 9) -= a5;
        }
        else
        {
          ++*((_DWORD *)CommitmentInformation + 4 * v17 + 16);
          *((_QWORD *)CommitmentInformation + 2 * v17 + 9) += a5;
        }
        goto LABEL_7;
      }
      ++v17;
    }
    if ( a6 )
    {
      --*((_DWORD *)CommitmentInformation + 36);
      *((_QWORD *)CommitmentInformation + 19) -= a5;
    }
    else
    {
      ++*((_DWORD *)CommitmentInformation + 36);
      *((_QWORD *)CommitmentInformation + 19) += a5;
    }
  }
  else if ( a6 )
  {
    --*((_DWORD *)CommitmentInformation + 16);
    *((_QWORD *)CommitmentInformation + 9) -= a5;
  }
  else
  {
    ++*((_DWORD *)CommitmentInformation + 16);
    *((_QWORD *)CommitmentInformation + 9) += a5;
  }
LABEL_7:
  ExReleasePushLockExclusiveEx(v15 + 400, 0LL);
  KeLeaveCriticalRegion();
}
