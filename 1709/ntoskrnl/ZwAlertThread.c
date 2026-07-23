/*
 * XREFs of ZwAlertThread @ 0x14017E680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAlertThread(HANDLE ThreadHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
