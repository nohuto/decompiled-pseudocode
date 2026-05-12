/*
 * XREFs of RaidUnitMaintenanceTime @ 0x1C00381FC
 * Callers:
 *     RaidUnitEndMaintenanceTime @ 0x1C0038050 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0038170 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerSettingCallback @ 0x1C0038370 (RaidUnitPowerSettingCallback.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0004FF0 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0qccc @ 0x1C0036C04 (McTemplateK0qccc.c)
 */

void __fastcall RaidUnitMaintenanceTime(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v3 = *(_QWORD *)(a1 + 1488);
    v4 = *(_DWORD *)(v3 + 32);
    if ( (v4 & 0x80u) != 0
      && (v4 & 0x100) != 0
      && (v4 & 0x200) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(v3 + 140), 0) )
    {
      v5 = *(_QWORD *)(a1 + 1488);
      if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v5 + 128)) <= 864000000000LL )
      {
        *(_DWORD *)(v5 + 140) &= ~1u;
      }
      else
      {
        if ( !*(_QWORD *)(v5 + 120) )
          *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 120LL) = ExAllocateTimer(RaidUnitEndMaintenanceTime, a1, 0LL);
        v6 = *(_QWORD *)(a1 + 1488);
        if ( *(_QWORD *)(v6 + 120) )
        {
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
            McTemplateK0qccc(
              *(_QWORD *)(a1 + 24),
              &EventUnitMaintenanceTimeStart,
              v2,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 88),
              *(_BYTE *)(a1 + 89),
              *(_BYTE *)(a1 + 90));
          RaidUnitPoFxActivateComponent(a1, 0, 2u, 0LL);
          *(_DWORD *)(*(_QWORD *)(a1 + 1488) + 136LL) = 0;
          ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 1488) + 120LL), -600000000LL, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v6 + 140) &= ~1u;
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
}
