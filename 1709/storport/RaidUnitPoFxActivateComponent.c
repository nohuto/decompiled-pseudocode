/*
 * XREFs of RaidUnitPoFxActivateComponent @ 0x1C0004FF0
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0005308 (RaUnitScsiMiniportIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C0013B8C (RaidPnPPassToMiniPort.c)
 *     RaidUnitStartDeviceBusy @ 0x1C0032834 (RaidUnitStartDeviceBusy.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0033174 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitMaintenanceTime @ 0x1C00381FC (RaidUnitMaintenanceTime.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0039140 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     RaidUnitPoFxActivateComponentFromIoctl @ 0x1C003ECD4 (RaidUnitPoFxActivateComponentFromIoctl.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0061894 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C0063F38 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001E740 (RaidAdapterPoFxActivateComponent.c)
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
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1488) + 88LL));
    if ( *(char *)(v4 + 108) < 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1784));
      if ( (*(_BYTE *)(v4 + 109) & 1) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1792));
    }
    v11 = *(_QWORD *)(a1 + 1488);
    if ( (*(_DWORD *)(v11 + 140) & 1) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 136));
    PoFxActivateComponent(**(_QWORD **)(a1 + 1488), a2, a3);
    v9 = (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 2) != 0;
    if ( a4 )
      *a4 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
  return v9;
}
