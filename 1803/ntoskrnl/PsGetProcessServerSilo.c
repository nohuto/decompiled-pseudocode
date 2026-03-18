/*
 * XREFs of PsGetProcessServerSilo @ 0x14006CFF0
 * Callers:
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PspTerminateThreadByPointer @ 0x1404BB3D0 (PspTerminateThreadByPointer.c)
 *     PspTerminateAllThreads @ 0x1404E89FC (PspTerminateAllThreads.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404E9DD0 (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x1404EA270 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1404EA2A8 (MmMapApiSetView.c)
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x1404F4784 (PspEstimateNewProcessServerSilo.c)
 *     EtwpWriteProcessEvent @ 0x1404F8600 (EtwpWriteProcessEvent.c)
 *     ObQueryDeviceMapInformation @ 0x1404FCF70 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x1404FD200 (ObpReferenceDeviceMap.c)
 *     EtwTraceThread @ 0x1404FD384 (EtwTraceThread.c)
 *     ObDereferenceDeviceMap @ 0x14050EA74 (ObDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x1405103C0 (DbgkFlushErrorPort.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405108B4 (EtwpWriteAppStateChangeSummary.c)
 *     ObpDecrementHandleCount @ 0x140519894 (ObpDecrementHandleCount.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1405305E0 (PspValidateJobAssignmentSiloPolicy.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     ObpIncrementHandleCountEx @ 0x1405AB080 (ObpIncrementHandleCountEx.c)
 *     EtwpProcessEnumCallback @ 0x1406292D0 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x140631D90 (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140710660 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x14075B740 (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x1407A8664 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1407A936C (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1407A93FC (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1407B2700 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 1728);
}
