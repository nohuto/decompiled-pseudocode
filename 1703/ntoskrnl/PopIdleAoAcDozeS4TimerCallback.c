/*
 * XREFs of PopIdleAoAcDozeS4TimerCallback @ 0x140236E60
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x14006F418 (PopDeepSleepSetDisengageReason.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void PopIdleAoAcDozeS4TimerCallback()
{
  unsigned __int64 v0; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  byte_14034B0E4 = 0;
  KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
  __writecr8(v0);
  _m_prefetchw(&dword_14034B0EC);
  if ( !_InterlockedOr(&dword_14034B0EC, 1u) )
  {
    PopDeepSleepSetDisengageReason(4);
    ExQueueWorkItem(&PopIdleAoAcDozeS4WorkItem, DelayedWorkQueue);
  }
}
