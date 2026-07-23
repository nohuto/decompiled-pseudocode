/*
 * XREFs of ZwCancelTimer2 @ 0x14017F140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCancelTimer2(HANDLE TimerHandle, PT2_CANCEL_PARAMETERS Parameters)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
