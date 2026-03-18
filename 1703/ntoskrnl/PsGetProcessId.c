/*
 * XREFs of PsGetProcessId @ 0x140100A50
 * Callers:
 *     sub_140498A0C @ 0x140498A0C (sub_140498A0C.c)
 *     EtwTraceWorkingSetSwap @ 0x1404C9698 (EtwTraceWorkingSetSwap.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1404C9D98 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     WbDispatchOperation @ 0x14053BA60 (WbDispatchOperation.c)
 *     EtwpNotifyGuid @ 0x140551CB4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1406D0C80 (PopEtAggregateKeyCopyFromProcess.c)
 *     TtmpCloseTerminalHandle @ 0x1406D8770 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1406D88E0 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1406DADA0 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1406DAEB0 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1407107A0 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x140723504 (WheaTerminateProcess.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
