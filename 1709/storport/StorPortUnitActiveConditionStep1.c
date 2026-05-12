/*
 * XREFs of StorPortUnitActiveConditionStep1 @ 0x1C00050D0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortUnitActiveConditionStep2 @ 0x1C000513C (StorPortUnitActiveConditionStep2.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C001666C (RaidIsUnitControlSupported.c)
 *     McTemplateK0pqcccq @ 0x1C0036608 (McTemplateK0pqcccq.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C0038534 (RaidUnitSendPoFxActiveToMiniport.c)
 */

void __fastcall StorPortUnitActiveConditionStep1(__int64 a1, unsigned int a2)
{
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      McTemplateK0pqcccq(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitActiveConditionStart,
        v4,
        **(_QWORD **)(a1 + 1488),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a2);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 4) != 0 )
    {
      if ( (unsigned __int8)RaidIsUnitControlSupported(a1, 6LL) )
      {
        LOBYTE(v6) = 1;
        RaidUnitSendPoFxActiveToMiniport(a1, v5, v6);
      }
    }
    StorPortUnitActiveConditionStep2(a1, a2);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
}
