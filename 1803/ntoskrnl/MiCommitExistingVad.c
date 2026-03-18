/*
 * XREFs of MiCommitExistingVad @ 0x140117630
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x140592B34 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140752530 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiGetPageProtection @ 0x140022690 (MiGetPageProtection.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiComputePageCommitment @ 0x14003D030 (MiComputePageCommitment.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 *     MiPerformSafePdeWrite @ 0x1400CD48C (MiPerformSafePdeWrite.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiFlushAllFilesystemPages @ 0x140255BA8 (MiFlushAllFilesystemPages.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCommitPageTablesForVad @ 0x1404AF6B0 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x1404B4A78 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitExistingVad(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  ULONG_PTR v5; // rsi
  int v7; // r10d
  __int16 v8; // r11
  unsigned int v9; // edx
  int v10; // r10d
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r10
  ULONG_PTR v15; // r13
  unsigned __int64 v16; // r14
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v19; // r15
  unsigned __int64 v20; // r8
  _KPROCESS *v21; // rdi
  char v22; // si
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 result; // rax
  int v26; // ecx
  __int64 *v27; // rax
  __int64 v28; // rax
  volatile signed __int64 *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // r8
  unsigned __int16 v33; // cx
  unsigned __int8 v34; // al
  unsigned __int64 v35; // r14
  int v36; // r15d
  __int64 v37; // rdi
  LONG *v38; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v42; // eax
  signed __int32 v43; // ett
  ULONG_PTR v44; // r10
  ULONG_PTR v45; // r9
  unsigned __int64 v46; // rcx
  int v47; // edi
  __int64 v48; // r13
  unsigned __int64 v49; // r14
  char v50; // al
  volatile __int64 *v51; // r11
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // r10
  struct _KPRCB *v53; // r10
  unsigned __int64 v54; // rcx
  __int64 v55; // rdx
  int v56; // eax
  _QWORD *v57; // rdx
  __int64 v58; // r15
  unsigned __int64 v59; // rsi
  signed __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  char v64; // cl
  struct _KPRCB *v65; // rax
  volatile signed __int32 *PageTableLockBuffer; // rdi
  unsigned __int32 v67; // r8d
  char v68; // cl
  bool v69; // zf
  signed __int32 v70; // eax
  signed __int64 v71; // rcx
  unsigned __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // r8
  unsigned __int64 v75; // rdx
  signed __int64 v76; // r8
  unsigned int v77; // edi
  char v78; // cl
  _KLOCK_QUEUE_HANDLE *v79; // rdi
  struct _KPRCB *v80; // rdi
  __int64 Next; // rax
  __int64 v82; // rdx
  int v83; // eax
  volatile signed __int32 *v84; // r8
  int v85; // r9d
  signed __int32 v86; // eax
  volatile signed __int32 v87; // ett
  signed __int32 v88; // edx
  signed __int64 v89; // rdx
  unsigned __int64 v90; // r8
  __int64 v91; // rax
  __int64 v92; // r8
  signed __int64 v93; // rax
  signed __int64 v94; // rdx
  __int64 v95; // r8
  ULONG_PTR BugCheckParameter4; // rsi
  int v97; // eax
  ULONG_PTR v98; // rdi
  unsigned __int64 v99; // r14
  unsigned __int64 *v100; // rdx
  unsigned __int64 v101; // r8
  unsigned __int64 v102; // rdx
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rdx
  unsigned __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rax
  unsigned __int64 v111; // r8
  __int64 v112; // rax
  __int64 v113; // rax
  int PageProtection; // eax
  __int64 v115; // r8
  __int64 v116; // rsi
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  _KPROCESS *v120; // rdi
  struct _KTHREAD *v121; // rcx
  __int64 v122; // rbx
  __int64 v123; // r9
  unsigned int v124; // ecx
  __int64 v125; // rax
  unsigned __int64 v126; // rdx
  unsigned __int16 v127; // [rsp+30h] [rbp-D0h]
  int v128; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v129; // [rsp+38h] [rbp-C8h]
  _KPROCESS *Process; // [rsp+40h] [rbp-C0h]
  int v131; // [rsp+48h] [rbp-B8h]
  int v132; // [rsp+4Ch] [rbp-B4h]
  __int64 v133; // [rsp+50h] [rbp-B0h]
  __int64 v134; // [rsp+58h] [rbp-A8h]
  __int64 v135; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v136; // [rsp+68h] [rbp-98h]
  int v137; // [rsp+70h] [rbp-90h] BYREF
  int v138; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v139; // [rsp+78h] [rbp-88h]
  int v140; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int64 v141; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  __int64 i; // [rsp+98h] [rbp-68h]
  unsigned __int64 v145; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v146; // [rsp+A8h] [rbp-58h]
  __int64 v147; // [rsp+B0h] [rbp-50h]
  signed __int64 v148; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v149; // [rsp+C0h] [rbp-40h]
  __int64 DemandZeroPte; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v151; // [rsp+D0h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+D8h] [rbp-28h]
  __int64 v153; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v154; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v155; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v156; // [rsp+F8h] [rbp-8h]
  __int64 v157; // [rsp+100h] [rbp+0h]
  _UNKNOWN *retaddr; // [rsp+148h] [rbp+48h]
  unsigned __int64 v160; // [rsp+158h] [rbp+58h]
  unsigned int ProtectionMask; // [rsp+160h] [rbp+60h]

  v160 = a2;
  v5 = a1;
  ProtectionMask = MiMakeProtectionMask(a4);
  v9 = ProtectionMask;
  if ( ProtectionMask == 24 )
    goto LABEL_17;
  if ( v7 == 24 )
  {
    if ( (v8 & 0x4000) == 0 )
      v7 = (*(unsigned __int16 *)(*(_QWORD *)(v5 + 72) + 32LL) >> 1) & 0x1F;
    if ( v7 == 24 )
      LOBYTE(v7) = 0;
  }
  v10 = v7 & 0x18;
  if ( v10 )
  {
    if ( v10 != 16 )
    {
      if ( v10 == 8 )
      {
        v9 = ProtectionMask & 0xFFFFFFE7 | 8;
      }
      else
      {
        if ( v10 != 24 )
          goto LABEL_18;
        v9 = ProtectionMask | 0x18;
      }
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v11 = ProtectionMask & 0x18;
  if ( v11 != 24 )
  {
    if ( v11 != 8 )
      goto LABEL_18;
LABEL_16:
    v9 = ProtectionMask & 0xFFFFFFF7;
    goto LABEL_17;
  }
  v9 = ProtectionMask & 0xFFFFFFE7;
LABEL_17:
  ProtectionMask = v9;
LABEL_18:
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( *(int *)(v5 + 52) >= 0 )
    v145 = 0LL;
  else
    v145 = 8 * ((*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) & 0xFFFFFFFFFLL)
         - 0x98000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(v9);
  v12 = DemandZeroPte;
  v15 = v14 + ((a2 >> 9) & 0x7FFFFFFFF8LL);
  BugCheckParameter2 = v15;
  v16 = (a2 + v13 - 1) | 0xFFF;
  v18 = v17 + 1280;
  v146 = v14 + ((v16 >> 9) & 0x7FFFFFFFF8LL);
  v133 = v17 + 1280;
  v19 = ((__int64)(v146 - v15) >> 3) + 1;
  v153 = v19;
  if ( (int)MiChargeFullProcessCommitment(v17, v19) < 0 )
  {
    v132 = 0;
    v22 = MiLockWorkingSetShared(v18);
    v23 = MiComputePageCommitment(a2 & 0xFFFFFFFFFFFFF000uLL, v16, a1, v22, 0, 0LL);
    MiUnlockWorkingSetShared(v18, v22, v24);
    v19 -= v23;
    v21 = Process;
    v147 = v19;
    if ( v19 )
    {
      result = MiChargeFullProcessCommitment(Process, v19);
      if ( (int)result < 0 )
        return result;
    }
    v5 = a1;
  }
  else
  {
    v21 = Process;
    v132 = 1;
    v147 = ((__int64)(v146 - v15) >> 3) + 1;
  }
  v26 = *(_DWORD *)(v5 + 48);
  v131 = 0;
  if ( (v26 & 0x4000) == 0 )
  {
    if ( (v26 & 0xF8) != 0xC0 )
      goto LABEL_41;
    v27 = *(__int64 **)(v5 + 72);
    if ( !v27 )
      goto LABEL_41;
    if ( (v26 & 7) == 1 )
      goto LABEL_41;
    v28 = *v27;
    if ( *(_QWORD *)(v28 + 64) || (*(_DWORD *)(v28 + 56) & 0x1000) == 0 )
      goto LABEL_41;
LABEL_35:
    v131 = 1;
    --CurrentThread->SpecialApcDisable;
    v29 = (volatile signed __int64 *)&v21[1].Affinity.Bitmap[8];
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v29, 0LL);
    if ( (int)MiCommitPageTablesForVad(v5, v160, v16) < 0 )
    {
      if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v29, v30, v20, v31);
      KeAbPostRelease((ULONG_PTR)v29);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      if ( v19 )
        MiReturnFullProcessCommitment(Process, v19, v32);
      return 3221225773LL;
    }
    goto LABEL_41;
  }
  if ( *(int *)(v5 + 52) >= 0 && (v26 & 7) == 0 )
    goto LABEL_35;
LABEL_41:
  v33 = 0;
  v34 = *(_BYTE *)(v18 + 184) & 7;
  v127 = 0;
  v129 = 0LL;
  v35 = 0LL;
  v134 = 0LL;
  v36 = 0;
  v37 = 0LL;
  if ( v34 < 6u )
  {
    v38 = &dword_1403CCD40;
    if ( v34 != 2 )
      v38 = (LONG *)(v18 + 192);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v38, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v42 = SchedulerAssist[5];
          SchedulerAssist[5] = v42 + 1;
          if ( v42 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v38);
      v43 = *v38 & 0x7FFFFFFF;
      if ( v43 != _InterlockedCompareExchange(v38, v43 + 1, v43) )
      {
        KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
        ExpWaitForSpinLockSharedAndAcquire(v38, CurrentIrql);
      }
    }
    if ( v38[1] )
      _InterlockedExchange(v38 + 1, 0);
    v33 = 0;
    v5 = a1;
    LOBYTE(v136) = CurrentIrql;
    v35 = 0LL;
  }
  else
  {
    v136 = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  if ( v15 > v146 )
    goto LABEL_274;
  while ( 2 )
  {
    v44 = 0xFFFFF6FB7DBED7F8uLL;
    v45 = 0xFFFFF6FB7DBED000uLL;
    if ( v36 && (v15 & 0xFFF) != 0 )
    {
      v99 = v160;
      goto LABEL_220;
    }
    if ( v33 )
    {
      MiIncreaseUsedPtesCount(v37, v33);
      v127 = 0;
    }
    if ( v35 )
      MiUnlockPageTableInternal(v133, v35);
    v46 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v47 = (*(_DWORD *)(v5 + 48) >> 8) & 0x3F;
    v129 = v46;
    v139 = v47;
    BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
    v48 = BugCheckParameter3 + 1280;
    v149 = BugCheckParameter3 + 1280;
    while ( 2 )
    {
      v154 = v46;
      v155 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v156 = ((v155 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v157 = ((v156 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v49 = 0xFFFFF6FB7DBEDF68uLL;
      v50 = *(_BYTE *)(v48 + 184) & 7;
      if ( v50 )
      {
        if ( v50 == 7 )
        {
          v51 = (volatile __int64 *)&unk_1403CBCE8;
          SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
        }
        else
        {
          v53 = KeGetCurrentPrcb();
          if ( v50 == 5 )
          {
            v51 = &qword_1403CBCE0;
            SelfmapLockHandle = v53->SelfmapLockHandle;
          }
          else
          {
            v51 = &qword_1403CBCF8;
            SelfmapLockHandle = &v53->SelfmapLockHandle[3];
          }
        }
      }
      else
      {
        v51 = (volatile __int64 *)(v48 + 176);
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
      }
      SelfmapLockHandle->LockQueue.Lock = (unsigned __int64 *volatile)v51;
      SelfmapLockHandle->LockQueue.Next = 0LL;
      v54 = (unsigned __int64)KeGetCurrentPrcb();
      v55 = *(_QWORD *)(v54 + 25016);
      if ( v55 )
      {
        if ( *(_BYTE *)(v54 + 32) <= 1u )
        {
          v56 = *(_DWORD *)(v55 + 20);
          *(_DWORD *)(v55 + 20) = v56 + 1;
          if ( v56 == -1 && !*(_BYTE *)(v55 + 25) && !*(_BYTE *)(v55 + 27) )
            KiPerformUnboostKick(v54);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v51);
      }
      else
      {
        v57 = (_QWORD *)_InterlockedExchange64(v51, (__int64)SelfmapLockHandle);
        if ( v57 )
          KxWaitForLockOwnerShip((__int64)SelfmapLockHandle, v57);
      }
      v58 = 2LL;
      for ( i = 2LL; ; i = v58 )
      {
        v59 = *(&v154 + v58);
        v45 = 0xFFFFF6FB7DBED000uLL;
        v60 = *(_QWORD *)v59;
        if ( v59 >= 0xFFFFF6FB7DBED000uLL && v59 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
        {
          v54 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(v54 + 640) != 1 )
          {
            if ( (v60 & 1) == 0 )
              break;
            if ( (v60 & 0x20) == 0 || (v60 & 0x42) == 0 )
            {
              v54 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v61 = *(_QWORD *)(v54 + 1544);
              if ( v61 )
              {
                v62 = *(_QWORD *)(v61 + 8 * ((v59 >> 3) & 0x1FF));
                v63 = v60 | 0x20;
                v54 = (unsigned __int8)v62;
                LOBYTE(v54) = v62 & 0x20;
                if ( (v62 & 0x20) == 0 )
                  v63 = *(_QWORD *)v59;
                v60 = v63;
                if ( (v62 & 0x42) != 0 )
                  v60 = v63 | 0x42;
              }
            }
          }
        }
        if ( (v60 & 1) == 0 || (v60 & 0x80u) != 0LL )
          break;
        if ( (v60 & 0x20) == 0 )
          MiPerformSafePdeWrite(v54, (volatile signed __int64 *)*(&v154 + v58), v60, 1);
        if ( v59 != v49 )
        {
          v64 = *(_BYTE *)(v48 + 184) & 7;
          if ( v59 == 0xFFFFF6FB7DBEDF68uLL )
          {
            v65 = KeGetCurrentPrcb();
            if ( v64 )
            {
              if ( v64 == 7 )
              {
                v65->SelfmapLockHandle[1].LockQueue.Next = 0LL;
                v65->SelfmapLockHandle[1].LockQueue.Lock = (unsigned __int64 *volatile)&unk_1403CBCE8;
                KxAcquireQueuedSpinLock((__int64)&v65->SelfmapLockHandle[1], (volatile __int64 *)&unk_1403CBCE8);
              }
              else if ( v64 == 5 )
              {
                v65->SelfmapLockHandle[0].LockQueue.Next = 0LL;
                v65->SelfmapLockHandle[0].LockQueue.Lock = (unsigned __int64 *volatile)&qword_1403CBCE0;
                KxAcquireQueuedSpinLock((__int64)v65->SelfmapLockHandle, &qword_1403CBCE0);
              }
              else
              {
                v65->SelfmapLockHandle[3].LockQueue.Next = 0LL;
                v65->SelfmapLockHandle[3].LockQueue.Lock = (unsigned __int64 *volatile)&qword_1403CBCF8;
                KxAcquireQueuedSpinLock((__int64)&v65->SelfmapLockHandle[3], &qword_1403CBCF8);
              }
            }
            else
            {
              v65->SelfmapLockHandle[2].LockQueue.Next = 0LL;
              v65->SelfmapLockHandle[2].LockQueue.Lock = (unsigned __int64 *volatile)(v48 + 176);
              KxAcquireQueuedSpinLock((__int64)&v65->SelfmapLockHandle[2], (volatile __int64 *)(v48 + 176));
            }
          }
          else if ( v64 && v59 >= 0xFFFFF6FB7DBED000uLL && v59 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v48, v59, &v128);
            v67 = *PageTableLockBuffer;
            do
            {
LABEL_113:
              v68 = v128;
              while ( ((v67 >> v68) & 1) != 0 )
              {
                if ( ((v67 >> v68) & 2) == 0 )
                {
                  v67 = _InterlockedCompareExchange(PageTableLockBuffer, v67 | (2 << v68), v67);
                  goto LABEL_113;
                }
                v137 = 0;
                do
                {
                  KeYieldProcessorEx(&v137);
                  v67 = *PageTableLockBuffer;
                  v68 = v128;
                }
                while ( (((unsigned __int32)*PageTableLockBuffer >> v128) & 1) != 0 );
              }
              v70 = _InterlockedCompareExchange(PageTableLockBuffer, ~(2 << v68) & (v67 | (1 << v68)), v67);
              v69 = v67 == v70;
              v67 = v70;
            }
            while ( !v69 );
          }
          else
          {
            v71 = *(_QWORD *)v59;
            if ( v59 >= 0xFFFFF6FB7DBED000uLL
              && v59 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x1800000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v71 & 1) != 0
              && ((v71 & 0x20) == 0 || (v71 & 0x42) == 0) )
            {
              v72 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v72 )
              {
                v73 = *(_QWORD *)(v72 + 8 * ((v59 >> 3) & 0x1FF));
                v74 = v71 | 0x20;
                if ( (v73 & 0x20) == 0 )
                  v74 = *(_QWORD *)v59;
                v71 = v74;
                if ( (v73 & 0x42) != 0 )
                  v71 = v74 | 0x42;
              }
            }
            v75 = v71;
            if ( (v71 & 1) != 0 )
            {
              v76 = v71;
              do
              {
                if ( (v75 & 0x1000000000000000LL) != 0 )
                {
                  if ( ((v75 >> 60) & 2) != 0 )
                  {
                    v77 = 0;
                    do
                    {
                      if ( (++v77 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                        _mm_pause();
                      else
                        HvlNotifyLongSpinWait(v77);
                      v148 = *(_QWORD *)v59;
                      v71 = v148;
                    }
                    while ( (v148 & 0x1000000000000000LL) != 0 );
                  }
                  else
                  {
                    v71 = _InterlockedCompareExchange64((volatile signed __int64 *)v59, v75 | 0x2000000000000000LL, v71);
                  }
                }
                else
                {
                  v71 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)v59,
                          v75 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                          v71);
                  if ( v71 == v76 )
                    break;
                }
                v75 = v71;
                v76 = v71;
              }
              while ( (v71 & 1) != 0 );
              v58 = i;
              v48 = v149;
            }
          }
          v78 = *(_BYTE *)(v48 + 184) & 7;
          if ( v49 == 0xFFFFF6FB7DBEDF68uLL )
          {
            if ( v78 )
            {
              if ( v78 == 7 )
              {
                v79 = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
              }
              else
              {
                v80 = KeGetCurrentPrcb();
                if ( v78 == 5 )
                  v79 = v80->SelfmapLockHandle;
                else
                  v79 = &v80->SelfmapLockHandle[3];
              }
            }
            else
            {
              v79 = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(v79, retaddr);
              goto LABEL_163;
            }
            _m_prefetchw(v79);
            Next = (__int64)v79->LockQueue.Next;
            if ( v79->LockQueue.Next )
            {
LABEL_162:
              v79->LockQueue.Next = 0LL;
              _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
            }
            else if ( v79 != (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                      (volatile signed __int64 *)v79->LockQueue.Lock,
                                                      0LL,
                                                      (signed __int64)v79) )
            {
              Next = KxWaitForLockChainValid((__int64 *)v79);
              goto LABEL_162;
            }
LABEL_163:
            v54 = (unsigned __int64)KeGetCurrentPrcb();
            v82 = *(_QWORD *)(v54 + 25016);
            if ( v82 )
            {
              if ( *(_BYTE *)(v54 + 32) <= 1u )
              {
                v83 = *(_DWORD *)(v82 + 20) - 1;
                *(_DWORD *)(v82 + 20) = v83;
                if ( !v83 && !*(_BYTE *)(v82 + 25) && !*(_BYTE *)(v82 + 27) )
                  KiPerformUnboostKick(v54);
              }
            }
          }
          else if ( v78 && v49 >= 0xFFFFF6FB7DBED000uLL && v49 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v84 = (volatile signed __int32 *)MiGetPageTableLockBuffer(v48, v49, &v138);
            v85 = ~(3 << v138);
            v54 = *v84 & (unsigned int)v85;
            v87 = *v84;
            v86 = _InterlockedCompareExchange(v84, v54, *v84);
            if ( v87 != v86 )
            {
              do
              {
                v88 = v86;
                v54 = v86 & (unsigned int)v85;
                v86 = _InterlockedCompareExchange(v84, v54, v86);
              }
              while ( v86 != v88 );
            }
          }
          else
          {
            v89 = *(_QWORD *)v49;
            if ( v49 >= 0xFFFFF6FB7DBED000uLL
              && v49 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x1800000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v89 & 1) != 0
              && ((v89 & 0x20) == 0 || (v89 & 0x42) == 0) )
            {
              v90 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v90 )
              {
                v91 = *(_QWORD *)(v90 + 8 * ((v49 >> 3) & 0x1FF));
                v92 = v89 | 0x20;
                if ( (v91 & 0x20) == 0 )
                  v92 = *(_QWORD *)v49;
                v89 = v92;
                if ( (v91 & 0x42) != 0 )
                  v89 = v92 | 0x42;
              }
            }
            v54 = v89 & 0xCFFFFFFFFFFFFFFFuLL;
            v93 = _InterlockedCompareExchange64((volatile signed __int64 *)v49, v89 & 0xCFFFFFFFFFFFFFFFuLL, v89);
            if ( v89 != v93 )
            {
              do
              {
                v94 = v93;
                v54 = v93 & 0xCFFFFFFFFFFFFFFFuLL;
                v93 = _InterlockedCompareExchange64((volatile signed __int64 *)v49, v93 & 0xCFFFFFFFFFFFFFFFuLL, v93);
              }
              while ( v93 != v94 );
            }
          }
          v49 = v59;
        }
        if ( !v58 )
        {
          v45 = 0xFFFFF6FB7DBED000uLL;
          break;
        }
        --v58;
      }
      v12 = DemandZeroPte;
      if ( v49 != v129 )
      {
        MiUnlockPageTableInternal(v48, v49);
        MiUnlockWorkingSetShared(v48, v136, v95);
        BugCheckParameter4 = BugCheckParameter2;
        v97 = MmAccessFault(((unsigned __int64)v139 << 57) | 0x100000000000002LL, BugCheckParameter2, 0, 0LL);
        v98 = v97;
        if ( v97 < 0 )
        {
          MiFlushAllFilesystemPages(1LL);
          KeBugCheckEx(0x7Au, 1uLL, v98, BugCheckParameter3, BugCheckParameter4);
        }
        MiLockWorkingSetShared(v48);
        v46 = v129;
        continue;
      }
      break;
    }
    v99 = v160;
    v100 = (unsigned __int64 *)(((v160 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v101 = *v100;
    v44 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v100 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v100 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v101 & 1) != 0
      && ((v101 & 0x20) == 0 || (v101 & 0x42) == 0) )
    {
      v103 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v103 )
      {
        v104 = *(_QWORD *)(v103 + 8 * ((v102 >> 3) & 0x1FF));
        v105 = v101 | 0x20;
        if ( (v104 & 0x20) == 0 )
          v105 = v101;
        v101 = v105;
        if ( (v104 & 0x42) != 0 )
          v101 = v105 | 0x42;
      }
    }
    v141 = v101;
    if ( (unsigned __int64)&v141 >= v45
      && (unsigned __int64)&v141 <= v44
      && (unsigned int)MiPteHasShadow()
      && (v101 & 1) != 0
      && ((v101 & 0x20) == 0 || (v101 & 0x42) == 0) )
    {
      v106 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v106 )
      {
        v107 = *(_QWORD *)(v106 + 8 * (((unsigned __int64)&v141 >> 3) & 0x1FF));
        v108 = v101 | 0x20;
        if ( (v107 & 0x20) == 0 )
          v108 = v101;
        v101 = v108;
        if ( (v107 & 0x42) != 0 )
          v101 = v108 | 0x42;
      }
    }
    v20 = (v101 >> 12) & 0xFFFFFFFFFLL;
    v15 = BugCheckParameter2;
    v37 = 48 * v20 - 0x58000000000LL;
    v36 = 1;
LABEL_220:
    v109 = *(_QWORD *)v15;
    if ( v15 >= v45
      && v15 <= v44
      && (unsigned int)MiPteHasShadow()
      && (v109 & 1) != 0
      && ((v109 & 0x20) == 0 || (v109 & 0x42) == 0) )
    {
      v20 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v20 )
      {
        v110 = *(_QWORD *)(v20 + 8 * ((v15 >> 3) & 0x1FF));
        v20 = v109 | 0x20;
        if ( (v110 & 0x20) == 0 )
          v20 = v109;
        v109 = v20;
        if ( (v110 & 0x42) != 0 )
          v109 = v20 | 0x42;
      }
    }
    v135 = v109;
    if ( !v109 )
    {
      if ( v15 <= v145 )
        ++v134;
      ++v127;
      *(_QWORD *)v15 = v12;
      if ( v15 >= v45 && v15 <= v44 )
        MiWritePteShadow(v15, v12, v20);
      goto LABEL_263;
    }
    v20 = v109;
    if ( (unsigned __int64)&v135 >= v45
      && (unsigned __int64)&v135 <= v44
      && (unsigned int)MiPteHasShadow()
      && (v109 & 1) != 0
      && ((v109 & 0x20) == 0 || (v109 & 0x42) == 0) )
    {
      v111 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v111 )
      {
        v112 = *(_QWORD *)(v111 + 8 * (((unsigned __int64)&v135 >> 3) & 0x1FF));
        v20 = v109 | 0x20;
        if ( (v112 & 0x20) == 0 )
          v20 = v109;
        if ( (v112 & 0x42) != 0 )
          v20 |= 0x42uLL;
      }
      else
      {
        v20 = v109;
      }
    }
    if ( (v20 & 0x3E0) == 0x200
      && (v20 & 1) == 0
      && ((v20 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v20)) )
    {
      v113 = v109 ^ ((unsigned __int16)v109 ^ (unsigned __int16)(32 * ProtectionMask)) & 0x3E0;
      v135 = v113;
      *(_QWORD *)v15 = v113;
      if ( v15 >= v45 && v15 <= v44 )
        MiWritePteShadow(v15, v113, v20);
      goto LABEL_263;
    }
    ++v134;
    if ( *a5 )
      goto LABEL_263;
    PageProtection = MiGetPageProtection(a1, v15, &v151, v45);
    if ( v151 )
    {
      if ( v127 )
      {
        MiIncreaseUsedPtesCount(v37, v127);
        v127 = 0;
      }
      MiUnlockPageTableInternal(v133, v129);
      MiUnlockWorkingSetShared(v133, v136, v115);
      v35 = 0LL;
      v129 = 0LL;
      v36 = 0;
      v116 = v133;
      MiLockWorkingSetShared(v133);
    }
    else
    {
      if ( ProtectionMask != PageProtection )
        *a5 = 1;
LABEL_263:
      v116 = v133;
      v15 += 8LL;
      BugCheckParameter2 = v15;
      v160 = v99 + 4096;
      v35 = v129;
    }
    if ( v15 <= v146 )
    {
      v33 = v127;
      v5 = a1;
      continue;
    }
    break;
  }
  if ( v127 )
  {
    v140 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v140);
      while ( *(__int64 *)(v37 + 24) < 0 );
    }
    *(_QWORD *)(v37 + 16) ^= ((unsigned int)*(_QWORD *)(v37 + 16) ^ ((unsigned int)*(_QWORD *)(v37 + 16) + (v127 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v127 <= 1u )
      MiIsAddressValid(*(_QWORD *)(v37 + 8) | 0x8000000000000000uLL);
  }
  if ( v35 )
    MiUnlockPageTableInternal(v116, v35);
LABEL_274:
  MiUnlockWorkingSetShared(v133, v136, v20);
  v120 = Process;
  if ( v131 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&v120[1].Affinity.Bitmap[8], v117, v118, v119);
    KeAbPostRelease((ULONG_PTR)&v120[1].Affinity.Bitmap[8]);
    v121 = CurrentThread;
    v69 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v69 && ($005F0E83B22994B61E86C72E0CE43C71 *)v121->ApcState.ApcListHead[0].Flink != &v121->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v132 == 1 )
  {
    v122 = v134;
    if ( v134 )
      MiReturnFullProcessCommitment(v120, v134, v118);
    v123 = v153 - v122;
  }
  else
  {
    v123 = v147;
  }
  v124 = *(_DWORD *)(a1 + 52);
  v125 = v124;
  LODWORD(v125) = v124 & 0x7FFFFFFF;
  v126 = (v123 + (v125 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31))) >> 31;
  LODWORD(v125) = v124 ^ (v123 + (v124 & 0x7FFFFFFF | (*(unsigned __int8 *)(a1 + 34) << 31)));
  *(_BYTE *)(a1 + 34) = v126;
  *(_DWORD *)(a1 + 52) = v124 ^ v125 & 0x7FFFFFFF;
  return 0LL;
}
