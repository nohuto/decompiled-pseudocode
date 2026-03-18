/*
 * XREFs of NtLoadDriver @ 0x14046DF5C
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x1400157D8 (IopLoadDriverImage.c)
 */

NTSTATUS __stdcall NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName, 0);
}
