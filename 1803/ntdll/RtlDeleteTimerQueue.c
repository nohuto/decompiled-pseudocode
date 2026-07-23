/*
 * XREFs of RtlDeleteTimerQueue @ 0x180108B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlDeleteTimerQueue(HANDLE TimerQueueHandle)
{
  return RtlDeleteTimerQueueEx(TimerQueueHandle, 0LL);
}
