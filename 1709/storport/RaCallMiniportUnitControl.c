/*
 * XREFs of RaCallMiniportUnitControl @ 0x1C00166F4
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x1C001452C (RaidBusEnumeratorVisitUnit.c)
 *     RaidIsUnitControlSupported @ 0x1C001666C (RaidIsUnitControlSupported.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017E0C (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0037270 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C0038534 (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C00385C4 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C003865C (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C0038748 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C00387D4 (RaidUnitSendPowerToMiniport.c)
 *     RaUnitAdapterRemove @ 0x1C003B980 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003BEB4 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0060A88 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStartDeviceIrp @ 0x1C006110C (RaUnitStartDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0068D2C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportUnitControl(__int64 a1)
{
  unsigned int (__fastcall *v1)(__int64); // rax

  v1 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 200LL);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 240) + 16LL) != 0 ? 0xC0000001 : 0;
  else
    return 3221225659LL;
}
