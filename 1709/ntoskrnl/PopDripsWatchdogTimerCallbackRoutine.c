/*
 * XREFs of PopDripsWatchdogTimerCallbackRoutine @ 0x14024C320
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140139F70 (PopQueueWorkItem.c)
 */

char __fastcall PopDripsWatchdogTimerCallbackRoutine(__int64 a1, __int64 a2)
{
  return PopQueueWorkItem(a2 + 360, DelayedWorkQueue);
}
