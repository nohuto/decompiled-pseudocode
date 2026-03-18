/*
 * XREFs of CmpDelayDerefKCBTimerRoutine @ 0x1400CBD80
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void CmpDelayDerefKCBTimerRoutine()
{
  ExQueueWorkItem(&CmpDelayDerefKCBWorkItem, DelayedWorkQueue);
}
