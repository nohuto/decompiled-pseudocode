/*
 * XREFs of PsGetProcessServerSilo @ 0x140085020
 * Callers:
 *     ObDereferenceDeviceMap @ 0x140498984 (ObDereferenceDeviceMap.c)
 *     PspSetupUserProcessAddressSpace @ 0x14049BA50 (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x14049BEE0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14049BF18 (MmMapApiSetView.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1404E915C (EtwpWriteAppStateChangeSummary.c)
 *     ObQueryDeviceMapInformation @ 0x1404EC6F0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x1404EC98C (ObpReferenceDeviceMap.c)
 *     PspEstimateNewProcessServerSilo @ 0x1404EDB0C (PspEstimateNewProcessServerSilo.c)
 *     ObpDecrementHandleCount @ 0x1404F5E48 (ObpDecrementHandleCount.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1405311B0 (ObpIncrementHandleCountEx.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 *     PspTerminateAllThreads @ 0x14054EDAC (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14054F0D0 (PspTerminateThreadByPointer.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     SepRmLsaConnectRequest @ 0x1405C5C44 (SepRmLsaConnectRequest.c)
 *     ObSetProcessDeviceMap @ 0x1406C3970 (ObSetProcessDeviceMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1728);
}
