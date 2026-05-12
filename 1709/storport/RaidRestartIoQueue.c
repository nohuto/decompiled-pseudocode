/*
 * XREFs of RaidRestartIoQueue @ 0x1C0007180
 * Callers:
 *     RaidSetUnitPauseTimer @ 0x1C00019E0 (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C0001BEC (RaidAdapterResumeUnit.c)
 *     StorPortUnitActiveConditionStep2 @ 0x1C000513C (StorPortUnitActiveConditionStep2.c)
 *     RaUnitScsiIrp @ 0x1C0007320 (RaUnitScsiIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000EB58 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000EE34 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C000FD20 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidAdapterRestartQueues @ 0x1C0010608 (RaidAdapterRestartQueues.c)
 *     RaidUnitRestartQueue @ 0x1C0012EFC (RaidUnitRestartQueue.c)
 *     RaidAdapterDeviceReady @ 0x1C002CFC8 (RaidAdapterDeviceReady.c)
 *     RaidCompletionDpcRoutine @ 0x1C002F930 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C003DC88 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C003F720 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C0007224 (RaidNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000C1AC (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
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
