/*
 * XREFs of PopIdleAoAcDozeS4TimerCallback @ 0x14027FEA0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400733E0 (PopDeepSleepSetDisengageReason.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void PopIdleAoAcDozeS4TimerCallback()
{
  unsigned __int64 v0; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  byte_1403A9FC4 = 0;
  KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
  __writecr8(v0);
  _m_prefetchw(&dword_1403A9FCC);
  if ( !_InterlockedOr(&dword_1403A9FCC, 1u) )
  {
    PopDeepSleepSetDisengageReason(4);
    ExQueueWorkItem(&PopIdleAoAcDozeS4WorkItem, DelayedWorkQueue);
  }
}
