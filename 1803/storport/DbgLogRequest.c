/*
 * XREFs of DbgLogRequest @ 0x1C0003B44
 * Callers:
 *     StorPortNotification @ 0x1C00022F0 (StorPortNotification.c)
 *     StorPortPauseDevice @ 0x1C0003880 (StorPortPauseDevice.c)
 *     RaidPauseUnitQueue @ 0x1C00039F8 (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0003A94 (RaidResumeUnitQueue.c)
 *     StorPortResumeDevice @ 0x1C0003C30 (StorPortResumeDevice.c)
 *     RaUnitScsiIrp @ 0x1C00085C0 (RaUnitScsiIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C000A670 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitCompleteRequest @ 0x1C000B0C0 (RaidUnitCompleteRequest.c)
 *     RaidResumeAdapterQueue @ 0x1C000EFB0 (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C000F520 (RaidPauseAdapterQueue.c)
 *     RaidStallDeviceQueue @ 0x1C0010300 (RaidStallDeviceQueue.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C0011A40 (RaidUnitPendingDpcRoutine.c)
 *     RaidUnitSubmitRequest @ 0x1C0017474 (RaidUnitSubmitRequest.c)
 *     RaidAdapterResetBus @ 0x1C00277B8 (RaidAdapterResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002BB14 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortBusy @ 0x1C002FEF0 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C0030010 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C00302A0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0030440 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0030B10 (StorPortPause.c)
 *     StorPortReady @ 0x1C0030DD0 (StorPortReady.c)
 *     StorPortResume @ 0x1C0031140 (StorPortResume.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0039658 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C003BEE4 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C003C150 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003E128 (RaidUnitSubmitResetRequest.c)
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
