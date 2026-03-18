/*
 * XREFs of NtLoadDriver @ 0x14044DA04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName, 0);
}
