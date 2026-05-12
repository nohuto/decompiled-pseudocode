/*
 * XREFs of RaidUnitMaintenanceTime @ 0x1C0035B7C
 * Callers:
 *     RaidUnitEndMaintenanceTime @ 0x1C0035A00 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0035AF0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerSettingCallback @ 0x1C0035CF0 (RaidUnitPowerSettingCallback.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0006534 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0qccc @ 0x1C0034340 (McTemplateK0qccc.c)
 */

void __fastcall RaidUnitMaintenanceTime(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v4 = *(_QWORD *)(a1 + 1488);
    v5 = *(_DWORD *)(v4 + 32);
    if ( (v5 & 0x80u) != 0
      && (v5 & 0x200) != 0
      && (v5 & 0x400) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(v4 + 164), 0) )
    {
      v6 = *(_QWORD *)(a1 + 1488);
      if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v6 + 152)) > 864000000000LL
        && (*(_QWORD *)(v6 + 144)
         || (*(_QWORD *)(*(_QWORD *)(a1 + 1488) + 144LL) = ExAllocateTimer(RaidUnitEndMaintenanceTime, a1, 0LL, v3),
             v6 = *(_QWORD *)(a1 + 1488),
             *(_QWORD *)(v6 + 144))) )
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
        RaidUnitPoFxActivateComponent(a1, 0, 2LL, 0LL);
        *(_DWORD *)(*(_QWORD *)(a1 + 1488) + 160LL) = 0;
        ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 1488) + 144LL), -600000000LL, 0LL, 0LL);
      }
      else
      {
        *(_DWORD *)(v6 + 164) &= ~1u;
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
}
