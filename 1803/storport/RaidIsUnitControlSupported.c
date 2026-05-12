/*
 * XREFs of RaidIsUnitControlSupported @ 0x1C0006A0C
 * Callers:
 *     StorPortUnitIdleCondition @ 0x1C0006790 (StorPortUnitIdleCondition.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C0006880 (StorPortUnitActiveConditionStep1.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000E75C (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C000EBF8 (RaidUnitSendPowerToMiniport.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000FB38 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0012FEC (RaidBusEnumeratorVisitUnit.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0015D30 (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001784C (RaUnitDeleteDeviceIrp.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C0035E7C (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C0035F08 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C0035FA0 (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C0036088 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitIdleState @ 0x1C0036BB0 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C00370A0 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00373F0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitAdapterRemove @ 0x1C003A220 (RaUnitAdapterRemove.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005FBD8 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C005FD60 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C006013C (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaCallMiniportUnitControl @ 0x1C0014B5C (RaCallMiniportUnitControl.c)
 */

char __fastcall RaidIsUnitControlSupported(__int64 a1, int a2)
{
  char v2; // di
  __int64 v3; // rbx
  __int64 v4; // rsi

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24) + 296LL;
  v4 = a2;
  if ( **(_DWORD **)(*(_QWORD *)(a1 + 24) + 528LL) == 208 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 544LL) & 8) == 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 548LL) = 0LL;
      *(_QWORD *)(v3 + 260) = 0LL;
      *(_DWORD *)(v3 + 252) = 12;
      if ( (int)RaCallMiniportUnitControl(v3, 0LL) < 0 )
        return v2;
      *(_BYTE *)(v3 + 248) |= 8u;
    }
    return *(_BYTE *)(v4 + v3 + 256);
  }
  return v2;
}
