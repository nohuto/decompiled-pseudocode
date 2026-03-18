/*
 * XREFs of GsDriverEntry @ 0x1C00AF040
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1C00AF008 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return 0;
}
