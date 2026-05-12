/*
 * XREFs of RaidRestartIoQueue @ 0x1C0006A68
 * Callers:
 *     StorPortUnitActiveConditionStep2 @ 0x1C000488C (StorPortUnitActiveConditionStep2.c)
 *     RaUnitScsiIrp @ 0x1C0006F90 (RaUnitScsiIrp.c)
 *     RaidAdapterResumeUnit @ 0x1C000CDC8 (RaidAdapterResumeUnit.c)
 *     RaidSetUnitPauseTimer @ 0x1C000D344 (RaidSetUnitPauseTimer.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E860 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000F7D0 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C000FDF0 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidAdapterRestartQueues @ 0x1C0011918 (RaidAdapterRestartQueues.c)
 *     RaidUnitRestartQueue @ 0x1C0013644 (RaidUnitRestartQueue.c)
 *     RaidAdapterDeviceReady @ 0x1C002C158 (RaidAdapterDeviceReady.c)
 *     RaidCompletionDpcRoutine @ 0x1C002EBF0 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C003C384 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C003E7F0 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C0006B14 (RaidNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000A0E4 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidRestartIoQueue(__int64 a1)
{
  KIRQL v2; // bp
  int v3; // edi
  __int64 v4; // rsi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v3 = 1;
  }
  else
  {
    v3 = 0;
    v2 = KfRaiseIrql(2u);
  }
  v4 = RaidNormalizeDeviceQueue(a1 + 400);
  if ( v4 && !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(a1 + 408)) )
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(a1 + 392))(*(_QWORD *)(a1 + 384), v4 - 120, v5);
  if ( !v3 )
    KeLowerIrql(v2);
}
