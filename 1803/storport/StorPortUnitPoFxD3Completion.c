/*
 * XREFs of StorPortUnitPoFxD3Completion @ 0x1C0036EE0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C000EEC8 (RaidUnitCancelWaitWakeIrp.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0026B14 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitDisablePendingTimer @ 0x1C00359A8 (RaidUnitDisablePendingTimer.c)
 */

void __fastcall StorPortUnitPoFxD3Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // dl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Status = IoStatus->Status;
  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( Status >= 0 )
    {
      RaidUnitDisablePendingTimer(Context);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 32), &LockHandle);
      RaidUnitCancelWaitWakeIrp(Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1480));
  }
  v7 = *(_QWORD *)(Context + 24);
  v8 = v7;
  if ( *(_QWORD *)(v7 + 5088) )
  {
    v9 = *(_BYTE *)(Context + 153);
    if ( (v9 & 8) != 0 )
    {
      *(_BYTE *)(Context + 153) = v9 & 0xF7;
      RaidAdapterPoFxIdleComponent(v7, 0LL, 0LL);
      v8 = *(_QWORD *)(Context + 24);
    }
  }
  if ( *(_DWORD *)(v8 + 4356) == 7 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 1048));
  *(_BYTE *)(Context + 153) &= ~1u;
}
