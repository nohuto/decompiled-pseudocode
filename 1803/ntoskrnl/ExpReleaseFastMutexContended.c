/*
 * XREFs of ExpReleaseFastMutexContended @ 0x140064400
 * Callers:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlReleaseEofLock @ 0x14007B940 (FsRtlReleaseEofLock.c)
 *     FsRtlAcquireEofLock @ 0x14007C1F0 (FsRtlAcquireEofLock.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x1400ACAD0 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1400E2C90 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     FsRtlReleaseHeaderMutex @ 0x1400FEA00 (FsRtlReleaseHeaderMutex.c)
 *     CcPinFileData @ 0x14011C510 (CcPinFileData.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpDelayDerefKCBWorker @ 0x1404A84A0 (CmpDelayDerefKCBWorker.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpAllocateKeyControlBlock @ 0x1404ABAC0 (CmpAllocateKeyControlBlock.c)
 *     CmpReferenceKeyControlBlock @ 0x14052AA50 (CmpReferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiAbFindWakeupLockEntry @ 0x140064594 (KiAbFindWakeupLockEntry.c)
 *     KiAbApplyWakeupBoost @ 0x1400646D8 (KiAbApplyWakeupBoost.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall ExpReleaseFastMutexContended(__int64 a1, signed __int32 a2)
{
  signed __int32 v3; // r9d
  int v4; // r8d
  bool v5; // zf
  __int64 result; // rax
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v9; // r14
  int v10; // r13d
  _QWORD *v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rcx
  char v14; // al
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  __int64 WakeupLockEntry; // rax
  __int64 v17; // r13
  unsigned __int8 IsThreadRunning; // al
  __int64 v19; // r9
  _QWORD *v20; // rcx
  int v21; // r8d
  __int64 *v22; // rdx
  _BYTE v23[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int Priority; // [rsp+90h] [rbp+8h]
  int v25; // [rsp+98h] [rbp+10h]
  struct _KPRCB *v26; // [rsp+A0h] [rbp+18h]
  _KTHREAD *CurrentThread; // [rsp+A8h] [rbp+20h]

  do
  {
    v3 = a2 - 1;
    v4 = a2 & 2;
    if ( (a2 & 2) != 0 )
      v3 = a2 + 1;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, v3, a2);
    v5 = a2 == (_DWORD)result;
    a2 = result;
  }
  while ( !v5 );
  if ( !v4 )
  {
    Priority = KeGetCurrentThread()->Priority;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(a1 + 24);
    v9 = *(_QWORD **)(a1 + 32);
    v10 = 0;
    *(_DWORD *)(a1 + 28) = 1;
    v25 = 0;
    while ( v9 != (_QWORD *)(a1 + 32) )
    {
      v11 = (_QWORD *)*v9;
      v12 = (__int64)v9;
      v9 = v11;
      v13 = *(_QWORD **)(v12 + 8);
      if ( v11[1] != v12 || *v13 != v12 )
        __fastfail(3u);
      *v13 = v11;
      v11[1] = v13;
      v14 = *(_BYTE *)(v12 + 16);
      if ( v14 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), v23) )
        {
          v5 = (*(_DWORD *)(a1 + 28))-- == 1;
          if ( v5 )
            break;
        }
      }
      else
      {
        if ( v14 == 2 )
        {
          *(_BYTE *)(v12 + 17) = 5;
          v17 = *(_QWORD *)(v12 + 24);
          *(_QWORD *)v12 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v26 = KeGetCurrentPrcb();
          CurrentThread = v26->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v26->CurrentThread);
            EtwTraceEnqueueWork(v19, v12, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v17);
          v20 = (_QWORD *)(v17 + 8);
          if ( (_QWORD *)*v20 == v20
            || *(_DWORD *)(v17 + 40) >= *(_DWORD *)(v17 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v17 && CurrentThread->WaitReason == 15 )
          {
LABEL_26:
            v21 = *(_DWORD *)(v17 + 4);
            *(_DWORD *)(v17 + 4) = v21 + 1;
            v22 = *(__int64 **)(v17 + 32);
            if ( *v22 != v17 + 24 )
              __fastfail(3u);
            *(_QWORD *)v12 = v17 + 24;
            *(_QWORD *)(v12 + 8) = v22;
            *v22 = v12;
            *(_QWORD *)(v17 + 32) = v12;
            if ( !v21 && (_QWORD *)*v20 != v20 )
              KiWakeOtherQueueWaiters(v26, v17);
          }
          else if ( !KiWakeQueueWaiter((__int64)v26, v17, v12) )
          {
            v20 = (_QWORD *)(v17 + 8);
            goto LABEL_26;
          }
          _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
          v5 = (*(_DWORD *)(a1 + 28))-- == 1;
          if ( v5 )
            break;
          v10 = v25;
          continue;
        }
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v12, 256LL, 0LL) )
          v25 = --v10;
      }
    }
    _InterlockedAnd((volatile signed __int32 *)(a1 + 24), 0xFFFFFF7F);
    if ( Priority )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
      {
        WakeupLockEntry = KiAbFindWakeupLockEntry(a1, &Next[-27]);
        if ( WakeupLockEntry )
          KiAbApplyWakeupBoost(Priority, WakeupLockEntry, 1LL);
      }
    }
    return KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
  }
  return result;
}
