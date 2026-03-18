/*
 * XREFs of PsGetHostSilo @ 0x14001ED90
 * Callers:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14003BE4C (SymCryptCpuFeaturesNeverPresent.c)
 *     _call_matherr @ 0x14016E0E0 (_call_matherr.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140438FF8 (ExpWnfEnumerateScopeInstances.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140461490 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     MiDeleteVadBitmap @ 0x140499A8C (MiDeleteVadBitmap.c)
 *     ExpWnfLookupPermanentName @ 0x1404C0014 (ExpWnfLookupPermanentName.c)
 *     ExpWnfGenerateStateName @ 0x1404C2A70 (ExpWnfGenerateStateName.c)
 *     PspEstimateNewProcessServerSilo @ 0x1404EDB0C (PspEstimateNewProcessServerSilo.c)
 *     ExpWnfResolveScopeInstance @ 0x1404EFA9C (ExpWnfResolveScopeInstance.c)
 *     PspInitializeThunkContext @ 0x1404F8B04 (PspInitializeThunkContext.c)
 *     MiReturnPageTablePageCommitment @ 0x14051DC80 (MiReturnPageTablePageCommitment.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     ExpCheckPortableOperatingSystem @ 0x1405578EC (ExpCheckPortableOperatingSystem.c)
 *     ObpParseSymbolicLinkEx @ 0x1405604C0 (ObpParseSymbolicLinkEx.c)
 *     ObpSetSiloDeviceMap @ 0x1405A2F04 (ObpSetSiloDeviceMap.c)
 *     CmpSetVersionData @ 0x1405A48E0 (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x1405A529C (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1405C5730 (SepRmCommandServerThread.c)
 *     PsStartSiloMonitor @ 0x1405CB6A0 (PsStartSiloMonitor.c)
 *     RtlGetHostNtSystemRoot @ 0x1405D64E4 (RtlGetHostNtSystemRoot.c)
 *     PsUnregisterSiloMonitor @ 0x1406E3000 (PsUnregisterSiloMonitor.c)
 *     ObCreateSiloRootDirectory @ 0x140747700 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 PsGetHostSilo()
{
  return 0LL;
}
