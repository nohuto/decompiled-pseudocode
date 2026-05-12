/*
 * XREFs of RaidUnitEndMaintenanceTime @ 0x1C0036350
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0004BA0 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitMaintenanceTime @ 0x1C00364CC (RaidUnitMaintenanceTime.c)
 *     Template_qccctq @ 0x1C00383F4 (Template_qccctq.c)
 */

void __fastcall RaidUnitEndMaintenanceTime(__int64 a1, __int64 a2)
{
  int v3; // r8d
  __int64 v4; // rcx

  if ( a2 && RaidUnitCheckAndAcquirePoFx(a2) )
  {
    v4 = *(_QWORD *)(a2 + 1456);
    if ( (*(_DWORD *)(v4 + 148) & 1) != 0 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        Template_qccctq(
          *(_DWORD *)(v4 + 144) == 0,
          *(_QWORD *)(a2 + 24),
          v3,
          *(_DWORD *)(*(_QWORD *)(a2 + 24) + 56LL),
          *(_BYTE *)(a2 + 88),
          *(_BYTE *)(a2 + 89),
          *(_BYTE *)(a2 + 90),
          *(_DWORD *)(v4 + 144) == 0,
          *(_DWORD *)(v4 + 144));
      *(_DWORD *)(*(_QWORD *)(a2 + 1456) + 148LL) &= ~1u;
      RaidUnitPoFxIdleComponent(a2, 0, 0, 0LL);
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 1456) + 144LL) )
        RaidUnitMaintenanceTime(a2);
      else
        *(_QWORD *)(*(_QWORD *)(a2 + 1456) + 136LL) = MEMORY[0xFFFFF78000000014];
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 1448));
  }
}
