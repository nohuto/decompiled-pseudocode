/*
 * XREFs of TtmiScheduleSessionWorker @ 0x14070F9F4
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1405E9F20 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x14070D050 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x14070D274 (TtmiAssignDevice.c)
 *     TtmiSetPendingOnOffRequest @ 0x14070E7CC (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x14070E910 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x14070EBC4 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x14070EC1C (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x14070ED30 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x14070EDB8 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyCsStateExited @ 0x14070F594 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x14070F684 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x14070F790 (TtmNotifySessionPowerStateChange.c)
 *     TtmpDispatchEvacuateDevices @ 0x14071082C (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
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
