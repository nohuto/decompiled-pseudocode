/*
 * XREFs of KeInsertHeadQueue @ 0x140245D30
 * Callers:
 *     <none>
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeInsertHeadQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  LIST_ENTRY *p_WaitListHead; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rbp
  __int64 v8; // r8
  __int64 v9; // rdx
  LONG v10; // edx
  LIST_ENTRY *p_EntryListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  LONG SignalState; // [rsp+50h] [rbp+8h]

  p_WaitListHead = &Queue->Header.WaitListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v8) = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v9, v8);
  }
  KiAcquireKobjectLockSafe(&Queue->Header.Lock);
  SignalState = Queue->Header.SignalState;
  if ( p_WaitListHead->Flink == p_WaitListHead
    || Queue->CurrentCount >= Queue->MaximumCount
    || (PRKQUEUE)CurrentThread->Queue == Queue && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)Queue, (__int64)Entry) )
  {
    v10 = Queue->Header.SignalState;
    Queue->Header.SignalState = v10 + 1;
    p_EntryListHead = &Queue->EntryListHead;
    Flink = Queue->EntryListHead.Flink;
    if ( Flink->Blink != &Queue->EntryListHead )
      __fastfail(3u);
    Entry->Flink = Flink;
    Entry->Blink = p_EntryListHead;
    Flink->Blink = Entry;
    p_EntryListHead->Flink = Entry;
    if ( !v10 && p_WaitListHead->Flink != p_WaitListHead )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)Queue);
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0, 1u, 0, CurrentIrql);
  return SignalState;
}
