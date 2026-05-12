/*
 * XREFs of RaidUnitPoFxIdleComponent @ 0x1C0006468
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C00063D0 (RaUnitScsiMiniportIoctl.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C000EE14 (StorPortUnitPoFxD0Completion.c)
 *     RaidPnPPassToMiniPort @ 0x1C0011C6C (RaidPnPPassToMiniPort.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0015D30 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002BBD8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C0035A00 (RaidUnitEndMaintenanceTime.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C0037554 (StorPortUnitPowerRequiredStep2.c)
 *     RaidUnitEndDeviceBusy @ 0x1C003CA6C (RaidUnitEndDeviceBusy.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1C003D324 (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C005EA94 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C0060A04 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0026B14 (RaidAdapterPoFxIdleComponent.c)
 */

bool __fastcall RaidUnitPoFxIdleComponent(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rbp
  char v5; // r15
  bool v6; // di
  bool v10; // bl
  __int64 v11; // rax
  char v13; // cl

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = 0;
  v10 = 1;
  if ( !a4 || (v10 = (*a4 & 2) != 0, (*a4 & 1) != 0) )
  {
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
    {
      v11 = *(_QWORD *)(a1 + 1488);
      if ( *(_QWORD *)(v11 + 112) )
      {
        _InterlockedDecrement64((volatile signed __int64 *)(v11 + 112));
        PoFxIdleComponent(**(_QWORD **)(a1 + 1488), a2, a3);
        v5 = 1;
        v6 = (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 2) == 0;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
    }
  }
  if ( v10 )
  {
    if ( *(_QWORD *)(v4 + 5088) )
    {
      v13 = RaidAdapterPoFxIdleComponent(v4, 0LL, a3);
      if ( !v5 )
        return v13;
    }
  }
  return v6;
}
