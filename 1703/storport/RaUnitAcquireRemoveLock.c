/*
 * XREFs of RaUnitAcquireRemoveLock @ 0x1C0005080
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000314C (StorpLogPerUnitStatistics.c)
 *     RaUnitPnpIrp @ 0x1C0004E20 (RaUnitPnpIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPowerIrp @ 0x1C000E39C (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000E530 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000E684 (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E860 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000F7D0 (RaidUnitProcessBusyRequest.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017C80 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C002BBC4 (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitStartResetIo @ 0x1C003B0F4 (RaUnitStartResetIo.c)
 *     RaidUnitAbortSrb @ 0x1C003C4E8 (RaidUnitAbortSrb.c)
 *     RaWmiDispatchIrp @ 0x1C0061824 (RaWmiDispatchIrp.c)
 * Callees:
 *     RaUnitCheckRemoveState @ 0x1C00054B4 (RaUnitCheckRemoveState.c)
 */

__int64 __fastcall RaUnitAcquireRemoveLock(__int64 a1)
{
  int v1; // ebx
  struct _KEVENT *v2; // r10

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 648));
  v1 = RaUnitCheckRemoveState();
  if ( v1 < 0 && _InterlockedExchangeAdd(&v2[27].Header.Lock, 0xFFFFFFFF) == 1 )
    KeSetEvent(v2 + 7, 0, 0);
  return (unsigned int)v1;
}
