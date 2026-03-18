/*
 * XREFs of PopDripsWatchdogTimerCallbackRoutine @ 0x140282030
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 */

char __fastcall PopDripsWatchdogTimerCallbackRoutine(__int64 a1, __int64 a2)
{
  return PopQueueWorkItem(a2 + 360, DelayedWorkQueue);
}
