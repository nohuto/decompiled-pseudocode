/*
 * XREFs of ZwLoadDriver @ 0x1401A9480
 * Callers:
 *     KsepLoadShimProvider @ 0x14024CEDC (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14057BF54 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x14076E904 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1407B9514 (EtwpConstructIptData.c)
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
