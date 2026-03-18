/*
 * XREFs of GsDriverEntry @ 0x1C0382010
 * Callers:
 *     <none>
 * Callees:
 *     DriverEntry_0 @ 0x1C0143A1C (DriverEntry_0.c)
 *     __security_init_cookie @ 0x1C0382044 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry_0(DriverObject, RegistryPath);
}
