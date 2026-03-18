/*
 * XREFs of PsIsHostSilo @ 0x140108640
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     SeCreateClientSecurityEx @ 0x1404C92A0 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x1404C9490 (SepCreateClientSecurityEx.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404E36C8 (IopAllocateFoExtensionsOnCreate.c)
 *     PspMapSiloSharedDataView @ 0x1404EA270 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1404EA2A8 (MmMapApiSetView.c)
 *     PspEstimateNewProcessServerSilo @ 0x1404F4784 (PspEstimateNewProcessServerSilo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405108B4 (EtwpWriteAppStateChangeSummary.c)
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1405B3C40 (IopAllocRealFileObject.c)
 *     PopTransitionCheckpoint @ 0x1405EBCD4 (PopTransitionCheckpoint.c)
 *     ObpInitializeRootNamespace @ 0x14061CB80 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14061CFBC (ObpCreateDosDevicesDirectory.c)
 *     ObInitServerSilo @ 0x140620A04 (ObInitServerSilo.c)
 *     PsRegisterSiloMonitor @ 0x1406216F0 (PsRegisterSiloMonitor.c)
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140631D90 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14063D968 (EtwInitializeSiloState.c)
 *     DbgkRegisterErrorPort @ 0x140710660 (DbgkRegisterErrorPort.c)
 *     PspCatchCriticalBreak @ 0x14077D014 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x14078C4BC (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x140792184 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
