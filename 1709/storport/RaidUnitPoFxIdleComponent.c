/*
 * XREFs of RaidUnitPoFxIdleComponent @ 0x1C00053A0
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0005308 (RaUnitScsiMiniportIoctl.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C000ED30 (StorPortUnitPoFxD0Completion.c)
 *     RaidPnPPassToMiniPort @ 0x1C0013B8C (RaidPnPPassToMiniPort.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00306D8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0037270 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C0038050 (RaidUnitEndMaintenanceTime.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C00396E4 (StorPortUnitPowerRequiredStep2.c)
 *     RaidUnitEndDeviceBusy @ 0x1C003E48C (RaidUnitEndDeviceBusy.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1C003ED3C (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0061894 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C0063F38 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001E788 (RaidAdapterPoFxIdleComponent.c)
 */

bool __fastcall RaidUnitPoFxIdleComponent(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rbp
  char v5; // r15
  bool v6; // di
  bool v10; // bl
  __int64 v12; // rax
  char v13; // cl

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = 0;
  v10 = 1;
  if ( !a4 || (v10 = (*a4 & 2) != 0, (*a4 & 1) != 0) )
  {
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      v12 = *(_QWORD *)(a1 + 1488);
      if ( *(_QWORD *)(v12 + 88) )
      {
        _InterlockedDecrement64((volatile signed __int64 *)(v12 + 88));
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
