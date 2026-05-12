/*
 * XREFs of StorPortUnitPowerRequiredStep1 @ 0x1C00373F0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C0006A0C (RaidIsUnitControlSupported.c)
 *     McTemplateK0pqccctx @ 0x1C00340C4 (McTemplateK0pqccctx.c)
 *     RaidUnitReenablePendingTimer @ 0x1C0035DA4 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C0036088 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C0037554 (StorPortUnitPowerRequiredStep2.c)
 */

void __fastcall StorPortUnitPowerRequiredStep1(__int64 Context)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // ecx
  int v7; // [rsp+20h] [rbp-38h]
  char v8; // [rsp+28h] [rbp-30h]
  char v9; // [rsp+30h] [rbp-28h]
  char v10; // [rsp+38h] [rbp-20h]

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( *(_QWORD *)(Context + 1768) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(Context + 1488) + 32LL) & 0x20) != 0
        || *(char *)(*(_QWORD *)(Context + 24) + 108LL) < 0 )
      {
        v2 = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 1768)) / 0x2710uLL;
        *(_QWORD *)(Context + 1776) += v2;
        if ( v2 >= 0x2710 )
          ++*(_DWORD *)(Context + 1816);
        if ( !*(_QWORD *)(Context + 1744) )
          *(_QWORD *)(Context + 1744) = *(_QWORD *)(*(_QWORD *)(Context + 24) + 5336LL);
      }
      *(_QWORD *)(Context + 1768) = 0LL;
    }
    ++*(_DWORD *)(Context + 1808);
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    {
      v4 = *(_QWORD *)(Context + 24);
      v10 = *(_BYTE *)(Context + 90);
      v9 = *(_BYTE *)(Context + 89);
      v8 = *(_BYTE *)(Context + 88);
      v7 = *(_DWORD *)(v4 + 56);
      McTemplateK0pqccctx(v4, v2, v3, **(_QWORD **)(Context + 1488), v7, v8, v9, v10);
    }
    RaidUnitReenablePendingTimer(Context, 0);
    *(_DWORD *)(*(_QWORD *)(Context + 1488) + 32LL) |= 8u;
    v5 = *(_QWORD *)(Context + 1488);
    v6 = *(_DWORD *)(v5 + 32);
    if ( (v6 & 0x10) != 0 )
    {
      *(_DWORD *)(v5 + 32) = v6 & 0xFFFFFFEF;
      v5 = *(_QWORD *)(Context + 1488);
    }
    else
    {
      *(_DWORD *)(Context + 584) = 1;
    }
    if ( (*(_DWORD *)(v5 + 32) & 4) != 0 )
    {
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context);
    }
    StorPortUnitPowerRequiredStep2((PVOID)Context);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1480));
  }
}
