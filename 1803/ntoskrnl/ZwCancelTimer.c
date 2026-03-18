/*
 * XREFs of ZwCancelTimer @ 0x1401A80E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, CurrentState, v2);
}
