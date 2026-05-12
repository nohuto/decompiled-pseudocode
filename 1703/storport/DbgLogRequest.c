/*
 * XREFs of DbgLogRequest @ 0x1C000D264
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0006B90 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C0006F90 (RaUnitScsiIrp.c)
 *     StorPortPauseDevice @ 0x1C000CE20 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C000CFA0 (StorPortResumeDevice.c)
 *     RaidPauseUnitQueue @ 0x1C000D110 (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C000D1B0 (RaidResumeUnitQueue.c)
 *     RaidStallDeviceQueue @ 0x1C000F934 (RaidStallDeviceQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C00119A4 (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0011DCC (RaidPauseAdapterQueue.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C001AE20 (RaidUnitPendingDpcRoutine.c)
 *     RaidAdapterResetBus @ 0x1C002D15C (RaidAdapterResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002F784 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortBusy @ 0x1C0032880 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C00329A0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0032B60 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0032D00 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0032F20 (StorPortPause.c)
 *     StorPortReady @ 0x1C00331C0 (StorPortReady.c)
 *     StorPortResume @ 0x1C00333F0 (StorPortResume.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0039488 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C003C114 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C003C384 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003F380 (RaidUnitSubmitResetRequest.c)
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
