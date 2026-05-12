/*
 * XREFs of StorPortUnitPoFxD3Completion @ 0x1C0039080
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C000EDE4 (RaidUnitCancelWaitWakeIrp.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001E788 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitDisablePendingTimer @ 0x1C0037FF4 (RaidUnitDisablePendingTimer.c)
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
  char v8; // al
  __int64 v9; // rax
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
  if ( *(_QWORD *)(v7 + 5088) )
  {
    v8 = *(_BYTE *)(Context + 153);
    if ( (v8 & 8) != 0 )
    {
      *(_BYTE *)(Context + 153) = v8 & 0xF7;
      RaidAdapterPoFxIdleComponent(v7, 0LL, 0LL);
    }
  }
  v9 = *(_QWORD *)(Context + 24);
  if ( *(_DWORD *)(v9 + 4356) == 7 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 1048));
  *(_BYTE *)(Context + 153) &= ~1u;
}
