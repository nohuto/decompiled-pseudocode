/*
 * XREFs of ZwLoadDriver @ 0x14017F860
 * Callers:
 *     KsepLoadShimProvider @ 0x14020EC88 (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14059726C (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x14070B334 (PopCadTriggerDriverLoad.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1, v2);
}
