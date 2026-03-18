/*
 * XREFs of ZwMakeTemporaryObject @ 0x1401A95E0
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14056FE18 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x140605560 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x140621240 (IoCreateDriver.c)
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
