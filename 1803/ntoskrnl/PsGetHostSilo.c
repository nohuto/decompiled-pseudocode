/*
 * XREFs of PsGetHostSilo @ 0x14006CDB0
 * Callers:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1400D0A60 (SymCryptCpuFeaturesNeverPresent.c)
 *     _call_matherr @ 0x14018C7B0 (_call_matherr.c)
 *     DbgkpRemoveErrorPort @ 0x14048BA68 (DbgkpRemoveErrorPort.c)
 *     MiReturnPageTablePageCommitment @ 0x1404AF230 (MiReturnPageTablePageCommitment.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PspEstimateNewProcessServerSilo @ 0x1404F4784 (PspEstimateNewProcessServerSilo.c)
 *     ExpWnfGenerateStateName @ 0x1404F4B24 (ExpWnfGenerateStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x1404F63DC (ExpWnfResolveScopeInstance.c)
 *     MiDeleteVadBitmap @ 0x140512E90 (MiDeleteVadBitmap.c)
 *     ExpWnfLookupPermanentName @ 0x1405178D4 (ExpWnfLookupPermanentName.c)
 *     ObpParseSymbolicLinkEx @ 0x14051B890 (ObpParseSymbolicLinkEx.c)
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1405678F8 (ExpWnfEnumerateScopeInstances.c)
 *     ExpCheckPortableOperatingSystem @ 0x14057EC4C (ExpCheckPortableOperatingSystem.c)
 *     PspInitializeThunkContext @ 0x1405B9FE0 (PspInitializeThunkContext.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x1405E3370 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     ObpSetSiloDeviceMap @ 0x14061D1CC (ObpSetSiloDeviceMap.c)
 *     HvlPhase0Initialize @ 0x140628830 (HvlPhase0Initialize.c)
 *     CmpSetVersionData @ 0x14062ED3C (CmpSetVersionData.c)
 *     PsBootPhaseComplete @ 0x14062F6F0 (PsBootPhaseComplete.c)
 *     CmpMountPreloadedHives @ 0x1406309E0 (CmpMountPreloadedHives.c)
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 *     PsStartSiloMonitor @ 0x140647BE0 (PsStartSiloMonitor.c)
 *     RtlGetHostNtSystemRoot @ 0x140655BB4 (RtlGetHostNtSystemRoot.c)
 *     VRegEnabledInJob @ 0x1407080AC (VRegEnabledInJob.c)
 *     PsUnregisterSiloMonitor @ 0x14077D330 (PsUnregisterSiloMonitor.c)
 *     ObCreateSiloRootDirectory @ 0x1407F63F0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 PsGetHostSilo()
{
  return 0LL;
}
