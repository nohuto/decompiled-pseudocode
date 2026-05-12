/*
 * XREFs of RaUnitAcquireRemoveLock @ 0x1C00058A4
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C00043A8 (StorpLogPerUnitStatistics.c)
 *     RaUnitPnpIrp @ 0x1C0005620 (RaUnitPnpIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPowerIrp @ 0x1C000E690 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000E82C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000E97C (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000EB58 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000EE34 (RaidUnitProcessBusyRequest.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017E0C (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002C9C8 (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitStartResetIo @ 0x1C003CE38 (RaUnitStartResetIo.c)
 *     RaidUnitAbortSrb @ 0x1C003DDEC (RaidUnitAbortSrb.c)
 *     RaWmiDispatchIrp @ 0x1C0063BE4 (RaWmiDispatchIrp.c)
 * Callees:
 *     RaUnitCheckRemoveState @ 0x1C0005CDC (RaUnitCheckRemoveState.c)
 */

__int64 __fastcall RaUnitAcquireRemoveLock(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // r10

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 680));
  v1 = RaUnitCheckRemoveState();
  if ( v1 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 680), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v2 + 168), 0, 0);
  return (unsigned int)v1;
}
