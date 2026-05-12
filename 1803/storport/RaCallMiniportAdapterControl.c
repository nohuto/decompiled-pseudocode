/*
 * XREFs of RaCallMiniportAdapterControl @ 0x1C000EDD4
 * Callers:
 *     RaidAdapterStopAdapter @ 0x1C000ECCC (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C000ED54 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterRescanBus @ 0x1C0012B98 (RaidAdapterRescanBus.c)
 *     RaidIsAdapterControlSupported @ 0x1C0014F3C (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C0028110 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0028C7C (RaidAdapterStartDeviceIrp.c)
 *     RaidCoalescingCallback @ 0x1C00296C0 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C002B730 (RaidPowerSettingCallback.c)
 *     RaidAdapterPerfStateCallback @ 0x1C0034C70 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C0034D44 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C0034DD8 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0034E68 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0034EEC (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0034F80 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x1C0036760 (StorPortAdapterPowerControl.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0060F20 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0063900 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C006498C (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportAdapterControl(__int64 a1)
{
  unsigned int (__fastcall *v1)(__int64); // rax

  v1 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 120LL);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 240) + 16LL) != 0 ? 0xC0000001 : 0;
  else
    return 3221225659LL;
}
