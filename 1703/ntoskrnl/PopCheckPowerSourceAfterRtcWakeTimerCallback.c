/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x14022F9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PopCheckPowerSourceAfterRtcWakeTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_14034A888, DelayedWorkQueue);
}
