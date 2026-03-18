/*
 * XREFs of NtUnloadDriver @ 0x1405F4164
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x1405F5EC0 (IopUnloadDriver.c)
 */

NTSTATUS __stdcall NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(DriverServiceName, 0LL);
}
