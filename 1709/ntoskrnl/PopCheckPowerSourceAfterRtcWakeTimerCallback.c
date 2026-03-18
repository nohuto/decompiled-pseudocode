/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1402441D0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140139F70 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140365068, DelayedWorkQueue);
}
