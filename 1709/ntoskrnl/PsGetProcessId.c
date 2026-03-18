/*
 * XREFs of PsGetProcessId @ 0x1400BAF50
 * Callers:
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14044456C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x140457830 (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     sub_1404FC25C @ 0x1404FC25C (sub_1404FC25C.c)
 *     WbDispatchOperation @ 0x140501A60 (WbDispatchOperation.c)
 *     EtwTraceWorkingSetSwap @ 0x1405983E0 (EtwTraceWorkingSetSwap.c)
 *     MiForceCrashForInvalidAccess @ 0x1406DEB64 (MiForceCrashForInvalidAccess.c)
 *     TtmpCloseTerminalHandle @ 0x14070EB00 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x14070EC70 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1407111B0 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x140711260 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x14074D884 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x140762FB4 (WheaTerminateProcess.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
