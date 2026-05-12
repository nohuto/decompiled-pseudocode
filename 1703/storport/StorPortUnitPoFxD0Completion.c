/*
 * XREFs of StorPortUnitPoFxD0Completion @ 0x1C000EA38
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E860 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0004BA0 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C000EAD8 (RaidUnitCancelWaitWakeIrp.c)
 *     Template_pqcccq @ 0x1C0037974 (Template_pqcccq.c)
 */

void __fastcall StorPortUnitPoFxD0Completion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  if ( RaidUnitCheckAndAcquirePoFx(a4) )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a4 + 1456) + 36LL), 0, 1) )
      RaidUnitPoFxIdleComponent(a4, 0, 0, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a4 + 32), &LockHandle);
    RaidUnitCancelWaitWakeIrp(a4);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**(_QWORD **)(a4 + 1456));
    if ( StorEtwLoggingEnabled )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        Template_pqcccq(
          *(_QWORD *)(a4 + 24),
          (unsigned int)&EventUnitPowerRequiredStop,
          v5,
          **(_QWORD **)(a4 + 1456),
          *(_DWORD *)(*(_QWORD *)(a4 + 24) + 56LL),
          *(_BYTE *)(a4 + 88),
          *(_BYTE *)(a4 + 89),
          *(_BYTE *)(a4 + 90),
          1);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a4 + 1448));
  }
}
