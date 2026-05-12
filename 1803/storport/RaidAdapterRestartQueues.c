/*
 * XREFs of RaidAdapterRestartQueues @ 0x1C000EF18
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0003730 (RaidAdapterDeferredRoutine.c)
 *     RaidUnitCompleteRequest @ 0x1C000B0C0 (RaidUnitCompleteRequest.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000DA0C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C00251DC (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterRestartDpcRoutine @ 0x1C0027B10 (RaidAdapterRestartDpcRoutine.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0028C1C (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C0029890 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C002B700 (RaidPauseTimerDpcRoutine.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002BB14 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortAdapterActiveCondition @ 0x1C0036380 (StorPortAdapterActiveCondition.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C000C8F8 (RaidRestartIoQueue.c)
 *     RaidZeroXrb @ 0x1C000CDA8 (RaidZeroXrb.c)
 *     RaAllocateIoResource @ 0x1C000CE98 (RaAllocateIoResource.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C002D6B0 (RaidGetQosEntryForDeviceEntry.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C003F5F4 (RaAttemptHighWaterMarkIncrease.c)
 *     RaFreeIoResource @ 0x1C003F8B4 (RaFreeIoResource.c)
 */

void __fastcall RaidAdapterRestartQueues(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ebp
  __int64 *v4; // rdi
  _QWORD *i; // rbx
  PSLIST_ENTRY IoResource; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ecx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+20h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v17[8]; // [rsp+50h] [rbp-38h] BYREF
  PSLIST_ENTRY v18; // [rsp+58h] [rbp-30h]
  PSLIST_ENTRY v19; // [rsp+60h] [rbp-28h]
  PSLIST_ENTRY v20; // [rsp+68h] [rbp-20h]

  v2 = a1 + 768;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v2 + 280);
    v4 = 0LL;
    if ( v3 > 0 )
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2, &v15);
    if ( *(_DWORD *)(v2 + 24) )
    {
      if ( *(_DWORD *)(v2 + 40) != 1 && *(int *)(v2 + 44) <= 0 )
      {
        IoResource = RaAllocateIoResource((PSLIST_HEADER)(v2 + 64));
        if ( IoResource )
          break;
        if ( *(_DWORD *)(v2 + 136) < *(_DWORD *)(v2 + 144) )
        {
          RaAttemptHighWaterMarkIncrease(v2);
          IoResource = RaAllocateIoResource((PSLIST_HEADER)(v2 + 64));
          if ( IoResource )
            break;
        }
      }
    }
    if ( v3 <= 0 )
      goto LABEL_6;
    KeReleaseInStackQueuedSpinLock(&v15);
LABEL_31:
    if ( !v4 )
      goto LABEL_6;
    v14 = *(_QWORD *)(v4[8] + 32);
    (*(void (__fastcall **)(_QWORD, __int64 *, _BYTE *))(v14 + 392))(*(_QWORD *)(v14 + 384), v4 - 15, v17);
  }
  if ( v3 <= 0 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2, &v15);
  if ( *(_DWORD *)(v2 + 24) && *(int *)(v2 + 40) <= 0 && *(int *)(v2 + 44) <= 0 )
  {
    v7 = (_QWORD *)(v2 + 8);
    v4 = *(__int64 **)(v2 + 8);
    if ( v4[1] != v2 + 8 || (v8 = *v4, *(__int64 **)(*v4 + 8) != v4) )
      __fastfail(3u);
    *v7 = v8;
    *(_QWORD *)(v8 + 8) = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 192));
    v9 = *(_DWORD *)(v2 + 192);
    if ( v9 <= *(_DWORD *)(v2 + 36) )
      v9 = *(_DWORD *)(v2 + 36);
    --*(_DWORD *)(v2 + 24);
    *(_DWORD *)(v2 + 36) = v9;
    if ( (*((_BYTE *)v4 + 22) & 0x20) != 0 )
    {
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v4);
      v11 = *QosEntryForDeviceEntry;
      if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
        || (v12 = (_QWORD *)QosEntryForDeviceEntry[1], (_QWORD *)*v12 != QosEntryForDeviceEntry) )
      {
        __fastfail(3u);
      }
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
    }
  }
  KeReleaseInStackQueuedSpinLock(&v15);
  if ( v4 )
  {
    v20 = IoResource + 52;
    v19 = IoResource + 2;
    v18 = IoResource + 68;
    RaidZeroXrb(
      (__int64)&IoResource[2],
      v13,
      *((_DWORD *)&IoResource[48].Next + 2),
      *((void **)&IoResource[49].Next + 1));
    goto LABEL_31;
  }
  RaFreeIoResource(v2 + 64, IoResource);
LABEL_6:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  for ( i = *(_QWORD **)(a1 + 120); i != (_QWORD *)(a1 + 120); i = (_QWORD *)*i )
    RaidRestartIoQueue((__int64)(i - 6));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
