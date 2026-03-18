/*
 * XREFs of MiProbeAndLockPages @ 0x1400BDA70
 * Callers:
 *     MiGetWorkingSetInfo @ 0x14000CC00 (MiGetWorkingSetInfo.c)
 *     IopProbeAndLockPages @ 0x1400BBC78 (IopProbeAndLockPages.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MmProbeAndLockPagesPrivate @ 0x14011D018 (MmProbeAndLockPagesPrivate.c)
 *     CcZeroDataInCache @ 0x14011ED48 (CcZeroDataInCache.c)
 *     CcPrepareMdlWrite @ 0x14012D230 (CcPrepareMdlWrite.c)
 *     VslpLockPagesForTransfer @ 0x140159D24 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x140159E68 (VslpLockMdlForTransfer.c)
 *     VslFinalizeSecureImageHash @ 0x1401F30F0 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x1401F35C0 (VslValidateDynamicCodePages.c)
 *     IopProbeAndLockPages_0 @ 0x1401FBAA8 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1401FBB08 (IopProbeAndLockPages_1.c)
 *     KiOpPatchCode @ 0x14020D3F4 (KiOpPatchCode.c)
 *     PspIumAllocatePartitionState @ 0x14024F628 (PspIumAllocatePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x140276010 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1402785E0 (VmProbeAndLockPages.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MiProbeLockFrame @ 0x1400BDD10 (MiProbeLockFrame.c)
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 *     MiProbeAndLockPrepare @ 0x1400BEF50 (MiProbeAndLockPrepare.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiAddMdlTracker @ 0x140215AE4 (MiAddMdlTracker.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140286170 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x140573D78 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiProbeAndLockPages(_DWORD *a1, char a2, int a3)
{
  NTSTATUS v3; // eax
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 PteShadow; // rax
  NTSTATUS v8; // ebx
  __int64 *v9; // rdx
  _BYTE *v10; // rdi
  unsigned __int8 v11; // si
  LONG *v12; // rcx
  unsigned __int64 v13; // rax
  volatile signed __int32 *v14; // rcx
  struct _MDL *v15; // rdi
  char *v16; // rdi
  __int64 v17; // r9
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD v21[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 *v22; // [rsp+50h] [rbp-29h]
  unsigned __int64 v23; // [rsp+58h] [rbp-21h]
  __int64 *v24; // [rsp+60h] [rbp-19h]
  PMDL MemoryDescriptorList; // [rsp+68h] [rbp-11h]
  unsigned __int8 v26; // [rsp+74h] [rbp-5h]
  char v27; // [rsp+77h] [rbp-2h]
  __int64 v28; // [rsp+80h] [rbp+7h]
  _BYTE *v29; // [rsp+90h] [rbp+17h]
  __int64 v30; // [rsp+98h] [rbp+1Fh]
  __int64 v31; // [rsp+A0h] [rbp+27h]
  PVOID P; // [rsp+A8h] [rbp+2Fh]
  __int64 v33; // [rsp+B0h] [rbp+37h]
  __int64 v34; // [rsp+C0h] [rbp+47h]
  void *retaddr; // [rsp+D8h] [rbp+5Fh]
  __int64 v36; // [rsp+E0h] [rbp+67h] BYREF

  v3 = MiProbeAndLockPrepare((unsigned int)v21, (_DWORD)a1, a1[8] + a1[11], a1[10], a2, a3, 1);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
  v4 = v24;
  v5 = v22;
  do
  {
    v6 = v34;
    *v4 = -1LL;
    if ( v6 )
    {
      v34 = v6 - 1;
      PteShadow = *v5;
      if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v5, *v5);
      v36 = PteShadow;
      v33 = MI_GET_PAGE_FRAME_FROM_PTE(&v36);
    }
    else
    {
      v8 = MiProbeLeafFrame(v21);
      if ( v8 < 0 )
        break;
    }
    v8 = MiProbeLockFrame(v21);
    if ( v8 < 0 )
      break;
    v9 = v24;
    v5 = v22 + 1;
    v21[0] += 4096LL;
    *v24 = v33;
    v4 = v9 + 1;
    v24 = v4;
    v22 = v5;
  }
  while ( (unsigned __int64)v5 <= v23 );
  v10 = v29;
  if ( v29 != MmBadPointer )
  {
    if ( v27 == 1 )
    {
      v11 = v26;
      MiPreUnlockWorkingSetExclusive((__int64)v29, v26);
      v12 = &dword_140389780;
      if ( (v10[192] & 7) != 2 )
        v12 = (LONG *)(v10 + 200);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
      else
        *v12 = 0;
      v13 = v11;
    }
    else
    {
      v14 = &dword_140389780;
      if ( (v29[192] & 7) != 2 )
        v14 = (volatile signed __int32 *)(v29 + 200);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v14, retaddr);
      }
      else
      {
        _InterlockedAnd(v14, 0xBFFFFFFF);
        _InterlockedDecrement(v14);
      }
      v13 = v26;
    }
    __writecr8(v13);
  }
  v15 = MemoryDescriptorList;
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)MemoryDescriptorList);
  if ( v8 < 0 )
  {
    MmUnlockPages(v15);
    ++dword_140388BE8;
  }
  v16 = (char *)P;
  if ( P )
  {
    v17 = *((unsigned int *)P + 13);
    LODWORD(v17) = v17 & 0x7FFFFFFF;
    v18 = v30 + (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v17);
    v19 = v31;
    *((_DWORD *)P + 13) ^= (v18 ^ *((_DWORD *)P + 13)) & 0x7FFFFFFF;
    v16[34] = v18 >> 31;
    v20 = v19 - v30;
    if ( v20 )
      MiReturnFullProcessCommitment(v28, v20);
    MiUnlockAndDereferenceVad(v16);
  }
  if ( v8 < 0 )
    RtlRaiseStatus(v8);
}
