/*
 * XREFs of ZwMakeTemporaryObject @ 0x14017F9C0
 * Callers:
 *     IoDeleteSymbolicLink @ 0x14059E0E0 (IoDeleteSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1405A7C54 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoCreateDriver @ 0x1405C7780 (IoCreateDriver.c)
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
