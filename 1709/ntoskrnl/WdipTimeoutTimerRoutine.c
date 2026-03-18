/*
 * XREFs of WdipTimeoutTimerRoutine @ 0x140131180
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 */

void WdipTimeoutTimerRoutine()
{
  ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
}
