/*
 * XREFs of NtLoadDriver @ 0x1405F6288
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140160304 (IopLoadDriverImage.c)
 */

NTSTATUS __stdcall NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName, 0);
}
