/*
 * XREFs of CmpDelayDerefKCBTimerRoutine @ 0x1400E1090
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 */

void CmpDelayDerefKCBTimerRoutine()
{
  ExQueueWorkItem(&CmpDelayDerefKCBWorkItem, DelayedWorkQueue);
}
