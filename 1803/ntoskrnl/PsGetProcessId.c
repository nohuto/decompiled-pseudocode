/*
 * XREFs of PsGetProcessId @ 0x14006ECF0
 * Callers:
 *     sub_14050EAFC @ 0x14050EAFC (sub_14050EAFC.c)
 *     WbDispatchOperation @ 0x14050F10C (WbDispatchOperation.c)
 *     EtwTraceWorkingSetSwap @ 0x14052C59C (EtwTraceWorkingSetSwap.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x14052D0AC (EtwTraceWorkingSetInSwapStoreFail.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1405329C0 (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwpNotifyGuid @ 0x14058B468 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     MiForceCrashForInvalidAccess @ 0x1407499E8 (MiForceCrashForInvalidAccess.c)
 *     TtmpCloseTerminalHandle @ 0x140772260 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1407723D0 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x140774A40 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x140774AF0 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1407A95C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1407AF0F4 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x1407CAC14 (WheaTerminateProcess.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
