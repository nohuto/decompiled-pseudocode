/*
 * XREFs of NtUnloadDriver @ 0x140691AAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(DriverServiceName, 0);
}
