/*
 * XREFs of FxDriverEntry @ 0x1C0001E80
 * Callers:
 *     <none>
 * Callees:
 *     FxDriverEntryWorker @ 0x1C0001EB4 (FxDriverEntryWorker.c)
 *     __security_init_cookie @ 0x1C0060008 (__security_init_cookie.c)
 */

NTSTATUS __stdcall FxDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return FxDriverEntryWorker(DriverObject, RegistryPath);
}
