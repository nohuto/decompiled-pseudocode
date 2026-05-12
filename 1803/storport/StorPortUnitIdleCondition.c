/*
 * XREFs of StorPortUnitIdleCondition @ 0x1C0006790
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0006648 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C0006A0C (RaidIsUnitControlSupported.c)
 *     McTemplateK0pqcccq @ 0x1C0033F48 (McTemplateK0pqcccq.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C0035E7C (RaidUnitSendPoFxActiveToMiniport.c)
 */

void __fastcall StorPortUnitIdleCondition(__int64 a1, unsigned int a2)
{
  int v4; // r8d
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rdx

  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      McTemplateK0pqcccq(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitIdleConditionStart,
        v4,
        **(_QWORD **)(a1 + 1488),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a2);
    *(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) &= ~2u;
    v5 = *(_QWORD *)(a1 + 1488);
    if ( (*(_DWORD *)(v5 + 32) & 0x80u) != 0 )
    {
      RaidUnitAdaptiveIdleTimeout(a1);
      *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 72LL) = MEMORY[0xFFFFF78000000014];
      v5 = *(_QWORD *)(a1 + 1488);
    }
    if ( !*(_BYTE *)(a1 + 439) )
      *(_BYTE *)(a1 + 439) = 1;
    if ( (*(_DWORD *)(v5 + 32) & 4) != 0 && (unsigned __int8)RaidIsUnitControlSupported(a1, 6LL) )
      RaidUnitSendPoFxActiveToMiniport(a1, v7, 0LL);
    PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 1488), a2);
    if ( StorEtwLoggingEnabled )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        McTemplateK0pqcccq(
          *(_QWORD *)(a1 + 24),
          (unsigned int)&EventUnitIdleConditionStop,
          v6,
          **(_QWORD **)(a1 + 1488),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 88),
          *(_BYTE *)(a1 + 89),
          *(_BYTE *)(a1 + 90),
          a2);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
}
