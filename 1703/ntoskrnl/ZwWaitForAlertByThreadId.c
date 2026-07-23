/*
 * XREFs of ZwWaitForAlertByThreadId @ 0x140181780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Address);
}
