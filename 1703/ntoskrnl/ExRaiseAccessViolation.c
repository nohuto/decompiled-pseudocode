/*
 * XREFs of ExRaiseAccessViolation @ 0x14071ED40
 * Callers:
 *     NtAlpcQueryInformation @ 0x1404268B0 (NtAlpcQueryInformation.c)
 *     NtQueryVolumeInformationFile @ 0x1404812E0 (NtQueryVolumeInformationFile.c)
 *     NtQuerySecurityAttributesToken @ 0x1404F7910 (NtQuerySecurityAttributesToken.c)
 *     NtQueryObject @ 0x1404FAD40 (NtQueryObject.c)
 *     NtQueryKey @ 0x140507B00 (NtQueryKey.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 *     PfpPfnPrioRequest @ 0x1405206B0 (PfpPfnPrioRequest.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     IopValidateQueryInformationParameters @ 0x14052C8E0 (IopValidateQueryInformationParameters.c)
 *     WbUpdateHeapExecutedCallArgumentList @ 0x14053C660 (WbUpdateHeapExecutedCallArgumentList.c)
 *     KeUserModeCallback @ 0x14053FD20 (KeUserModeCallback.c)
 *     NtReadFile @ 0x140566B00 (NtReadFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
