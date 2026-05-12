/*
 * XREFs of RaidAdapterRestartQueues @ 0x1C0010608
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001AA0 (RaidAdapterDeferredRoutine.c)
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0010460 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     StorPortAdapterActiveCondition @ 0x1C001DD40 (StorPortAdapterActiveCondition.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002C980 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterRestartDpcRoutine @ 0x1C002E440 (RaidAdapterRestartDpcRoutine.c)
 *     RaidAdapterSetPauseTimer @ 0x1C002F470 (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C002F930 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C0030590 (RaidPauseTimerDpcRoutine.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0030614 (RaidResumeAndRestartAdapterQueues.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0007180 (RaidRestartIoQueue.c)
 *     RaidZeroXrb @ 0x1C000C260 (RaidZeroXrb.c)
 *     RaAllocateIoResource @ 0x1C000C34C (RaAllocateIoResource.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C0031A90 (RaidGetQosEntryForDeviceEntry.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00407B4 (RaAttemptHighWaterMarkIncrease.c)
 *     RaFreeIoResource @ 0x1C0040A74 (RaFreeIoResource.c)
 */

void __fastcall RaidAdapterRestartQueues(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  char v4; // bp
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
    v3 = 0LL;
    v4 = 0;
    if ( *(int *)(v2 + 280) > 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2, &v15);
      v4 = 1;
    }
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
    if ( !v4 )
      goto LABEL_6;
    KeReleaseInStackQueuedSpinLock(&v15);
LABEL_31:
    if ( !v3 )
      goto LABEL_6;
    v14 = *(_QWORD *)(v3[8] + 32);
    (*(void (__fastcall **)(_QWORD, __int64 *, _BYTE *))(v14 + 392))(*(_QWORD *)(v14 + 384), v3 - 15, v17);
  }
  if ( !v4 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2, &v15);
  if ( *(_DWORD *)(v2 + 24) && *(int *)(v2 + 40) <= 0 && *(int *)(v2 + 44) <= 0 )
  {
    v7 = (_QWORD *)(v2 + 8);
    v3 = *(__int64 **)(v2 + 8);
    if ( v3[1] != v2 + 8 || (v8 = *v3, *(__int64 **)(*v3 + 8) != v3) )
      __fastfail(3u);
    *v7 = v8;
    *(_QWORD *)(v8 + 8) = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 192));
    v9 = *(_DWORD *)(v2 + 36);
    if ( *(_DWORD *)(v2 + 192) > v9 )
      v9 = *(_DWORD *)(v2 + 192);
    --*(_DWORD *)(v2 + 24);
    *(_DWORD *)(v2 + 36) = v9;
    if ( (*((_BYTE *)v3 + 22) & 0x20) != 0 )
    {
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v3);
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
  if ( v3 )
  {
    v20 = IoResource + 51;
    v19 = IoResource + 1;
    v18 = IoResource + 67;
    RaidZeroXrb(
      (__int64)&IoResource[1],
      v13,
      *((_DWORD *)&IoResource[47].Next + 2),
      *((void **)&IoResource[48].Next + 1));
    goto LABEL_31;
  }
  RaFreeIoResource(v2 + 64, IoResource);
LABEL_6:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  for ( i = *(_QWORD **)(a1 + 120); i != (_QWORD *)(a1 + 120); i = (_QWORD *)*i )
    RaidRestartIoQueue((__int64)(i - 6));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
