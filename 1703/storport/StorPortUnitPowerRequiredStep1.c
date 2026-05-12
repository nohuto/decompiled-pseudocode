/*
 * XREFs of StorPortUnitPowerRequiredStep1 @ 0x1C0037690
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitReenablePendingTimer @ 0x1C000E0CC (RaidUnitReenablePendingTimer.c)
 *     RaidIsUnitControlSupported @ 0x1C0016E04 (RaidIsUnitControlSupported.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C00368C8 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C00377F4 (StorPortUnitPowerRequiredStep2.c)
 *     Template_pqccctx @ 0x1C0037D24 (Template_pqccctx.c)
 */

void __fastcall StorPortUnitPowerRequiredStep1(__int64 Context)
{
  unsigned __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // rcx
  int v5; // eax

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( *(_QWORD *)(Context + 1736) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(Context + 1456) + 32LL) & 0x20) != 0
        || *(char *)(*(_QWORD *)(Context + 24) + 108LL) < 0 )
      {
        v2 = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 1736)) / 0x2710uLL;
        *(_QWORD *)(Context + 1744) += v2;
        if ( v2 >= 0x2710 )
          ++*(_DWORD *)(Context + 1784);
        if ( !*(_QWORD *)(Context + 1712) )
          *(_QWORD *)(Context + 1712) = *(_QWORD *)(*(_QWORD *)(Context + 24) + 5336LL);
      }
      *(_QWORD *)(Context + 1736) = 0LL;
    }
    ++*(_DWORD *)(Context + 1776);
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      Template_pqccctx(
        *(_QWORD *)(Context + 24),
        v2,
        v3,
        **(_QWORD **)(Context + 1456),
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 88),
        *(_BYTE *)(Context + 89),
        *(_BYTE *)(Context + 90));
    RaidUnitReenablePendingTimer(Context, 0);
    *(_DWORD *)(*(_QWORD *)(Context + 1456) + 32LL) |= 8u;
    v4 = *(_QWORD *)(Context + 1456);
    v5 = *(_DWORD *)(v4 + 32);
    if ( (v5 & 0x10) != 0 )
      *(_DWORD *)(v4 + 32) = v5 & 0xFFFFFFEF;
    else
      *(_DWORD *)(Context + 552) = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 1456) + 32LL) & 4) != 0 )
    {
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context);
    }
    StorPortUnitPowerRequiredStep2((PVOID)Context);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1448));
  }
}
