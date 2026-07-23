/*
 * XREFs of ZwPulseEvent @ 0x140180560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPulseEvent(HANDLE EventHandle, PLONG PulseCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
