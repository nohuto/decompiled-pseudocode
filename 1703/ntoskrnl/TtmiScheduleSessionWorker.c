/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1406D95E8
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x140584B80 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1406D6DE0 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1406D7004 (TtmiAssignDevice.c)
 *     TtmiSetPendingOnOffRequest @ 0x1406D8444 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1406D8588 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1406D882C (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1406D8884 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1406D89A0 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1406D8A28 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyCsStateExited @ 0x1406D9200 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1406D92FC (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x1406D9408 (TtmNotifySessionPowerStateChange.c)
 *     TtmpDispatchEvacuateDevices @ 0x1406DA41C (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void __fastcall TtmiScheduleSessionWorker(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 152) |= a2;
  if ( (*(_DWORD *)(a1 + 4) & 3) == 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    *(_DWORD *)(a1 + 4) |= 1u;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 120), DelayedWorkQueue);
  }
}
