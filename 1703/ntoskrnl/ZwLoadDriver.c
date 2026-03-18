/*
 * XREFs of ZwLoadDriver @ 0x14017FEC0
 * Callers:
 *     KsepLoadShimProvider @ 0x140208258 (KsepLoadShimProvider.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140435640 (EtwpUpdateFileInfoDriverState.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     PopCadTriggerDriverLoad @ 0x1406D5724 (PopCadTriggerDriverLoad.c)
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
