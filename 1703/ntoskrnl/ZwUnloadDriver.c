/*
 * XREFs of ZwUnloadDriver @ 0x140181640
 * Callers:
 *     EtwpUpdateFileInfoDriverState @ 0x140435640 (EtwpUpdateFileInfoDriverState.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     IopUnloadDriver @ 0x1405CC050 (IopUnloadDriver.c)
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
