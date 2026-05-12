/*
 * XREFs of RaidUnitIoCoalescingCallback @ 0x1C0036440
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0036190 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitMaintenanceTime @ 0x1C00364CC (RaidUnitMaintenanceTime.c)
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
      v7 = *(_QWORD *)(a3 + 1456);
      LOBYTE(v6) = a1 == 1;
      if ( ((*(_DWORD *)(v7 + 32) >> 8) & 1) != v6 )
      {
        *(_DWORD *)(v7 + 32) = (v6 << 8) | *(_DWORD *)(v7 + 32) & 0xFFFFFEFF;
        if ( (*(_DWORD *)(*(_QWORD *)(a3 + 1456) + 32LL) & 0x80u) != 0 )
        {
          RaidUnitMaintenanceTime(a3);
          RaidUnitAdaptiveIdleTimeout(a3);
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 1448));
  }
}
