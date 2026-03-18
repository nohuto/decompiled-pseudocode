/*
 * XREFs of PsIsHostSilo @ 0x1400859F0
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PspMapSiloSharedDataView @ 0x14045FBB0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14045FBE8 (MmMapApiSetView.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404922C4 (IopAllocateFoExtensionsOnCreate.c)
 *     SeCreateClientSecurityEx @ 0x14049CD70 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14049D260 (SepCreateClientSecurityEx.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1404BA930 (IopAllocRealFileObject.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1404FE504 (EtwpWriteAppStateChangeSummary.c)
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PspEstimateNewProcessServerSilo @ 0x14053A85C (PspEstimateNewProcessServerSilo.c)
 *     SepRmCommandServerThread @ 0x1405A76C0 (SepRmCommandServerThread.c)
 *     ObpInitializeRootNamespace @ 0x1405B1FD8 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1405B2414 (ObpCreateDosDevicesDirectory.c)
 *     PsRegisterSiloMonitor @ 0x1405C75F0 (PsRegisterSiloMonitor.c)
 *     EtwInitializeSiloState @ 0x1405DA61C (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x1405E6350 (ObInitServerSilo.c)
 *     SepRmLsaConnectRequest @ 0x1405EAF1C (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x1405EBA80 (DbgkRegisterErrorPort.c)
 *     PopTransitionCheckpoint @ 0x1406F5940 (PopTransitionCheckpoint.c)
 *     PspCatchCriticalBreak @ 0x140719040 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x1407280A8 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x14072DE94 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
