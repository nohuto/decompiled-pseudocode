/*
 * XREFs of RaidUnitIoCoalescingCallback @ 0x1C0038170
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0037E40 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitMaintenanceTime @ 0x1C00381FC (RaidUnitMaintenanceTime.c)
 */

void __fastcall RaidUnitIoCoalescingCallback(int a1, __int64 a2, __int64 a3)
{
  BOOLEAN v5; // al
  int v6; // edx
  __int64 v7; // r8

  v5 = RaidUnitCheckAndAcquirePoFx(a3);
  v6 = 0;
  if ( v5 )
  {
    if ( (unsigned int)(a1 - 1) <= 1 )
    {
      v7 = *(_QWORD *)(a3 + 1488);
      LOBYTE(v6) = a1 == 1;
      if ( ((*(_DWORD *)(v7 + 32) >> 8) & 1) != v6 )
      {
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 32) & 0xFFFFFEFF | (v6 << 8);
        if ( (*(_DWORD *)(*(_QWORD *)(a3 + 1488) + 32LL) & 0x80u) != 0 )
        {
          RaidUnitMaintenanceTime(a3);
          RaidUnitAdaptiveIdleTimeout(a3);
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 1480));
  }
}
