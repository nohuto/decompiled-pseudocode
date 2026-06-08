/*
 * XREFs of FxDriverEntry @ 0x1C0003CC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1C0036008 (__security_init_cookie.c)
 */

NTSTATUS __stdcall FxDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry_0(DriverObject, RegistryPath);
}
