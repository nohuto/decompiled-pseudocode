/*
 * XREFs of ExpReleaseFastMutexContended @ 0x1400A6FF0
 * Callers:
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     CcSetDirtyPinnedData @ 0x14001B660 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14001DA30 (CcSetDirtyInMask.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x140079AD0 (CcPinFileData.c)
 *     FsRtlReleaseHeaderMutex @ 0x140082C20 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 *     FsRtlAcquireEofLock @ 0x1401006C0 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x140100BE0 (FsRtlReleaseEofLock.c)
 *     CmpDelayDerefKCBWorker @ 0x1404781A0 (CmpDelayDerefKCBWorker.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x140481170 (CmpAllocateKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     CmpReferenceKeyControlBlock @ 0x140563480 (CmpReferenceKeyControlBlock.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400757E0 (KiTryUnwaitThread.c)
 *     KiAbFindWakeupLockEntry @ 0x1400A82C0 (KiAbFindWakeupLockEntry.c)
 *     KiAbApplyWakeupBoost @ 0x1400A8420 (KiAbApplyWakeupBoost.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14020277C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14027B28C (EtwTraceEnqueueWork.c)
 */

void __fastcall ExpReleaseFastMutexContended(__int64 a1, signed __int32 a2)
{
  char v3; // r8
  signed __int32 v4; // ecx
  bool v5; // zf
  signed __int32 v6; // eax
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v9; // r14
  int v10; // r13d
  __int64 v11; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  char v14; // al
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  __int64 WakeupLockEntry; // rax
  __int64 v17; // r13
  unsigned __int8 IsThreadRunning; // al
  __int64 v19; // r9
  _QWORD *v20; // rcx
  int v21; // r8d
  __int64 *v22; // rdx
  _QWORD v23[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int Priority; // [rsp+90h] [rbp+8h]
  int v25; // [rsp+98h] [rbp+10h]
  struct _KPRCB *v26; // [rsp+A0h] [rbp+18h]
  _KTHREAD *CurrentThread; // [rsp+A8h] [rbp+20h]

  do
  {
    v3 = 0;
    v4 = a2 + 1;
    if ( (a2 & 2) == 0 )
    {
      v4 = a2 - 1;
      v3 = 1;
    }
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v4, a2);
    v5 = a2 == v6;
    a2 = v6;
  }
  while ( !v5 );
  if ( v3 )
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
      v11 = (__int64)v9;
      v9 = (_QWORD *)*v9;
      v12 = *(_QWORD *)v11;
      v13 = *(_QWORD **)(v11 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || *v13 != v11 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      v14 = *(_BYTE *)(v11 + 16);
      if ( v14 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v11, *(unsigned __int16 *)(v11 + 18), v23) )
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
          *(_BYTE *)(v11 + 17) = 5;
          v17 = *(_QWORD *)(v11 + 24);
          *(_QWORD *)v11 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v26 = KeGetCurrentPrcb();
          CurrentThread = v26->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v26->CurrentThread);
            EtwTraceEnqueueWork(v19, v11, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v17);
          v20 = (_QWORD *)(v17 + 8);
          if ( (_QWORD *)*v20 == v20
            || *(_DWORD *)(v17 + 40) >= *(_DWORD *)(v17 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v17 && CurrentThread->WaitReason == 15 )
          {
LABEL_25:
            v21 = *(_DWORD *)(v17 + 4);
            *(_DWORD *)(v17 + 4) = v21 + 1;
            v22 = *(__int64 **)(v17 + 32);
            if ( *v22 != v17 + 24 )
              __fastfail(3u);
            *(_QWORD *)v11 = v17 + 24;
            *(_QWORD *)(v11 + 8) = v22;
            *v22 = v11;
            *(_QWORD *)(v17 + 32) = v11;
            if ( !v21 && (_QWORD *)*v20 != v20 )
              KiWakeOtherQueueWaiters((__int64)v26, v17);
          }
          else if ( !KiWakeQueueWaiter((__int64)v26, v17, v11) )
          {
            v20 = (_QWORD *)(v17 + 8);
            goto LABEL_25;
          }
          _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
          v5 = (*(_DWORD *)(a1 + 28))-- == 1;
          if ( v5 )
            break;
          v10 = v25;
          continue;
        }
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v11, 256LL, 0LL) )
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
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  }
}
