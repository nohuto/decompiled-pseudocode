/*
 * XREFs of DbgLogRequest @ 0x1C0004198
 * Callers:
 *     StorPortPauseDevice @ 0x1C0001C50 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0001DD0 (StorPortResumeDevice.c)
 *     RaidPauseUnitQueue @ 0x1C0001F3C (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C00020C0 (RaidResumeUnitQueue.c)
 *     StorPortNotification @ 0x1C0006310 (StorPortNotification.c)
 *     RaUnitScsiIrp @ 0x1C0007320 (RaUnitScsiIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009270 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 *     RaidStallDeviceQueue @ 0x1C000EF98 (RaidStallDeviceQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C00106A4 (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0010E08 (RaidPauseAdapterQueue.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C001AF90 (RaidUnitPendingDpcRoutine.c)
 *     RaidUnitSubmitRequest @ 0x1C001B394 (RaidUnitSubmitRequest.c)
 *     RaidAdapterResetBus @ 0x1C002E0E4 (RaidAdapterResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0030614 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortBusy @ 0x1C0033970 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C0033A90 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0033C50 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0033DF0 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0034070 (StorPortPause.c)
 *     StorPortReady @ 0x1C0034310 (StorPortReady.c)
 *     StorPortResume @ 0x1C0034540 (StorPortResume.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C003AF98 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C003DA24 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C003DC88 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003FBC4 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall DbgLogRequest(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 && *(_DWORD *)(a1 + 5060) && *(_QWORD *)(a1 + 5064) )
  {
    v7 = a7;
    v8 = *(_QWORD *)(a1 + 5064)
       + 48LL * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 5056)) % *(_DWORD *)(a1 + 5060));
    *(_DWORD *)v8 = a2;
    if ( !a7 )
      v7 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v8 + 40) = v7;
    *(_QWORD *)(v8 + 24) = a5;
    *(_QWORD *)(v8 + 32) = a6;
    *(_QWORD *)(v8 + 8) = a3;
    *(_QWORD *)(v8 + 16) = a4;
  }
}
