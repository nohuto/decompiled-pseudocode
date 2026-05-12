/*
 * XREFs of RaidRestartIoQueue @ 0x1C000C8F8
 * Callers:
 *     RaidSetUnitPauseTimer @ 0x1C0003678 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C0003820 (RaidAdapterResumeUnit.c)
 *     StorPortUnitActiveConditionStep2 @ 0x1C0006900 (StorPortUnitActiveConditionStep2.c)
 *     RaUnitScsiIrp @ 0x1C00085C0 (RaUnitScsiIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E868 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterRestartQueues @ 0x1C000EF18 (RaidAdapterRestartQueues.c)
 *     RaidUnitProcessBusyRequest @ 0x1C001019C (RaidUnitProcessBusyRequest.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C0010FB0 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidUnitRestartQueue @ 0x1C0015E8C (RaidUnitRestartQueue.c)
 *     RaidAdapterDeviceReady @ 0x1C0025DC8 (RaidAdapterDeviceReady.c)
 *     RaidCompletionDpcRoutine @ 0x1C0029890 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C003C150 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C003DC90 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C000C99C (RaidNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000CCE8 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidRestartIoQueue(__int64 a1)
{
  KIRQL v2; // di
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rbp
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    v2 = KfRaiseIrql(2u);
  v4 = RaidNormalizeDeviceQueue(a1 + 400);
  if ( v4 && !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(a1 + 408)) )
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(a1 + 392))(*(_QWORD *)(a1 + 384), v4 - 120, v5);
  if ( CurrentIrql != 2 )
    KeLowerIrql(v2);
}
