/*
 * XREFs of ZwMakeTemporaryObject @ 0x140180020
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14057DC20 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoCreateDriver @ 0x14059F550 (IoCreateDriver.c)
 *     IoDeleteSymbolicLink @ 0x1405D1970 (IoDeleteSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
