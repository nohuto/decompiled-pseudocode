/*
 * XREFs of RaidUnitAdaptiveIdleTimeout @ 0x1C0036190
 * Callers:
 *     StorPortUnitIdleCondition @ 0x1C0004970 (StorPortUnitIdleCondition.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0036440 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerCycleCheck @ 0x1C0036630 (RaidUnitPowerCycleCheck.c)
 *     RaidUnitPowerSettingCallback @ 0x1C0036640 (RaidUnitPowerSettingCallback.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005E704 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C000E238 (RaidUnitGetMinimumPowerCyclePeriod.c)
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C000FC34 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     Template_qcccqqq @ 0x1C003823C (Template_qcccqqq.c)
 */

void __fastcall RaidUnitAdaptiveIdleTimeout(__int64 a1)
{
  unsigned int MinimumPowerCyclePeriod; // eax
  int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL) & 0x80u) != 0 )
    {
      MinimumPowerCyclePeriod = RaidUnitGetMinimumPowerCyclePeriod(a1);
      v5 = *(_QWORD *)(v4 + 120);
      v6 = MinimumPowerCyclePeriod;
      if ( v5 )
        ExCancelTimer(v5, 0LL);
      v7 = *(_QWORD *)(a1 + 1456);
      v8 = *(_DWORD *)(v7 + 20);
      if ( (unsigned int)v6 > v8 )
        v8 = v6;
      if ( (*(_DWORD *)(v7 + 32) & 0x100) != 0 )
      {
        v9 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 2568);
        if ( v9 > 0 )
        {
          v10 = v9 / 10000;
          v11 = v9 / 10000 / v6;
          if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
          {
            v12 = *(_DWORD *)(a1 + 2560);
            LOBYTE(v12) = *(_BYTE *)(a1 + 90);
            Template_qcccqqq(
              v12,
              *(_QWORD *)(a1 + 24),
              v3,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 88),
              *(_BYTE *)(a1 + 89),
              v12,
              *(_DWORD *)(a1 + 2560),
              v11,
              v6);
          }
          v13 = *(unsigned int *)(a1 + 2560);
          if ( v11 <= v13 )
          {
            v14 = 10000 * (v10 - v6 * (v13 + 1));
            if ( !*(_QWORD *)(*(_QWORD *)(a1 + 1456) + 120LL) )
              *(_QWORD *)(*(_QWORD *)(a1 + 1456) + 120LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, a1, 0LL);
            v15 = *(_QWORD *)(*(_QWORD *)(a1 + 1456) + 120LL);
            if ( v15 )
              ExSetTimer(v15, v14, 0LL, 0LL);
          }
          else
          {
            v8 = 100;
          }
        }
      }
      RaidUnitPoFxSetDeviceIdleTimeout(a1, v8);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
}
