/*
 * XREFs of PsIsHostSilo @ 0x140050C00
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14048BEC8 (IopAllocateFoExtensionsOnCreate.c)
 *     PspMapSiloSharedDataView @ 0x14049BEE0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14049BF18 (MmMapApiSetView.c)
 *     PspEstimateNewProcessServerSilo @ 0x1404EDB0C (PspEstimateNewProcessServerSilo.c)
 *     SeCreateClientSecurityEx @ 0x14050AD10 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14050AF80 (SepCreateClientSecurityEx.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x14053AC70 (IopAllocRealFileObject.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PsRegisterSiloMonitor @ 0x14059F3C0 (PsRegisterSiloMonitor.c)
 *     ObpInitializeRootNamespace @ 0x1405A28B8 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1405A2CF4 (ObpCreateDosDevicesDirectory.c)
 *     SepRmCommandServerThread @ 0x1405C5730 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1405C5C44 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x1405C7308 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x1405CE6D4 (ObInitServerSilo.c)
 *     PspConvertJobToMixed @ 0x1406E146C (PspConvertJobToMixed.c)
 *     PspCatchCriticalBreak @ 0x1406E2BD8 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x1406F063C (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x1406F644C (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
