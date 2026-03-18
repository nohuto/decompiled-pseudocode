/*
 * XREFs of PopIdleAoAcDozeS4TimerCallback @ 0x14024C070
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400AF04C (PopDeepSleepSetDisengageReason.c)
 */

void PopIdleAoAcDozeS4TimerCallback()
{
  unsigned __int64 v0; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  byte_140365744 = 0;
  KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
  __writecr8(v0);
  _m_prefetchw(&dword_14036574C);
  if ( !_InterlockedOr(&dword_14036574C, 1u) )
  {
    PopDeepSleepSetDisengageReason(4);
    ExQueueWorkItem(&PopIdleAoAcDozeS4WorkItem, DelayedWorkQueue);
  }
}
