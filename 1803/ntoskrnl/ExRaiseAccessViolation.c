/*
 * XREFs of ExRaiseAccessViolation @ 0x1407C5920
 * Callers:
 *     NtQueryObject @ 0x1404A7270 (NtQueryObject.c)
 *     NtQueryVolumeInformationFile @ 0x1404D0BE0 (NtQueryVolumeInformationFile.c)
 *     NtReadFile @ 0x14052A160 (NtReadFile.c)
 *     NtAlpcQueryInformation @ 0x140551C40 (NtAlpcQueryInformation.c)
 *     IopValidateQueryInformationParameters @ 0x140597740 (IopValidateQueryInformationParameters.c)
 *     NtQueryInformationToken @ 0x140597890 (NtQueryInformationToken.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     NtQueryKey @ 0x14059E7B0 (NtQueryKey.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     PfpPfnPrioRequest @ 0x1405B0D80 (PfpPfnPrioRequest.c)
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 *     KeUserModeCallback @ 0x1405B80E0 (KeUserModeCallback.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
