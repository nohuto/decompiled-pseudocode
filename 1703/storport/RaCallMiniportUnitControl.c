/*
 * XREFs of RaCallMiniportUnitControl @ 0x1C0016E8C
 * Callers:
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C000E198 (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0014154 (RaidBusEnumeratorVisitUnit.c)
 *     RaidIsUnitControlSupported @ 0x1C0016E04 (RaidIsUnitControlSupported.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017C80 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C00355B8 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C0036744 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C00367DC (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C00368C8 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0036954 (RaidUnitSendPowerToMiniport.c)
 *     RaUnitAdapterRemove @ 0x1C0039C30 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003A164 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005E704 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStartDeviceIrp @ 0x1C005ED90 (RaUnitStartDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006566C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
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
