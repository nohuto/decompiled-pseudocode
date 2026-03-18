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
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Handle, v1, v2);
}
