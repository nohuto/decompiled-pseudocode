/*
 * XREFs of RaidUnitPoFxActivateComponent @ 0x1C0004738
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0004B08 (RaUnitScsiMiniportIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001AFBC (RaidPnPPassToMiniPort.c)
 *     RaidUnitStartDeviceBusy @ 0x1C0031BF4 (RaidUnitStartDeviceBusy.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C003209C (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitMaintenanceTime @ 0x1C00364CC (RaidUnitMaintenanceTime.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0037280 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     RaidUnitPoFxActivateComponentFromIoctl @ 0x1C003DE10 (RaidUnitPoFxActivateComponentFromIoctl.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0060E30 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C0061B64 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001D930 (RaidAdapterPoFxActivateComponent.c)
 */

char __fastcall RaidUnitPoFxActivateComponent(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rbp
  char v9; // si
  __int64 v11; // rcx

  v4 = *(_QWORD *)(a1 + 24);
  v9 = 1;
  if ( a4 )
    *a4 &= 0xFCu;
  if ( *(_QWORD *)(v4 + 5088) )
  {
    v9 = RaidAdapterPoFxActivateComponent(v4, 0LL);
    if ( a4 )
      *a4 |= 2u;
  }
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1456) + 96LL));
    if ( *(_BYTE *)(v4 + 108) >= 0x80u )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1752));
      if ( (*(_BYTE *)(v4 + 109) & 1) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1760));
    }
    v11 = *(_QWORD *)(a1 + 1456);
    if ( (*(_DWORD *)(v11 + 148) & 1) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 144));
    PoFxActivateComponent(**(_QWORD **)(a1 + 1456), a2, a3);
    v9 = (*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL) & 2) != 0;
    if ( a4 )
      *a4 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
  return v9;
}
