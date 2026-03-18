/*
 * XREFs of ZwUnloadDriver @ 0x140181040
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     IopUnloadDriver @ 0x14046EF24 (IopUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14059726C (EtwpUpdateFileInfoDriverState.c)
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
