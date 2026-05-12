/*
 * XREFs of StorPortUnitPoFxD0Completion @ 0x1C000EE14
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E868 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006468 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C000EEC8 (RaidUnitCancelWaitWakeIrp.c)
 *     McTemplateK0pqcccq @ 0x1C0033F48 (McTemplateK0pqcccq.c)
 */

__int64 __fastcall StorPortUnitPoFxD0Completion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r8d
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  if ( RaidUnitCheckAndAcquirePoFx(a4) )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a4 + 1488) + 36LL), 0, 1) )
      RaidUnitPoFxIdleComponent(a4, 0, 0, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a4 + 32), &LockHandle);
    RaidUnitCancelWaitWakeIrp(a4);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**(_QWORD **)(a4 + 1488));
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      McTemplateK0pqcccq(
        *(_QWORD *)(a4 + 24),
        (unsigned int)&EventUnitPowerRequiredStop,
        v5,
        **(_QWORD **)(a4 + 1488),
        *(_DWORD *)(*(_QWORD *)(a4 + 24) + 56LL),
        *(_BYTE *)(a4 + 88),
        *(_BYTE *)(a4 + 89),
        *(_BYTE *)(a4 + 90),
        1);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a4 + 1480));
  }
  result = *(_QWORD *)(a4 + 24);
  if ( *(_DWORD *)(result + 4356) == 7 )
    _InterlockedDecrement((volatile signed __int32 *)(result + 1048));
  return result;
}
