/*
 * XREFs of MiProbeAndLockPages @ 0x1400B3C60
 * Callers:
 *     MmProbeAndLockPagesPrivate @ 0x140022DDC (MmProbeAndLockPagesPrivate.c)
 *     CcPrepareMdlWrite @ 0x1400339A0 (CcPrepareMdlWrite.c)
 *     IopProbeAndLockPages @ 0x140038BFC (IopProbeAndLockPages.c)
 *     MiGetWorkingSetInfo @ 0x140039594 (MiGetWorkingSetInfo.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MmProbeAndLockPages @ 0x1400B3C30 (MmProbeAndLockPages.c)
 *     CcZeroDataInCache @ 0x1401178EC (CcZeroDataInCache.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     IopProbeAndLockPages_0 @ 0x1401EFEC4 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1401F5CD4 (IopProbeAndLockPages_1.c)
 *     KiOpPatchCode @ 0x140206A50 (KiOpPatchCode.c)
 *     SmPrepareForFatalPageError @ 0x14024F9EC (SmPrepareForFatalPageError.c)
 *     VslFinalizeSecureImageHash @ 0x14026A1D0 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x14026A750 (VslValidateDynamicCodePages.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiProbeLockFrame @ 0x1400B3EF0 (MiProbeLockFrame.c)
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 *     MiProbeAndLockPrepare @ 0x1400B4C90 (MiProbeAndLockPrepare.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiAddMdlTracker @ 0x14020E384 (MiAddMdlTracker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14025C84C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiProbeAndLockPages(_DWORD *a1, char a2, int a3)
{
  NTSTATUS v3; // eax
  unsigned __int64 *v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  unsigned __int64 *v8; // rdx
  _BYTE *v9; // rdi
  unsigned __int8 v10; // si
  LONG *v11; // rcx
  unsigned __int64 v12; // rax
  volatile signed __int32 *v13; // rcx
  struct _MDL *v14; // rdi
  _BYTE *v15; // rdi
  __int64 v16; // r9
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  _QWORD v19[2]; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-29h]
  unsigned __int64 v21; // [rsp+58h] [rbp-21h]
  unsigned __int64 *v22; // [rsp+60h] [rbp-19h]
  PMDL MemoryDescriptorList; // [rsp+68h] [rbp-11h]
  unsigned __int8 v24; // [rsp+74h] [rbp-5h]
  char v25; // [rsp+77h] [rbp-2h]
  __int64 v26; // [rsp+80h] [rbp+7h]
  _BYTE *v27; // [rsp+90h] [rbp+17h]
  __int64 v28; // [rsp+98h] [rbp+1Fh]
  __int64 v29; // [rsp+A0h] [rbp+27h]
  PVOID P; // [rsp+A8h] [rbp+2Fh]
  unsigned __int64 v31; // [rsp+B0h] [rbp+37h]
  __int64 v32; // [rsp+C0h] [rbp+47h]
  void *retaddr; // [rsp+D8h] [rbp+5Fh]
  __int64 v34; // [rsp+E0h] [rbp+67h] BYREF

  v3 = MiProbeAndLockPrepare((unsigned int)v19, (_DWORD)a1, a1[8] + a1[11], a1[10], a2, a3, 1);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
  v4 = v22;
  v5 = v20;
  do
  {
    v6 = v32;
    *v4 = -1LL;
    if ( v6 )
    {
      v32 = v6 - 1;
      v34 = MI_READ_PTE_LOCK_FREE(v5);
      v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v34) >> 12) & 0xFFFFFFFFFLL;
    }
    else
    {
      v7 = MiProbeLeafFrame(v19);
      if ( v7 < 0 )
        break;
    }
    v7 = MiProbeLockFrame(v19);
    if ( v7 < 0 )
      break;
    v8 = v22;
    v19[0] += 4096LL;
    *v22 = v31;
    v4 = v8 + 1;
    v5 = v20 + 8;
    v22 = v4;
    v20 = v5;
  }
  while ( v5 <= v21 );
  v9 = v27;
  if ( v27 != MmBadPointer )
  {
    if ( v25 == 1 )
    {
      v10 = v24;
      MiPreUnlockWorkingSetExclusive(v27, v24);
      v11 = &dword_14036D4C0;
      if ( (v9[192] & 7) != 2 )
        v11 = (LONG *)(v9 + 200);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
        v12 = v10;
      }
      else
      {
        v12 = v10;
        *v11 = 0;
      }
    }
    else
    {
      v13 = &dword_14036D4C0;
      if ( (v27[192] & 7) != 2 )
        v13 = (volatile signed __int32 *)(v27 + 200);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v13, retaddr);
      }
      else
      {
        _InterlockedAnd(v13, 0xBFFFFFFF);
        _InterlockedDecrement(v13);
      }
      v12 = v24;
    }
    __writecr8(v12);
  }
  v14 = MemoryDescriptorList;
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)MemoryDescriptorList);
  if ( v7 < 0 )
  {
    MmUnlockPages(v14);
    ++dword_14036C9F0;
  }
  v15 = P;
  if ( P )
  {
    v16 = *((unsigned int *)P + 13);
    LODWORD(v16) = v16 & 0x7FFFFFFF;
    v17 = v28 + (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v16);
    v18 = v29;
    *((_DWORD *)P + 13) ^= (v17 ^ *((_DWORD *)P + 13)) & 0x7FFFFFFF;
    v15[34] = v17 >> 31;
    if ( v18 != v28 )
      MiReturnFullProcessCommitment(v26);
    MiUnlockAndDereferenceVad(v15);
  }
  if ( v7 < 0 )
    RtlRaiseStatus(v7);
}
