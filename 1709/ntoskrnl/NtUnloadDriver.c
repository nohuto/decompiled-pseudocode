/*
 * XREFs of NtUnloadDriver @ 0x1406BD7F4
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x14046EF24 (IopUnloadDriver.c)
 */

NTSTATUS __stdcall NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(&DriverServiceName->Length, 0);
}
