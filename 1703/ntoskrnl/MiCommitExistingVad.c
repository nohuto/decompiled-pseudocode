/*
 * XREFs of MiCommitExistingVad @ 0x1400CE7C0
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1405160A8 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiIncreaseUsedPtesCount @ 0x1400A8338 (MiIncreaseUsedPtesCount.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiGetPageProtection @ 0x1400D2870 (MiGetPageProtection.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiComputePageCommitment @ 0x1401085E0 (MiComputePageCommitment.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x14051D620 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiCommitExistingVad(
        ULONG_PTR BugCheckParameter4,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned int v7; // esi
  char v8; // dl
  int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 DemandZeroPte; // rbx
  __int64 v17; // r8
  __int64 v18; // r10
  ULONG_PTR v19; // r14
  unsigned __int64 v20; // r15
  __int64 v21; // r9
  __int64 v22; // rbp
  __int64 v23; // rbp
  LONG *SharedVm; // rdi
  KIRQL v25; // bp
  __int64 v26; // rdi
  LONG *v27; // rax
  __int64 result; // rax
  int v29; // ecx
  __int64 *v30; // rax
  __int64 v31; // rax
  volatile signed __int64 *v32; // rdi
  LONG *v33; // r15
  unsigned __int16 v34; // r12
  __int64 v35; // rbp
  __int64 UsedPtesHandle; // rdi
  __int64 CurrentIrql; // rcx
  signed __int32 v38; // edx
  bool v39; // zf
  signed __int32 v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  bool v44; // cc
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // r9
  int v49; // r10d
  unsigned __int8 v50; // bl
  LONG *v51; // rcx
  __int16 v52; // ax
  __int64 v53; // r8
  unsigned int v54; // ecx
  __int64 v55; // rdx
  unsigned __int64 v56; // rdx
  _KPROCESS *Process; // [rsp+30h] [rbp-A8h]
  __int64 v58; // [rsp+38h] [rbp-A0h]
  struct _KTHREAD *v59; // [rsp+40h] [rbp-98h]
  int v60; // [rsp+48h] [rbp-90h] BYREF
  __int64 v61; // [rsp+50h] [rbp-88h]
  __int64 v62; // [rsp+58h] [rbp-80h]
  unsigned __int64 v63; // [rsp+68h] [rbp-70h]
  __int64 v64; // [rsp+70h] [rbp-68h] BYREF
  ULONG_PTR v65; // [rsp+78h] [rbp-60h]
  __int64 v66; // [rsp+80h] [rbp-58h]
  void *retaddr; // [rsp+D8h] [rbp+0h]
  int v68; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v69; // [rsp+E8h] [rbp+10h]
  int v70; // [rsp+F0h] [rbp+18h]
  int v71; // [rsp+F8h] [rbp+20h]

  v69 = a2;
  if ( a4 >= 0x800 )
  {
    v7 = -1;
    goto LABEL_25;
  }
  if ( (a4 & 0xF) != 0 )
  {
    if ( (a4 & 0xF0) != 0 )
    {
      v7 = -1;
      goto LABEL_25;
    }
    v8 = MmUserProtectionToMask1[a4 & 0xF];
  }
  else
  {
    if ( !((unsigned __int8)a4 >> 4) )
    {
      v7 = -1;
      goto LABEL_25;
    }
    v8 = MmUserProtectionToMask2[(unsigned __int8)a4 >> 4];
  }
  v9 = v8;
  v7 = -1;
  if ( v8 != -1 )
  {
    if ( (a4 & 0x700) == 0 )
      goto LABEL_24;
    if ( (a4 & 0x100) != 0 )
    {
      if ( v8 == 24 || (a4 & 0x600) != 0 )
        goto LABEL_25;
      v9 = v8 | 0x10;
    }
    if ( (a4 & 0x200) != 0 )
    {
      if ( v9 == 24 || (a4 & 0x400) != 0 )
        goto LABEL_25;
      v9 |= 8u;
    }
    if ( (a4 & 0x400) == 0 )
    {
LABEL_24:
      v7 = v9;
      goto LABEL_25;
    }
    if ( v9 != 24 && (v9 & 2) == 0 )
    {
      v9 |= 0x18u;
      goto LABEL_24;
    }
  }
LABEL_25:
  v10 = *(_DWORD *)(BugCheckParameter4 + 48);
  v11 = (unsigned __int8)v10 >> 3;
  if ( v7 == 24 )
    goto LABEL_42;
  if ( v11 == 24 )
  {
    if ( (v10 & 0x8000) != 0 )
      LOBYTE(v12) = v10 >> 3;
    else
      v12 = *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 72) + 32LL) >> 1;
    v11 = v12 & 0x1F;
    if ( v11 == 24 )
      LOBYTE(v11) = 0;
  }
  v13 = v11 & 0x18;
  if ( v13 )
  {
    if ( v13 != 16 )
    {
      if ( v13 == 8 )
      {
        v7 = v7 & 0xFFFFFFE7 | 8;
      }
      else if ( v13 == 24 )
      {
        v7 |= 0x18u;
      }
      goto LABEL_42;
    }
LABEL_41:
    v7 &= ~8u;
    goto LABEL_42;
  }
  v14 = v7 & 0x18;
  if ( v14 == 24 )
  {
    v7 &= 0xFFFFFFE7;
    goto LABEL_42;
  }
  if ( v14 == 8 )
    goto LABEL_41;
LABEL_42:
  CurrentThread = KeGetCurrentThread();
  v59 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( *(_DWORD *)(BugCheckParameter4 + 52) < 0x80000000 )
    v63 = 0LL;
  else
    v63 = 8
        * ((*(unsigned int *)(BugCheckParameter4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter4 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(v7);
  v19 = v18 + ((a2 >> 9) & 0x7FFFFFFFF8LL);
  v20 = (a2 + v17 - 1) | 0xFFF;
  v22 = v21 + 1280;
  v65 = v18 + ((v20 >> 9) & 0x7FFFFFFFF8LL);
  v58 = v21 + 1280;
  v62 = ((__int64)(v65 - v19) >> 3) + 1;
  if ( (int)MiChargeFullProcessCommitment(v21, v62) < 0 )
  {
    v70 = 0;
    SharedVm = MiGetSharedVm(v22);
    v25 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v26 = MiComputePageCommitment((unsigned int)a2 & 0xFFFFF000, v20, BugCheckParameter4, v25, 0LL);
    MiPreUnlockWorkingSetExclusive(v58, v25);
    v27 = MiGetSharedVm(v58);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v27, retaddr);
    else
      *v27 = 0;
    __writecr8(v25);
    v23 = v62 - v26;
    v66 = v62 - v26;
    if ( v62 != v26 )
    {
      result = MiChargeFullProcessCommitment(Process, v62 - v26);
      if ( (int)result < 0 )
        return result;
    }
    CurrentThread = v59;
  }
  else
  {
    v23 = v62;
    v66 = v62;
    v70 = 1;
  }
  v29 = *(_DWORD *)(BugCheckParameter4 + 48);
  v68 = 0;
  if ( (v29 & 0x8000) != 0 )
  {
    if ( *(_DWORD *)(BugCheckParameter4 + 52) >= 0x80000000 || (v29 & 7) != 0 )
      goto LABEL_68;
  }
  else
  {
    if ( (v29 & 0xF8) != 0xC0 )
      goto LABEL_68;
    v30 = *(__int64 **)(BugCheckParameter4 + 72);
    if ( !v30 )
      goto LABEL_68;
    if ( (v29 & 7) == 1 )
      goto LABEL_68;
    v31 = *v30;
    if ( *(_QWORD *)(v31 + 64) || (*(_DWORD *)(v31 + 56) & 0x1000) == 0 )
      goto LABEL_68;
  }
  v68 = 1;
  --CurrentThread->SpecialApcDisable;
  v32 = (volatile signed __int64 *)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  if ( (int)MiCommitPageTablesForVad(BugCheckParameter4, a2, v20) < 0 )
  {
    if ( (_InterlockedExchangeAdd64(v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v32);
    KeAbPostRelease((ULONG_PTR)v32);
    KiLeaveGuardedRegionUnsafe(v59);
    if ( v23 )
      MiReturnFullProcessCommitment(Process);
    return 3221225773LL;
  }
LABEL_68:
  v33 = &dword_14036D4C0;
  v34 = 0;
  v71 = 0;
  v35 = 0LL;
  UsedPtesHandle = 0LL;
  if ( (*(_BYTE *)(v58 + 192) & 7) != 2 )
    v33 = (LONG *)(v58 + 200);
  CurrentIrql = KeGetCurrentIrql();
  v61 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v33, (unsigned __int8)CurrentIrql);
  }
  else
  {
    if ( _interlockedbittestandset(v33, 0x1Fu) )
      LODWORD(v35) = ExpWaitForSpinLockExclusiveAndAcquire(v33, CurrentIrql);
    v38 = *v33;
    while ( (v38 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v38 & 0x40000000) == 0 )
      {
        v40 = _InterlockedCompareExchange(v33, v38 | 0x40000000, v38);
        v39 = v38 == v40;
        v38 = v40;
        if ( !v39 )
          continue;
      }
      LODWORD(v35) = v35 + 1;
      if ( ((unsigned int)v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait((unsigned int)v35);
      v38 = *v33;
    }
    v35 = 0LL;
  }
  v33[1] = 0;
  if ( v19 <= v65 )
  {
    while ( 1 )
    {
      if ( !v71 || (v19 & 0xFFF) == 0 )
      {
        if ( v34 )
        {
          MiIncreaseUsedPtesCount(UsedPtesHandle, v34);
          v34 = 0;
        }
        MiMakeSystemAddressValid(v19, 1);
        UsedPtesHandle = MiGetUsedPtesHandle(v69, v41, v42, v43);
        v71 = 1;
      }
      v64 = MI_READ_PTE_LOCK_FREE(v19);
      if ( !v64 )
        break;
      v47 = MI_READ_PTE_LOCK_FREE(&v64);
      if ( (v47 & 0x3E0) != 0x200
        || (v47 & 1) != 0
        || (v47 & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(v47) )
      {
        ++v35;
        if ( !*a5 )
        {
          if ( (v48 & 1) == 0 && (v48 & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(v48) )
          {
            v71 = v49;
            if ( v34 )
            {
              MiIncreaseUsedPtesCount(UsedPtesHandle, v34);
              v34 = 0;
            }
          }
          if ( v7 != (unsigned int)MiGetPageProtection(BugCheckParameter4, v19) )
            *a5 = 1;
        }
        goto LABEL_109;
      }
      v64 = ((unsigned __int16)v48 ^ (unsigned __int16)(32 * v7)) & 0x3E0 ^ v48;
      *(_QWORD *)v19 = v64;
      if ( (unsigned int)MiPteInShadowRange(v19) )
        goto LABEL_94;
LABEL_109:
      v69 += 4096LL;
      v19 += 8LL;
      if ( v19 > v65 )
      {
        if ( v34 )
        {
          v60 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(UsedPtesHandle + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v60);
            while ( *(__int64 *)(UsedPtesHandle + 24) < 0 );
          }
          *(_QWORD *)(UsedPtesHandle + 16) ^= ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16) ^ ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16)
                                                                                               + (v34 << 16))) & 0x3FF0000;
          _InterlockedAnd64((volatile signed __int64 *)(UsedPtesHandle + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v34 <= 1u )
            MiIsAddressValid(*(_QWORD *)(UsedPtesHandle + 8) | 0x8000000000000000uLL);
        }
        goto LABEL_116;
      }
    }
    v44 = v19 <= v63;
    v45 = v35 + 1;
    *(_QWORD *)v19 = DemandZeroPte;
    if ( !v44 )
      v45 = v35;
    ++v34;
    v35 = v45;
    if ( !(unsigned int)MiPteInShadowRange(v19) )
      goto LABEL_109;
LABEL_94:
    MiWritePteShadow(v46);
    goto LABEL_109;
  }
LABEL_116:
  v50 = v61;
  MiPreUnlockWorkingSetExclusive(v58, (unsigned __int8)v61);
  v51 = &dword_14036D4C0;
  if ( (*(_BYTE *)(v58 + 192) & 7) != 2 )
    v51 = (LONG *)(v58 + 200);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v51, retaddr);
  else
    *v51 = 0;
  __writecr8(v50);
  if ( v68 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[8]);
    KeAbPostRelease((ULONG_PTR)&Process[1].Affinity.Bitmap[8]);
    v52 = v59->SpecialApcDisable + 1;
    v59->SpecialApcDisable = v52;
    if ( !v52 && ($69CD3F157F9F39B6F7113F2231989901 *)v59->ApcState.ApcListHead[0].Flink != &v59->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v70 == 1 )
  {
    if ( v35 )
      MiReturnFullProcessCommitment(Process);
    v53 = v62 - v35;
  }
  else
  {
    v53 = v66;
  }
  v54 = *(_DWORD *)(BugCheckParameter4 + 52);
  v55 = v54;
  LODWORD(v55) = v54 & 0x7FFFFFFF;
  v56 = v53 + (((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter4 + 34) << 31) | v55);
  *(_BYTE *)(BugCheckParameter4 + 34) = v56 >> 31;
  *(_DWORD *)(BugCheckParameter4 + 52) = v54 ^ (v56 ^ v54) & 0x7FFFFFFF;
  return 0LL;
}
