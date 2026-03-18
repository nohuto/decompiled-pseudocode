/*
 * XREFs of MiCommitExistingVad @ 0x14003AFF0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14050946C (MiAllocateFromSubAllocatedRegion.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1406E8AAC (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 *     MiGetPageProtection @ 0x14003DEB0 (MiGetPageProtection.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiIncreaseUsedPtesCount @ 0x1400666F8 (MiIncreaseUsedPtesCount.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiComputePageCommitment @ 0x140112BF0 (MiComputePageCommitment.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x140499490 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x140573D78 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitExistingVad(
        ULONG_PTR BugCheckParameter4,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned int ProtectionMask; // eax
  int v8; // r10d
  unsigned int v9; // r15d
  int v10; // r9d
  int v11; // r9d
  int v12; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 DemandZeroPte; // rbx
  __int64 v15; // r8
  __int64 v16; // r10
  ULONG_PTR v17; // rsi
  unsigned __int64 v18; // r14
  __int64 v19; // r9
  __int64 v20; // rbp
  __int64 v21; // rbp
  LONG *SharedVm; // rdi
  KIRQL v23; // bp
  __int64 v24; // rdi
  LONG *v25; // rax
  __int64 result; // rax
  int v27; // ecx
  __int64 *v28; // rax
  __int64 v29; // rax
  volatile signed __int64 *v30; // rdi
  LONG *v31; // r14
  unsigned __int16 v32; // r12
  __int64 v33; // rbp
  __int64 UsedPtesHandle; // rdi
  __int64 CurrentIrql; // rcx
  signed __int32 v36; // edx
  bool v37; // zf
  signed __int32 v38; // eax
  unsigned __int64 v39; // r8
  ULONG_PTR v40; // r10
  __int64 PteShadow; // r9
  bool v42; // cc
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  int v46; // r11d
  unsigned __int8 v47; // bl
  __int64 v48; // rdi
  LONG *v49; // rcx
  struct _KTHREAD *v50; // rax
  __int64 v51; // r8
  unsigned int v52; // ecx
  __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  int v55; // [rsp+30h] [rbp-98h]
  _KPROCESS *Process; // [rsp+38h] [rbp-90h]
  __int64 v57; // [rsp+40h] [rbp-88h] BYREF
  __int64 v58; // [rsp+48h] [rbp-80h]
  struct _KTHREAD *v59; // [rsp+50h] [rbp-78h]
  int v60; // [rsp+58h] [rbp-70h] BYREF
  __int64 v61; // [rsp+60h] [rbp-68h]
  __int64 v62; // [rsp+68h] [rbp-60h]
  unsigned __int64 v63; // [rsp+78h] [rbp-50h]
  ULONG_PTR v64; // [rsp+80h] [rbp-48h]
  __int64 v65; // [rsp+88h] [rbp-40h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  int v67; // [rsp+D0h] [rbp+8h]
  unsigned __int64 v68; // [rsp+D8h] [rbp+10h]
  int v69; // [rsp+E0h] [rbp+18h]

  v68 = a2;
  ProtectionMask = MiMakeProtectionMask(a4, a2, a3);
  v8 = *(_DWORD *)(BugCheckParameter4 + 48);
  v9 = ProtectionMask;
  v10 = (unsigned __int8)v8 >> 3;
  if ( ProtectionMask == 24 )
    goto LABEL_17;
  if ( v10 == 24 )
  {
    if ( (v8 & 0x8000) == 0 )
      v10 = (*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 72) + 32LL) >> 1) & 0x1F;
    if ( v10 == 24 )
      LOBYTE(v10) = 0;
  }
  v11 = v10 & 0x18;
  if ( v11 )
  {
    if ( v11 != 16 )
    {
      if ( v11 == 8 )
      {
        v9 = ProtectionMask & 0xFFFFFFE7 | 8;
      }
      else if ( v11 == 24 )
      {
        v9 = ProtectionMask | 0x18;
      }
      goto LABEL_17;
    }
LABEL_16:
    v9 &= ~8u;
    goto LABEL_17;
  }
  v12 = ProtectionMask & 0x18;
  if ( v12 == 24 )
  {
    v9 &= 0xFFFFFFE7;
    goto LABEL_17;
  }
  if ( v12 == 8 )
    goto LABEL_16;
LABEL_17:
  CurrentThread = KeGetCurrentThread();
  v59 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( *(int *)(BugCheckParameter4 + 52) >= 0 )
    v63 = 0LL;
  else
    v63 = 8
        * ((*(unsigned int *)(BugCheckParameter4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter4 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(v9);
  v17 = v16 + ((a2 >> 9) & 0x7FFFFFFFF8LL);
  v18 = (a2 + v15 - 1) | 0xFFF;
  v20 = v19 + 1280;
  v64 = v16 + ((v18 >> 9) & 0x7FFFFFFFF8LL);
  v58 = v19 + 1280;
  v62 = ((__int64)(v64 - v17) >> 3) + 1;
  if ( (int)MiChargeFullProcessCommitment(v19, v62) < 0 )
  {
    v55 = 0;
    SharedVm = MiGetSharedVm(v20);
    v23 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v24 = MiComputePageCommitment((unsigned int)a2 & 0xFFFFF000, v18, BugCheckParameter4, v23, 0LL);
    MiPreUnlockWorkingSetExclusive(v58, v23);
    v25 = MiGetSharedVm(v58);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v25, retaddr);
    else
      *v25 = 0;
    __writecr8(v23);
    v21 = v62 - v24;
    v65 = v62 - v24;
    if ( v62 != v24 )
    {
      result = MiChargeFullProcessCommitment(Process, v62 - v24);
      if ( (int)result < 0 )
        return result;
    }
    CurrentThread = v59;
  }
  else
  {
    v21 = v62;
    v65 = v62;
    v55 = 1;
  }
  v27 = *(_DWORD *)(BugCheckParameter4 + 48);
  v69 = 0;
  if ( (v27 & 0x8000) != 0 )
  {
    if ( *(int *)(BugCheckParameter4 + 52) < 0 || (v27 & 7) != 0 )
      goto LABEL_43;
  }
  else
  {
    if ( (v27 & 0xF8) != 0xC0 )
      goto LABEL_43;
    v28 = *(__int64 **)(BugCheckParameter4 + 72);
    if ( !v28 )
      goto LABEL_43;
    if ( (v27 & 7) == 1 )
      goto LABEL_43;
    v29 = *v28;
    if ( *(_QWORD *)(v29 + 64) || (*(_DWORD *)(v29 + 56) & 0x1000) == 0 )
      goto LABEL_43;
  }
  v69 = 1;
  --CurrentThread->SpecialApcDisable;
  v30 = (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  if ( (int)MiCommitPageTablesForVad(BugCheckParameter4, a2, v18) >= 0 )
  {
LABEL_43:
    v31 = &dword_140389780;
    v32 = 0;
    v67 = 0;
    v33 = 0LL;
    UsedPtesHandle = 0LL;
    if ( (*(_BYTE *)(v58 + 192) & 7) != 2 )
      v31 = (LONG *)(v58 + 200);
    CurrentIrql = KeGetCurrentIrql();
    v61 = CurrentIrql;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v31, (unsigned __int8)CurrentIrql);
    }
    else
    {
      if ( _interlockedbittestandset(v31, 0x1Fu) )
        LODWORD(v33) = ExpWaitForSpinLockExclusiveAndAcquire(v31, CurrentIrql);
      v36 = *v31;
      while ( (v36 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v36 & 0x40000000) == 0 )
        {
          v38 = _InterlockedCompareExchange(v31, v36 | 0x40000000, v36);
          v37 = v36 == v38;
          v36 = v38;
          if ( !v37 )
            continue;
        }
        LODWORD(v33) = v33 + 1;
        if ( ((unsigned int)v33 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait((unsigned int)v33);
        v36 = *v31;
      }
      v33 = 0LL;
    }
    v31[1] = 0;
    if ( v17 <= v64 )
    {
      v39 = 0xFFFFF6FB7DBED000uLL;
      v40 = 0xFFFFF6FB7DBED7F8uLL;
      do
      {
        if ( !v67 || (v17 & 0xFFF) == 0 )
        {
          if ( v32 )
          {
            MiIncreaseUsedPtesCount(UsedPtesHandle, v32);
            v32 = 0;
          }
          MiMakeSystemAddressValid(v17, 1);
          UsedPtesHandle = MiGetUsedPtesHandle(v68);
          v39 = 0xFFFFF6FB7DBED000uLL;
          v67 = 1;
          v40 = 0xFFFFF6FB7DBED7F8uLL;
        }
        PteShadow = *(_QWORD *)v17;
        if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          PteShadow = MiReadPteShadow(v17, *(_QWORD *)v17);
          v39 = 0xFFFFF6FB7DBED000uLL;
        }
        v57 = PteShadow;
        if ( PteShadow )
        {
          v44 = PteShadow;
          if ( (unsigned __int64)&v57 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v57 <= v40 )
          {
            v44 = MiReadPteShadow(&v57, PteShadow);
            v39 = 0xFFFFF6FB7DBED000uLL;
          }
          if ( (v44 & 0x3E0) != 0x200
            || (v44 & 1) != 0
            || (v44 & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(v44) )
          {
            ++v33;
            if ( !*a5 )
            {
              if ( (PteShadow & 1) == 0
                && (PteShadow & 0x400) != 0
                && !(unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
              {
                v67 = v46;
                if ( v32 )
                {
                  MiIncreaseUsedPtesCount(UsedPtesHandle, v32);
                  v32 = 0;
                }
              }
              if ( v9 != (unsigned int)MiGetPageProtection(BugCheckParameter4, v17) )
                *a5 = 1;
            }
          }
          else
          {
            v45 = PteShadow ^ ((unsigned __int16)PteShadow ^ (unsigned __int16)(32 * v9)) & 0x3E0;
            v57 = v45;
            *(_QWORD *)v17 = v45;
            if ( v17 >= v39 && v17 <= v40 )
              MiWritePteShadow(v17, v45);
          }
        }
        else
        {
          v42 = v17 <= v63;
          v43 = v33 + 1;
          *(_QWORD *)v17 = DemandZeroPte;
          if ( !v42 )
            v43 = v33;
          ++v32;
          v33 = v43;
          if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= v40 )
            MiWritePteShadow(v17, DemandZeroPte);
        }
        v68 += 4096LL;
        v17 += 8LL;
        v40 = 0xFFFFF6FB7DBED7F8uLL;
        v39 = 0xFFFFF6FB7DBED000uLL;
      }
      while ( v17 <= v64 );
      if ( v32 )
      {
        v60 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(UsedPtesHandle + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v60);
          while ( *(__int64 *)(UsedPtesHandle + 24) < 0 );
        }
        *(_QWORD *)(UsedPtesHandle + 16) ^= ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16) ^ ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16)
                                                                                             + (v32 << 16))) & 0x3FF0000;
        _InterlockedAnd64((volatile signed __int64 *)(UsedPtesHandle + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v32 <= 1u )
          MiIsAddressValid(*(_QWORD *)(UsedPtesHandle + 8) | 0x8000000000000000uLL);
      }
    }
    v47 = v61;
    v48 = v58;
    MiPreUnlockWorkingSetExclusive(v58, (unsigned __int8)v61);
    v49 = &dword_140389780;
    if ( (*(_BYTE *)(v48 + 192) & 7) != 2 )
      v49 = (LONG *)(v48 + 200);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v49, retaddr);
    else
      *v49 = 0;
    __writecr8(v47);
    if ( v69 == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[8]);
      KeAbPostRelease((ULONG_PTR)&Process[1].Affinity.Bitmap[8]);
      v50 = v59;
      v37 = v59->SpecialApcDisable++ == -1;
      if ( v37 && ($B476B70DB57F76B110DA5B9238C3E934 *)v50->ApcState.ApcListHead[0].Flink != &v50->152 )
        KiCheckForKernelApcDelivery();
    }
    if ( v55 == 1 )
    {
      if ( v33 )
        MiReturnFullProcessCommitment(Process, v33);
      v51 = v62 - v33;
    }
    else
    {
      v51 = v65;
    }
    v52 = *(_DWORD *)(BugCheckParameter4 + 52);
    v53 = v52;
    LODWORD(v53) = v52 & 0x7FFFFFFF;
    v54 = v51 + (((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter4 + 34) << 31) | v53);
    *(_BYTE *)(BugCheckParameter4 + 34) = v54 >> 31;
    *(_DWORD *)(BugCheckParameter4 + 52) = v52 ^ (v54 ^ v52) & 0x7FFFFFFF;
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v30);
  KeAbPostRelease((ULONG_PTR)v30);
  KiLeaveGuardedRegionUnsafe(v59);
  if ( v21 )
    MiReturnFullProcessCommitment(Process, v21);
  return 3221225773LL;
}
