/*
 * XREFs of RaidUnitEndMaintenanceTime @ 0x1C0038050
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00053A0 (RaidUnitPoFxIdleComponent.c)
 *     McTemplateK0qccctq @ 0x1C003701C (McTemplateK0qccctq.c)
 *     RaidUnitMaintenanceTime @ 0x1C00381FC (RaidUnitMaintenanceTime.c)
 */

void __fastcall RaidUnitEndMaintenanceTime(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx

  if ( a2 && RaidUnitCheckAndAcquirePoFx(a2) )
  {
    v4 = *(_QWORD *)(a2 + 1488);
    if ( (*(_DWORD *)(v4 + 140) & 1) != 0 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        McTemplateK0qccctq(
          *(_DWORD *)(v4 + 136) == 0,
          *(_QWORD *)(a2 + 24),
          v3,
          *(_DWORD *)(*(_QWORD *)(a2 + 24) + 56LL),
          *(_BYTE *)(a2 + 88),
          *(_BYTE *)(a2 + 89),
          *(_BYTE *)(a2 + 90),
          *(_DWORD *)(v4 + 136) == 0,
          *(_DWORD *)(v4 + 136));
      *(_DWORD *)(*(_QWORD *)(a2 + 1488) + 140LL) &= ~1u;
      RaidUnitPoFxIdleComponent(a2, 0, 0, 0LL);
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 1488) + 136LL) )
        RaidUnitMaintenanceTime(a2);
      else
        *(_QWORD *)(*(_QWORD *)(a2 + 1488) + 128LL) = MEMORY[0xFFFFF78000000014];
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 1480));
  }
}
