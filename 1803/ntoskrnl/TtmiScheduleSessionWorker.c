/*
 * XREFs of TtmiScheduleSessionWorker @ 0x140773264
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407704C0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407707B0 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1407709D4 (TtmiAssignDevice.c)
 *     TtmiSetPendingOnOffRequest @ 0x140771F2C (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x140772070 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x140772324 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x14077237C (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1407724A0 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x140772528 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyCsStateExited @ 0x140772D70 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140772E60 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x140772FA4 (TtmNotifySessionPowerStateChange.c)
 *     TtmpDispatchEvacuateDevices @ 0x1407740A8 (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
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
