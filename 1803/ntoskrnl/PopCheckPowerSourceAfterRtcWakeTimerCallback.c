/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x14027A950
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_1403A97A8, DelayedWorkQueue);
}
