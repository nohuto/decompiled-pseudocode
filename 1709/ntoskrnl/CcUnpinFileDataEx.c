/*
 * XREFs of CcUnpinFileDataEx @ 0x140068040
 * Callers:
 *     CcGetDirtyPagesHelper @ 0x140067C40 (CcGetDirtyPagesHelper.c)
 *     CcReleaseByteRangeFromWrite @ 0x140067F20 (CcReleaseByteRangeFromWrite.c)
 *     CcPinFileData @ 0x140079AD0 (CcPinFileData.c)
 *     CcAcquireByteRangeForWrite @ 0x1400F2DD0 (CcAcquireByteRangeForWrite.c)
 *     CcMapDataForOverwrite @ 0x140117964 (CcMapDataForOverwrite.c)
 *     CcZeroDataInCache @ 0x14011ED48 (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x1401E0CF0 (CcUnpinRepinnedBcb.c)
 *     CcUnpinData @ 0x14049CF60 (CcUnpinData.c)
 *     CcMapData @ 0x1404A6B70 (CcMapData.c)
 *     CcUnpinDataForThread @ 0x140687650 (CcUnpinDataForThread.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcDeallocateBcb @ 0x14001ED04 (CcDeallocateBcb.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     CcDeductDirtyPages @ 0x140066B70 (CcDeductDirtyPages.c)
 *     ExpReleaseResourceForThreadLite @ 0x14006A2D0 (ExpReleaseResourceForThreadLite.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400837A0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KiRemoveBoostThread @ 0x14008B160 (KiRemoveBoostThread.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400F3AB0 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400F767C (CcAdjustVacbLevelLockCount.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     PsBoostThreadIoQoS @ 0x140113034 (PsBoostThreadIoQoS.c)
 *     KeCaptureWaitChainHead @ 0x140113CFC (KeCaptureWaitChainHead.c)
 *     ExpFastResourceLegacyRelease @ 0x1401400C4 (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x14027E788 (PerfLogExecutiveResourceRelease.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall CcUnpinFileDataEx(char *P, char a2, int a3)
{
  ULONG_PTR v3; // rbx
  __int64 v6; // rax
  struct _KEVENT *v7; // rcx
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v12; // edx
  ULONG_PTR *v13; // r14
  ULONG_PTR v14; // r15
  struct _KTHREAD *CurrentThread; // r14
  unsigned int AbEntrySummary; // edx
  __int64 v17; // rcx
  __int64 v18; // r12
  int SessionId; // eax
  bool v20; // zf
  unsigned __int8 v21; // r14
  int v22; // eax
  __int64 v23; // rcx
  __int16 v24; // cx
  char *v25; // rdi
  __int16 v26; // cx
  ULONG_PTR v27; // rsi
  char v28; // al
  unsigned __int64 v29; // rdx
  struct _KTHREAD *v30; // r8
  __int16 v31; // cx
  unsigned int v32; // ecx
  __int64 v33; // rax
  char *v34; // rbx
  unsigned int v35; // esi
  char v36; // al
  unsigned __int64 v37; // rsi
  char v38; // si
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // r13d
  __int64 Next; // rax
  char v44; // r14
  _QWORD *v45; // rsi
  int v46; // r12d
  unsigned int v47; // ebx
  unsigned int v48; // esi
  unsigned __int8 v49; // bl
  unsigned __int32 v50; // eax
  struct _KEVENT *v51; // rcx
  __int16 v52; // cx
  char *v53; // rdi
  __int16 v54; // cx
  char *v55; // rcx
  __int64 v56; // rbx
  unsigned int v57; // r14d
  unsigned __int8 v58; // al
  unsigned int v59; // eax
  char **v60; // rdx
  PVOID *v61; // rcx
  unsigned __int8 v62; // al
  struct _KTHREAD *v63; // rdx
  __int64 v64; // rcx
  struct _KEVENT *v65; // rcx
  unsigned __int8 v66; // al
  struct _KTHREAD *v67; // rdx
  __int64 v68; // rax
  ULONG_PTR v69; // r9
  unsigned __int64 v70; // rcx
  signed __int32 v71; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  _QWORD *v73; // rax
  int v74; // eax
  _QWORD *i; // rax
  _QWORD *v76; // rbx
  volatile signed __int32 *v77; // rcx
  _QWORD *v78; // rdx
  struct _KPRCB *v79; // rbx
  _QWORD *v80; // rbx
  _QWORD *v81; // rcx
  _QWORD *v82; // rax
  char v83; // al
  char v84; // al
  _KTHREAD *v85; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v87; // r9
  _QWORD *v88; // r8
  __int64 v89; // rcx
  char v90; // al
  int v91; // r9d
  _QWORD *v92; // rdx
  char v93; // al
  unsigned int v94; // [rsp+30h] [rbp-89h]
  unsigned int v95; // [rsp+30h] [rbp-89h]
  __int64 v96; // [rsp+38h] [rbp-81h]
  int v97; // [rsp+40h] [rbp-79h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+48h] [rbp-71h]
  _QWORD *v99; // [rsp+50h] [rbp-69h] BYREF
  volatile signed __int32 *v100; // [rsp+58h] [rbp-61h]
  struct _KLOCK_QUEUE_HANDLE v101; // [rsp+60h] [rbp-59h] BYREF
  int v102; // [rsp+78h] [rbp-41h] BYREF
  _QWORD *v103; // [rsp+80h] [rbp-39h]
  struct _KPRCB *v104; // [rsp+88h] [rbp-31h]
  _QWORD *v105; // [rsp+90h] [rbp-29h]
  int v106; // [rsp+98h] [rbp-21h]
  _KTHREAD *v107; // [rsp+A0h] [rbp-19h]
  _QWORD *v108; // [rsp+A8h] [rbp-11h]
  _QWORD *v109; // [rsp+B0h] [rbp-9h]
  __int64 v110; // [rsp+B8h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp+7h] BYREF
  void *retaddr; // [rsp+118h] [rbp+5Fh]
  unsigned __int8 v113; // [rsp+120h] [rbp+67h] BYREF
  __int64 v114; // [rsp+138h] [rbp+7Fh]

  v3 = a3;
  if ( *(_WORD *)P != 765 )
  {
    v6 = *((_QWORD *)P + 1);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)P + 4) )
    {
      v7 = *(struct _KEVENT **)(v6 + 184);
      if ( v7 )
        KeSetEvent(v7, 0, 0);
    }
    return;
  }
  v8 = *((_QWORD *)P + 22);
  v9 = *(_QWORD *)(v8 + 528);
  v114 = v9;
  if ( *(_QWORD *)(v8 + 168) )
  {
    v10 = *(_QWORD *)((*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140388100, CurrentIrql);
    }
    else
    {
      v97 = 0;
      if ( _interlockedbittestandset(&dword_140388100, 0x1Fu) )
        v97 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140388100, CurrentIrql);
      v12 = dword_140388100;
      while ( (v12 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v12 & 0x40000000) == 0 )
        {
          v71 = _InterlockedCompareExchange(&dword_140388100, v12 | 0x40000000, v12);
          v20 = v12 == v71;
          v12 = v71;
          if ( !v20 )
            continue;
        }
        KeYieldProcessorEx(&v97);
        v12 = dword_140388100;
      }
    }
    if ( *(_QWORD *)v10 )
      v13 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v10 + 60LL) & 0x3FF));
    else
      v13 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388100, retaddr);
    else
      dword_140388100 = 0;
    __writecr8(CurrentIrql);
    if ( v9 != *(_QWORD *)(v13[21] + 8) )
      KeBugCheckEx(0x34u, 0x1292uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(v8 + 152) & 0x200) == 0 || (_DWORD)v3 == 1 )
    a2 = 1;
  v102 = 0;
  v14 = v8 + 280;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v8 + 280, KeGetCurrentIrql(), 0LL);
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v18 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v8 + 280);
      goto LABEL_145;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v17, AbEntrySummary);
  v106 = v17;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
  v18 = (__int64)&CurrentThread->LockEntries[v17];
  if ( !v18 )
  {
LABEL_145:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_25;
  }
  if ( v14 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState[794] + ((v14 >> 39) & 0x1FF)) == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v18 + 40) = SessionId;
  *(_QWORD *)(v18 + 32) = v14 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_25:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v8 + 280, &v102);
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v21 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v14, 0) )
    ExpAcquireFastMutexContended(v8 + 280, (PRTL_BALANCED_NODE)v18);
  if ( v18 )
    *(_BYTE *)(v18 + 26) |= 1u;
  *(_QWORD *)(v8 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v8 + 328) = v21;
  if ( (unsigned int)v3 > 1 )
  {
    if ( (_DWORD)v3 != 2 )
      KeBugCheckEx(0x34u, 0x20459uLL, v3, 0LL, 0LL);
    if ( P[2] )
    {
      v56 = v114;
      v57 = *((_DWORD *)P + 1) >> 12;
      P[2] = 0;
      *((_QWORD *)P + 5) = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v56 + 128);
      *((_QWORD *)P + 6) = 0LL;
      LockHandle.LockQueue.Next = 0LL;
      v58 = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = v58;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v56 + 128));
      CcDeductDirtyPages(v8, v57);
      v59 = *(_DWORD *)(v56 + 456);
      if ( v59 > v57 )
        *(_DWORD *)(v56 + 456) = v59 - v57;
      else
        *(_DWORD *)(v56 + 456) = 0;
      if ( !*(_DWORD *)(v8 + 112) && *(_DWORD *)(v8 + 4) )
        CcInsertIntoCleanSharedCacheMapList(v8);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
  }
  else
  {
    v22 = *((_DWORD *)P + 16);
    if ( !v22 )
      KeBugCheckEx(0x34u, 0x422uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *((_DWORD *)P + 16) = v22 - 1;
  }
  if ( *((_DWORD *)P + 16) )
  {
    if ( a2 )
      goto LABEL_86;
    v52 = *((_WORD *)P + 49);
    v53 = P + 72;
    if ( (v52 & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v53, 0LL, 0LL);
    v54 = v52 & 1;
    if ( v54 )
    {
      v66 = KeGetCurrentIrql();
      v67 = KeGetCurrentThread();
      if ( v66 > 2u )
        KeBugCheckEx(0x1C6u, 0LL, v66, 2uLL, 0LL);
      if ( !v66 && (v67->MiscFlags & 0x400) == 0 && !v67->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    v20 = v54 == 0;
    v55 = v53;
    if ( v20 )
    {
      ExpReleaseResourceForThreadLite((ULONG_PTR)v53, (ULONG_PTR)KeGetCurrentThread());
      goto LABEL_86;
    }
    goto LABEL_163;
  }
  if ( P[2] )
  {
    if ( *((_QWORD *)P + 23) )
    {
      v23 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
      {
        v51 = *(struct _KEVENT **)(v23 + 184);
        if ( v51 )
          KeSetEvent(v51, 0, 0);
      }
      *((_QWORD *)P + 23) = 0LL;
      *((_QWORD *)P + 7) = 0LL;
    }
    if ( a2 )
      goto LABEL_86;
    v24 = *((_WORD *)P + 49);
    v25 = P + 72;
    if ( (v24 & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v25, 0LL, 0LL);
    v26 = v24 & 1;
    if ( v26 )
    {
      v62 = KeGetCurrentIrql();
      v63 = KeGetCurrentThread();
      if ( v62 > 2u )
        KeBugCheckEx(0x1C6u, 0LL, v62, 2uLL, 0LL);
      if ( !v62 && (v63->MiscFlags & 0x400) == 0 && !v63->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    if ( !v26 )
    {
      v27 = (ULONG_PTR)KeGetCurrentThread();
      v101.LockQueue.Lock = (unsigned __int64 *volatile)(v25 + 96);
      v113 = 2;
      v101.LockQueue.Next = 0LL;
      _disable();
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        v28 = KiFastAcquireQueuedSpinLockInstrumented(&v101, v25 + 96, &v113);
      }
      else
      {
        v28 = 0;
        v29 = _InterlockedExchange64((volatile __int64 *)v25 + 12, (__int64)&v101);
        if ( v29 )
        {
          KxWaitForLockOwnerShipWithIrql(&v101, v29, &v113);
          v28 = 1;
        }
      }
      if ( v28 )
      {
        _disable();
        __writecr8(v113);
      }
      v30 = KeGetCurrentThread();
      v31 = *((_WORD *)v25 + 13);
      if ( ((v31 & 1) != 0 || ExpResourceEnforceOwnerTransfer) && (v27 & 3) != 3 && (struct _KTHREAD *)v27 != v30 )
        KeBugCheckEx(0x16Eu, (ULONG_PTR)v25, (ULONG_PTR)v30, v27, 0LL);
      if ( (v31 & 0x80u) == 0 )
      {
        LOBYTE(v114) = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
        if ( (v27 & 3) != 0 )
          v32 = 0;
        else
          v32 = *(unsigned __int8 *)(v27 + 649);
        v33 = *((_QWORD *)v25 + 6);
        v34 = v25 + 48;
        if ( v33 != v27 )
        {
          v29 = 0LL;
          v30 = 0LL;
          if ( v33 )
            v29 = 1LL;
          else
            v30 = (struct _KTHREAD *)(v25 + 48);
          if ( !v32
            || (v68 = *((_QWORD *)v25 + 2)) == 0
            || v32 >= *(_DWORD *)(v68 + 8)
            || (v34 = (char *)(v68 + 16LL * v32), *(_QWORD *)v34 != v27) )
          {
            v69 = *((_QWORD *)v25 + 2);
            v70 = *((unsigned int *)v25 + 16) + (unsigned __int64)*((unsigned int *)v25 + 18);
            if ( !v69 || (v34 = (char *)(v69 + 16), v29 >= v70) )
LABEL_171:
              KeBugCheckEx(0xE3u, (ULONG_PTR)v25, v27, v69, 2uLL);
            while ( *(_QWORD *)v34 != v27 )
            {
              if ( *(_QWORD *)v34 )
              {
                if ( ++v29 == v70 )
                  goto LABEL_171;
              }
              else if ( !v30 )
              {
                v30 = (struct _KTHREAD *)v34;
              }
              v34 += 16;
              if ( v34 == (char *)(v69 + 16LL * *(unsigned int *)(v69 + 8)) )
                goto LABEL_171;
            }
            KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)&v34[-v69] >> 4;
          }
        }
        v35 = *((_DWORD *)v34 + 2) & 7 | (8 * (*((_DWORD *)v34 + 2) >> 3) - 8);
        *((_DWORD *)v34 + 2) = v35;
        if ( v35 >= 8 )
        {
          v48 = v35 >> 3;
          v47 = 65618;
          v95 = *((_DWORD *)v25 + 17);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v101);
          _enable();
          v39 = v95;
LABEL_84:
          __incgsdword(0x6370u);
          if ( (_BYTE)v114 )
            PerfLogExecutiveResourceRelease(v47, v25, v48, v39);
          goto LABEL_86;
        }
        v36 = v35;
        v20 = (v35 & 2) == 0;
        v37 = *(_QWORD *)v34;
        if ( v20 )
        {
          if ( (v37 & 3) != 0 )
            goto LABEL_65;
        }
        else
        {
          v37 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( v37 )
        {
          if ( (v36 & 1) != 0 )
          {
            LOBYTE(v29) = 1;
            PsBoostThreadIo(v37, v29);
            *((_DWORD *)v34 + 2) &= ~1u;
          }
          if ( (*((_DWORD *)v34 + 2) & 4) != 0 )
          {
            PsBoostThreadIoQoS(v37, 1LL, v30);
            *((_DWORD *)v34 + 2) &= ~4u;
          }
          if ( (*((_DWORD *)v34 + 2) & 2) != 0 )
          {
            ObDereferenceObjectDeferDelete((PVOID)v37);
            *((_DWORD *)v34 + 2) &= ~2u;
          }
        }
LABEL_65:
        *(_QWORD *)v34 = 0LL;
        v38 = 0;
        v39 = *((_DWORD *)v25 + 17);
        v94 = v39;
        if ( *((_DWORD *)v25 + 16) <= 1u )
        {
          if ( *((_DWORD *)v25 + 19) )
          {
            KeCaptureWaitChainHead(v25 + 40, &v99, v30);
            --*((_DWORD *)v25 + 19);
            *((_WORD *)v25 + 13) |= 0x80u;
            v39 = v94;
            v40 = 1;
            v38 = 1;
          }
          else
          {
            if ( !*((_DWORD *)v25 + 18) )
              goto LABEL_68;
            v73 = (_QWORD *)*((_QWORD *)v25 + 4);
            *((_QWORD *)v25 + 4) = 0LL;
            v99 = v73;
            v40 = *((_DWORD *)v25 + 18);
            *((_DWORD *)v25 + 18) = 0;
          }
LABEL_69:
          v41 = v40 - 1;
          v20 = v41 + *((_DWORD *)v25 + 16) == 0;
          *((_DWORD *)v25 + 16) += v41;
          if ( v20 )
            *((_WORD *)v25 + 12) = 0;
          if ( !*((_DWORD *)v25 + 19) && !*((_DWORD *)v25 + 18) )
            *((_WORD *)v25 + 13) &= 0xF9u;
          v42 = (unsigned __int8)v25[27];
          if ( v25[26] < 0 )
          {
            v74 = *((_DWORD *)v25 + 14) & 7;
            *((_QWORD *)v25 + 6) = 1LL;
            *((_DWORD *)v25 + 14) = v74 | 8;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
          {
            _m_prefetchw(&v101);
            Next = (__int64)v101.LockQueue.Next;
            if ( !v101.LockQueue.Next )
            {
              if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)v101.LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)&v101) == &v101 )
              {
LABEL_79:
                v39 = v94;
                goto LABEL_80;
              }
              Next = KxWaitForLockChainValid(&v101);
              v39 = v94;
            }
            v101.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
LABEL_80:
            _enable();
            v44 = 1;
            if ( v38 )
              v44 = 3;
            v45 = v99;
            v46 = 1;
            if ( !v99 )
              goto LABEL_83;
            v110 = KeGetCurrentIrql();
            __writecr8(2uLL);
            CurrentPrcb = KeGetCurrentPrcb();
            for ( i = v99; ; i = v105 )
            {
              v76 = i;
              v105 = (_QWORD *)*i;
              v100 = (volatile signed __int32 *)(i + 2);
              KiAcquireKobjectLockSafe(i + 2);
              v77 = (volatile signed __int32 *)(v76 + 2);
              *((_DWORD *)v76 + 5) = 1;
              v78 = (_QWORD *)v76[3];
              v109 = v76 + 3;
              if ( v78 != v76 + 3 )
                break;
              v79 = CurrentPrcb;
LABEL_205:
              _InterlockedAnd(v77, 0xFFFFFF7F);
              if ( v105 == v45 )
              {
                v93 = KiRemoveBoostThread(v79, v79->CurrentThread);
                if ( v42 )
                {
                  v46 = 2;
                  if ( v93 > (char)v42 )
                    v42 = v93;
                }
                if ( (v44 & 2) != 0 && v46 == 1 )
                  v42 = 1;
                KiExitDispatcher((_DWORD)v79, 0, v46, v42, v110);
                v39 = v94;
                v99 = 0LL;
LABEL_83:
                v47 = 65602;
                v48 = 0;
                goto LABEL_84;
              }
            }
            while ( 1 )
            {
              v80 = v78;
              v108 = (_QWORD *)*v78;
              v81 = (_QWORD *)*v78;
              v82 = (_QWORD *)v78[1];
              if ( *(_QWORD **)(*v80 + 8LL) != v80 || (_QWORD *)*v82 != v78 )
                __fastfail(3u);
              *v82 = v81;
              v81[1] = v82;
              v83 = *((_BYTE *)v78 + 16);
              if ( v83 == 1 )
              {
                v79 = CurrentPrcb;
                v84 = KiTryUnwaitThread(CurrentPrcb, v78, *((unsigned __int16 *)v78 + 9), 0LL);
                v77 = v100;
                if ( v84 )
                {
                  v20 = (*((_DWORD *)v100 + 1))-- == 1;
                  if ( v20 )
                    goto LABEL_205;
                }
              }
              else
              {
                if ( v83 == 2 )
                {
                  *((_BYTE *)v78 + 17) = 5;
                  v96 = v78[3];
                  v103 = (_QWORD *)(v96 + 8);
                  *v78 = 0LL;
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v104 = KeGetCurrentPrcb();
                  v85 = v104->CurrentThread;
                  v107 = v85;
                  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                  {
                    IsThreadRunning = KeIsThreadRunning(v85);
                    EtwTraceEnqueueWork(v87, v80, IsThreadRunning);
                  }
                  KiAcquireKobjectLockSafe(v96);
                  v88 = v103;
                  v89 = v96;
                  if ( (_QWORD *)*v88 == v88
                    || *(_DWORD *)(v96 + 40) >= *(_DWORD *)(v96 + 44)
                    || v107->Queue == (_DISPATCHER_HEADER *volatile)v96 && v107->WaitReason == 15 )
                  {
LABEL_197:
                    v91 = *(_DWORD *)(v89 + 4);
                    *(_DWORD *)(v89 + 4) = v91 + 1;
                    v92 = *(_QWORD **)(v89 + 32);
                    if ( *v92 != v89 + 24 )
                      __fastfail(3u);
                    *v80 = v89 + 24;
                    v80[1] = v92;
                    *v92 = v80;
                    *(_QWORD *)(v89 + 32) = v80;
                    if ( !v91 && (_QWORD *)*v88 != v88 )
                    {
                      KiWakeOtherQueueWaiters((__int64)v104, v89);
                      v89 = v96;
                    }
                  }
                  else
                  {
                    v90 = KiWakeQueueWaiter((__int64)v104, v96, (__int64)v80);
                    v89 = v96;
                    if ( !v90 )
                    {
                      v88 = v103;
                      goto LABEL_197;
                    }
                  }
                  _InterlockedAnd((volatile signed __int32 *)v89, 0xFFFFFF7F);
                  v77 = v100;
                  v79 = CurrentPrcb;
                  v20 = (*((_DWORD *)v100 + 1))-- == 1;
                  if ( v20 )
                    goto LABEL_205;
                  goto LABEL_204;
                }
                v79 = CurrentPrcb;
                KiTryUnwaitThread(CurrentPrcb, v78, 256LL, 0LL);
                v77 = v100;
              }
LABEL_204:
              v78 = v108;
              if ( v108 == v109 )
                goto LABEL_205;
            }
          }
          KiReleaseQueuedSpinLockInstrumented(&v101, retaddr);
          goto LABEL_79;
        }
LABEL_68:
        v99 = 0LL;
        v40 = 0;
        goto LABEL_69;
      }
      ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)v25, v27);
LABEL_86:
      *(_QWORD *)(v14 + 8) = 0LL;
      v49 = *(_BYTE *)(v14 + 48);
      v50 = _InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0);
      if ( v50 )
        ExpReleaseFastMutexContended(v14, v50);
      __writecr8(v49);
      KeAbPostRelease(v14);
      return;
    }
    v55 = v25;
LABEL_163:
    ExpFastResourceLegacyRelease(v55);
    goto LABEL_86;
  }
  ExAcquirePushLockExclusiveEx(v8 + 104, 0LL);
  v60 = (char **)*((_QWORD *)P + 2);
  v61 = (PVOID *)*((_QWORD *)P + 3);
  if ( v60[1] != P + 16 || *v61 != P + 16 )
    __fastfail(3u);
  *v61 = v60;
  v60[1] = (char *)v61;
  if ( *(__int64 *)(v8 + 32) > 0x2000000 && (*(_DWORD *)(v8 + 152) & 0x200) != 0 )
    CcAdjustVacbLevelLockCount(v8, *((_QWORD *)P + 1), 0xFFFFFFFFLL);
  ExReleasePushLockEx(v8 + 104, 0LL);
  if ( *((_QWORD *)P + 23) )
  {
    v64 = *(_QWORD *)(*((_QWORD *)P + 7) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 7) + 16LL)) )
    {
      v65 = *(struct _KEVENT **)(v64 + 184);
      if ( v65 )
        KeSetEvent(v65, 0, 0);
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 280));
  CcDeallocateBcb(P);
}
