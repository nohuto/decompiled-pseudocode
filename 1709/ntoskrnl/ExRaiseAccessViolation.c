/*
 * XREFs of ExRaiseAccessViolation @ 0x14075EBA0
 * Callers:
 *     PfpPfnPrioRequest @ 0x14043D960 (PfpPfnPrioRequest.c)
 *     NtQueryObject @ 0x14048EB10 (NtQueryObject.c)
 *     NtQueryVolumeInformationFile @ 0x140490C90 (NtQueryVolumeInformationFile.c)
 *     KeUserModeCallback @ 0x1404943E0 (KeUserModeCallback.c)
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 *     IopValidateQueryInformationParameters @ 0x14049AA00 (IopValidateQueryInformationParameters.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     NtQueryInformationToken @ 0x1404A40D0 (NtQueryInformationToken.c)
 *     NtQueryKey @ 0x1404A8630 (NtQueryKey.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     WbUpdateHeapExecutedCallArgumentList @ 0x1405026B0 (WbUpdateHeapExecutedCallArgumentList.c)
 *     NtAlpcQueryInformation @ 0x140562440 (NtAlpcQueryInformation.c)
 *     NtReadFile @ 0x140562BE0 (NtReadFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
