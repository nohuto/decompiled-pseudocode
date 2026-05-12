/*
 * XREFs of StorPortUnitPowerNotRequiredStep1 @ 0x1C00370A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C0006A0C (RaidIsUnitControlSupported.c)
 *     McTemplateK0pqccctq @ 0x1C0033FFC (McTemplateK0pqccctq.c)
 *     RaidUnitReenablePendingTimer @ 0x1C0035DA4 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C0036088 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C0037184 (StorPortUnitPowerNotRequiredStep2.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep1(__int64 Context)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // [rsp+20h] [rbp-38h]
  char v6; // [rsp+28h] [rbp-30h]
  char v7; // [rsp+30h] [rbp-28h]
  char v8; // [rsp+38h] [rbp-20h]

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    {
      v4 = *(_QWORD *)(Context + 24);
      v8 = *(_BYTE *)(Context + 90);
      v7 = *(_BYTE *)(Context + 89);
      v6 = *(_BYTE *)(Context + 88);
      v5 = *(_DWORD *)(v4 + 56);
      McTemplateK0pqccctq(v4, v2, v3, **(_QWORD **)(Context + 1488), v5, v6, v7, v8);
    }
    RaidUnitReenablePendingTimer(Context, 0);
    *(_DWORD *)(*(_QWORD *)(Context + 1488) + 32LL) &= ~8u;
    *(_DWORD *)(Context + 584) = 0;
    if ( *(_DWORD *)(Context + 688) && (*(_BYTE *)(Context + 153) & 0x40) != 0 )
      *(_BYTE *)(Context + 1478) = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 1488) + 32LL) & 4) != 0 )
    {
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context);
    }
    StorPortUnitPowerNotRequiredStep2((PVOID)Context);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1480));
  }
}
