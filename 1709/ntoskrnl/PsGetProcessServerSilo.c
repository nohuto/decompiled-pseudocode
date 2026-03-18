/*
 * XREFs of PsGetProcessServerSilo @ 0x1400893E0
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14045F718 (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x14045FBB0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14045FBE8 (MmMapApiSetView.c)
 *     ObpDecrementHandleCount @ 0x140487254 (ObpDecrementHandleCount.c)
 *     ObpIncrementHandleCountEx @ 0x1404B1770 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     ObpReferenceDeviceMap @ 0x1404C64B0 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x1404C75E0 (ObQueryDeviceMapInformation.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     PspTerminateThreadByPointer @ 0x1404D6B90 (PspTerminateThreadByPointer.c)
 *     PspTerminateAllThreads @ 0x1404D6C7C (PspTerminateAllThreads.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     ObDereferenceDeviceMap @ 0x1404FC1D4 (ObDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x1404FCFE8 (DbgkFlushErrorPort.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1404FE504 (EtwpWriteAppStateChangeSummary.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14050BF40 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspEstimateNewProcessServerSilo @ 0x14053A85C (PspEstimateNewProcessServerSilo.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     SepRmLsaConnectRequest @ 0x1405EAF1C (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x1405EBA80 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 *     IopGetThreadActiveConsoleId @ 0x1406B805C (IopGetThreadActiveConsoleId.c)
 *     ObSetProcessDeviceMap @ 0x1406F23DC (ObSetProcessDeviceMap.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1407519AC (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1728);
}
