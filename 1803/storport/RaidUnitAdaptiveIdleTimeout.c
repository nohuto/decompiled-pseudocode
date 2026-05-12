/*
 * XREFs of RaidUnitAdaptiveIdleTimeout @ 0x1C0006648
 * Callers:
 *     StorPortUnitIdleCondition @ 0x1C0006790 (StorPortUnitIdleCondition.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0035AF0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerCycleCheck @ 0x1C0035CD0 (RaidUnitPowerCycleCheck.c)
 *     RaidUnitPowerSettingCallback @ 0x1C0035CF0 (RaidUnitPowerSettingCallback.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005FBD8 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C0006714 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C0006760 (RaidUnitGetMinimumPowerCyclePeriod.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0qcccqqq @ 0x1C00345B0 (McTemplateK0qcccqqq.c)
 */

void __fastcall RaidUnitAdaptiveIdleTimeout(__int64 a1)
{
  unsigned int MinimumPowerCyclePeriod; // eax
  __int64 v3; // rdx
  int v4; // r8d
  __int64 v5; // rcx
  unsigned __int8 v6; // r15
  unsigned __int64 v7; // rbp
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // r14
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx

  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 0x80u) != 0 )
    {
      MinimumPowerCyclePeriod = RaidUnitGetMinimumPowerCyclePeriod(a1);
      v5 = *(_QWORD *)(v3 + 136);
      v6 = 0;
      v7 = MinimumPowerCyclePeriod;
      if ( v5 )
      {
        ExCancelTimer(v5, 0LL);
        v3 = *(_QWORD *)(a1 + 1488);
      }
      v8 = v7;
      if ( (unsigned int)v7 <= *(_DWORD *)(v3 + 20) )
        v8 = *(_DWORD *)(v3 + 20);
      v9 = v8;
      if ( (*(_DWORD *)(v3 + 32) & 0x200) != 0 )
      {
        ++*(_QWORD *)(v3 + 64);
        v10 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 2616);
        if ( v10 > 0 )
        {
          v11 = v10 / 10000;
          v12 = v10 / 10000 / v7;
          if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
          {
            v13 = *(_DWORD *)(a1 + 2608);
            LOBYTE(v13) = *(_BYTE *)(a1 + 90);
            McTemplateK0qcccqqq(
              v13,
              *(_QWORD *)(a1 + 24),
              v4,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 88),
              *(_BYTE *)(a1 + 89),
              v13,
              *(_DWORD *)(a1 + 2608),
              v12,
              v7);
          }
          if ( v12 <= *(unsigned int *)(a1 + 2608) )
          {
            v6 = 1;
            ++*(_QWORD *)(*(_QWORD *)(a1 + 1488) + 56LL);
            v14 = *(_QWORD *)(a1 + 1488);
            v15 = 10000 * (v11 - v7 * (*(unsigned int *)(a1 + 2608) + 1LL));
            if ( !*(_QWORD *)(v14 + 136) )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 136LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, a1, 0LL, v9);
              v14 = *(_QWORD *)(a1 + 1488);
            }
            v16 = *(_QWORD *)(v14 + 136);
            LODWORD(v9) = v8;
            if ( v16 )
            {
              ExSetTimer(v16, v15, 0LL, 0LL);
              LODWORD(v9) = v8;
            }
          }
          else
          {
            LODWORD(v9) = 100;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 0xFFFFFEFF | (v6 << 8);
      RaidUnitPoFxSetDeviceIdleTimeout(a1, (unsigned int)v9);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
}
