/*
 * XREFs of KeInsertQueue @ 0x140010DA0
 * Callers:
 *     PopFxQueueWorkOrder @ 0x14006882C (PopFxQueueWorkOrder.c)
 *     FsRtlpPostStackOverflow @ 0x1401E48F4 (FsRtlpPostStackOverflow.c)
 *     IopPassiveInterruptDpc @ 0x1401F88B0 (IopPassiveInterruptDpc.c)
 *     KiSwapToUmsThreadContinue @ 0x140207E40 (KiSwapToUmsThreadContinue.c)
 *     EtwpQueueReply @ 0x140429088 (EtwpQueueReply.c)
 *     KeSynchronizeUmsThread @ 0x1406AD76C (KeSynchronizeUmsThread.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeInsertQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  LIST_ENTRY *p_WaitListHead; // rdi
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rbp
  LONG v9; // edx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  LONG SignalState; // [rsp+50h] [rbp+8h]

  p_WaitListHead = &Queue->Header.WaitListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v11) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v12, v11);
  }
  KiAcquireKobjectLockSafe(Queue);
  SignalState = Queue->Header.SignalState;
  if ( p_WaitListHead->Flink == p_WaitListHead
    || Queue->CurrentCount >= Queue->MaximumCount
    || (PRKQUEUE)CurrentThread->Queue == Queue && CurrentThread->WaitReason == 15
    || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, Queue, Entry) )
  {
    v9 = Queue->Header.SignalState;
    Queue->Header.SignalState = v9 + 1;
    Blink = Queue->EntryListHead.Blink;
    if ( Blink->Flink != &Queue->EntryListHead )
      __fastfail(3u);
    Entry->Flink = &Queue->EntryListHead;
    Entry->Blink = Blink;
    Blink->Flink = Entry;
    Queue->EntryListHead.Blink = Entry;
    if ( !v9 && p_WaitListHead->Flink != p_WaitListHead )
      KiWakeOtherQueueWaiters(CurrentPrcb, Queue);
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return SignalState;
}
