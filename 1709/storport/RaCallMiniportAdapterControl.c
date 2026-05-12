/*
 * XREFs of RaCallMiniportAdapterControl @ 0x1C0011DF0
 * Callers:
 *     RaidAdapterRestartAdapter @ 0x1C0010708 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0010F4C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterStopAdapter @ 0x1C0011C4C (RaidAdapterStopAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x1C00127FC (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRescanBus @ 0x1C0012868 (RaidAdapterRescanBus.c)
 *     RaidPowerSettingCallback @ 0x1C001CC90 (RaidPowerSettingCallback.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001DE88 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C001E9A0 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002EA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidCoalescingCallback @ 0x1C002F760 (RaidCoalescingCallback.c)
 *     RaidAdapterPerfStateCallback @ 0x1C0037780 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C0037854 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C00378E0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C0037960 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x1C0038C70 (StorPortAdapterPowerControl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C006006C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C006091C (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0067A28 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
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
