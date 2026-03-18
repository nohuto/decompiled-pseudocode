/*
 * XREFs of WdipTimeoutTimerRoutine @ 0x14003C340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WdipTimeoutTimerRoutine()
{
  ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
}
