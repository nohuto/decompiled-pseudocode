/*
 * XREFs of RaidUnitAdaptiveIdleTimeout @ 0x1C0037E40
 * Callers:
 *     StorPortUnitIdleCondition @ 0x1C0005220 (StorPortUnitIdleCondition.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0038170 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerCycleCheck @ 0x1C0038350 (RaidUnitPowerCycleCheck.c)
 *     RaidUnitPowerSettingCallback @ 0x1C0038370 (RaidUnitPowerSettingCallback.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0060A88 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C000FC40 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     McTemplateK0qcccqqq @ 0x1C0036E74 (McTemplateK0qcccqqq.c)
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C0038138 (RaidUnitGetMinimumPowerCyclePeriod.c)
 */

void __fastcall RaidUnitAdaptiveIdleTimeout(__int64 a1)
{
  unsigned int MinimumPowerCyclePeriod; // eax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 0x80u) != 0 )
    {
      MinimumPowerCyclePeriod = RaidUnitGetMinimumPowerCyclePeriod(a1);
      v5 = *(_QWORD *)(v4 + 112);
      v6 = MinimumPowerCyclePeriod;
      if ( v5 )
        ExCancelTimer(v5, 0LL);
      v7 = *(_QWORD *)(a1 + 1488);
      v8 = *(_DWORD *)(v7 + 20);
      if ( (unsigned int)v6 > v8 )
        v8 = v6;
      if ( (*(_DWORD *)(v7 + 32) & 0x100) != 0 )
      {
        v9 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 2616);
        if ( v9 > 0 )
        {
          v10 = v9 / 10000;
          v11 = v9 / 10000 / v6;
          if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
          {
            v12 = *(unsigned int *)(a1 + 2608);
            LOBYTE(v12) = *(_BYTE *)(a1 + 90);
            McTemplateK0qcccqqq(
              v12,
              *(_QWORD *)(a1 + 24),
              v3,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 88),
              *(_BYTE *)(a1 + 89),
              v12,
              *(_DWORD *)(a1 + 2608),
              v11,
              v6);
          }
          v13 = *(unsigned int *)(a1 + 2608);
          if ( v11 <= v13 )
          {
            v14 = 10000 * (v10 - v6 * (v13 + 1));
            if ( !*(_QWORD *)(*(_QWORD *)(a1 + 1488) + 112LL) )
              *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 112LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, a1, 0LL);
            v15 = *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 112LL);
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
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
}
