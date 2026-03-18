/*
 * XREFs of ZwUnloadDriver @ 0x1401AAC80
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14057BF54 (EtwpUpdateFileInfoDriverState.c)
 *     IopUnloadDriver @ 0x1405F5EC0 (IopUnloadDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1, v2);
}
