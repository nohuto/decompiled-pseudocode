/*
 * XREFs of NtProcessStartup @ 0x140001000
 * Callers:
 *     <none>
 * Callees:
 *     NtProcessStartup_AfterSecurityCookieInitialized @ 0x140001020 (NtProcessStartup_AfterSecurityCookieInitialized.c)
 *     __security_init_cookie @ 0x140001598 (__security_init_cookie.c)
 */

NTSTATUS __stdcall __noreturn NtProcessStartup(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  NtProcessStartup_AfterSecurityCookieInitialized(DriverObject);
  JUMPOUT(0x140001016LL);
}
