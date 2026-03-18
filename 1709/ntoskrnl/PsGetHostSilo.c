/*
 * XREFs of PsGetHostSilo @ 0x140004290
 * Callers:
 *     SymCryptCpuFeaturesNeverPresent @ 0x140130328 (SymCryptCpuFeaturesNeverPresent.c)
 *     _call_matherr @ 0x1401628F0 (_call_matherr.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14044DD2C (ExpWnfEnumerateScopeInstances.c)
 *     MiReturnPageTablePageCommitment @ 0x140499780 (MiReturnPageTablePageCommitment.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     ExpWnfLookupPermanentName @ 0x1404E0E80 (ExpWnfLookupPermanentName.c)
 *     MiDeleteVadBitmap @ 0x1404FB8C4 (MiDeleteVadBitmap.c)
 *     ExpWnfResolveScopeInstance @ 0x140502B1C (ExpWnfResolveScopeInstance.c)
 *     ExpWnfGenerateStateName @ 0x1405035C4 (ExpWnfGenerateStateName.c)
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     ObpParseSymbolicLinkEx @ 0x14051E840 (ObpParseSymbolicLinkEx.c)
 *     PspEstimateNewProcessServerSilo @ 0x14053A85C (PspEstimateNewProcessServerSilo.c)
 *     PspInitializeThunkContext @ 0x14053F16C (PspInitializeThunkContext.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x14055F650 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     ExpCheckPortableOperatingSystem @ 0x140590B7C (ExpCheckPortableOperatingSystem.c)
 *     SepRmCommandServerThread @ 0x1405A76C0 (SepRmCommandServerThread.c)
 *     ObpSetSiloDeviceMap @ 0x1405B2624 (ObpSetSiloDeviceMap.c)
 *     CmpSetVersionData @ 0x1405C1254 (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x1405C1C0C (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 *     PsStartSiloMonitor @ 0x1405DE8C0 (PsStartSiloMonitor.c)
 *     RtlGetHostNtSystemRoot @ 0x1405F2E80 (RtlGetHostNtSystemRoot.c)
 *     VRegEnabledInJob @ 0x1406A3A3C (VRegEnabledInJob.c)
 *     DbgkpRemoveErrorPort @ 0x1406AC1FC (DbgkpRemoveErrorPort.c)
 *     PsUnregisterSiloMonitor @ 0x1407195D0 (PsUnregisterSiloMonitor.c)
 *     ObCreateSiloRootDirectory @ 0x140789F30 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 PsGetHostSilo()
{
  return 0LL;
}
