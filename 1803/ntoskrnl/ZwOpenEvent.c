/*
 * XREFs of ZwOpenEvent @ 0x1401A7CC0
 * Callers:
 *     PspShutdownCsrProcess @ 0x140779724 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
