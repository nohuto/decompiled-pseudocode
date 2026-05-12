/*
 * XREFs of RaCallMiniportAdapterControl @ 0x1C00124FC
 * Callers:
 *     RaidAdapterRestartAdapter @ 0x1C0011A08 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopAdapter @ 0x1C0012070 (RaidAdapterStopAdapter.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0012174 (RaidAdapterStartDeviceIrp.c)
 *     RaidIsAdapterControlSupported @ 0x1C0012E88 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRescanBus @ 0x1C0012EF4 (RaidAdapterRescanBus.c)
 *     RaidPowerSettingCallback @ 0x1C001C2D0 (RaidPowerSettingCallback.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001CF68 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C001DE68 (RaidAdapterSendPowerToMiniport.c)
 *     RaidCoalescingCallback @ 0x1C002EA20 (RaidCoalescingCallback.c)
 *     RaidAdapterPerfStateCallback @ 0x1C0035AD0 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C0035BA4 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0035C30 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0035CB0 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x1C0036DD0 (StorPortAdapterPowerControl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C005DD1C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C005E4FC (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00644E4 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
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
