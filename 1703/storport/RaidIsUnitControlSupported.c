/*
 * XREFs of RaidIsUnitControlSupported @ 0x1C0016E04
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C0004820 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleCondition @ 0x1C0004970 (StorPortUnitIdleCondition.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C000E198 (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000E778 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0014154 (RaidBusEnumeratorVisitUnit.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017C80 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C00355B8 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C0036744 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C00367DC (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C00368C8 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0036954 (RaidUnitSendPowerToMiniport.c)
 *     StorPortUnitIdleState @ 0x1C0036EB0 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0037350 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C0037690 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitAdapterRemove @ 0x1C0039C30 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003A164 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005E704 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStartDeviceIrp @ 0x1C005ED90 (RaUnitStartDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006566C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportUnitControl @ 0x1C0016E8C (RaCallMiniportUnitControl.c)
 */

char __fastcall RaidIsUnitControlSupported(__int64 a1, int a2)
{
  char v2; // di
  __int64 v3; // rbx
  __int64 v4; // rsi
  _QWORD *v5; // r8

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24) + 296LL;
  v4 = a2;
  if ( **(_DWORD **)(*(_QWORD *)(a1 + 24) + 528LL) == 208 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 544LL) & 8) == 0 )
    {
      v5 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 548LL);
      *v5 = 0LL;
      *(_QWORD *)(v3 + 260) = 0LL;
      *(_DWORD *)(v3 + 252) = 12;
      if ( (int)RaCallMiniportUnitControl(v3, 0LL, v5) < 0 )
        return v2;
      *(_BYTE *)(v3 + 248) |= 8u;
    }
    return *(_BYTE *)(v4 + v3 + 256);
  }
  return v2;
}
