/*
 * XREFs of RaidAdapterRestartQueues @ 0x1C0011918
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0008A50 (RaidUnitCompleteRequest.c)
 *     RaidAdapterDeferredRoutine @ 0x1C000CC80 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011770 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     StorPortAdapterActiveCondition @ 0x1C001CE20 (StorPortAdapterActiveCondition.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002BB7C (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterRestartDpcRoutine @ 0x1C002D490 (RaidAdapterRestartDpcRoutine.c)
 *     RaidAdapterSetPauseTimer @ 0x1C002E734 (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C002EBF0 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C002F700 (RaidPauseTimerDpcRoutine.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002F784 (RaidResumeAndRestartAdapterQueues.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C000597C (RaidZeroXrb.c)
 *     RaidRestartIoQueue @ 0x1C0006A68 (RaidRestartIoQueue.c)
 *     RaAllocateIoResource @ 0x1C000A260 (RaAllocateIoResource.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00312D8 (RaidGetQosEntryForDeviceEntry.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C003FFC0 (RaAttemptHighWaterMarkIncrease.c)
 *     RaFreeIoResource @ 0x1C004021C (RaFreeIoResource.c)
 */

void __fastcall RaidAdapterRestartQueues(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  _QWORD *i; // rbx
  PSLIST_ENTRY IoResource; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ecx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-28h] BYREF
  PSLIST_ENTRY v17; // [rsp+58h] [rbp-20h]
  PSLIST_ENTRY v18; // [rsp+60h] [rbp-18h]
  PSLIST_ENTRY v19; // [rsp+68h] [rbp-10h]

  v2 = a1 + 768;
  while ( 1 )
  {
    v3 = 0LL;
    if ( !*(_DWORD *)(v2 + 24) || *(_DWORD *)(v2 + 40) == 1 || *(int *)(v2 + 44) > 0 )
      goto LABEL_3;
    IoResource = RaAllocateIoResource((PSLIST_HEADER)(v2 + 64));
    if ( !IoResource )
    {
      if ( *(_DWORD *)(v2 + 136) >= *(_DWORD *)(v2 + 144) )
        break;
      RaAttemptHighWaterMarkIncrease(v2);
      IoResource = RaAllocateIoResource((PSLIST_HEADER)(v2 + 64));
      if ( !IoResource )
        break;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2, &v14);
    if ( *(_DWORD *)(v2 + 24) && *(int *)(v2 + 40) <= 0 && *(int *)(v2 + 44) <= 0 )
    {
      v6 = (_QWORD *)(v2 + 8);
      v3 = *(__int64 **)(v2 + 8);
      v7 = *v3;
      if ( v3[1] != v2 + 8 || *(__int64 **)(v7 + 8) != v3 )
        __fastfail(3u);
      *v6 = v7;
      *(_QWORD *)(v7 + 8) = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 192));
      v8 = *(_DWORD *)(v2 + 36);
      if ( *(_DWORD *)(v2 + 192) > v8 )
        v8 = *(_DWORD *)(v2 + 192);
      --*(_DWORD *)(v2 + 24);
      *(_DWORD *)(v2 + 36) = v8;
      if ( (*((_BYTE *)v3 + 22) & 0x20) != 0 )
      {
        QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v3);
        v10 = *QosEntryForDeviceEntry;
        v11 = (_QWORD *)QosEntryForDeviceEntry[1];
        if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
          || (_QWORD *)*v11 != QosEntryForDeviceEntry )
        {
          __fastfail(3u);
        }
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
      }
    }
    KeReleaseInStackQueuedSpinLock(&v14);
    if ( v3 )
    {
      v19 = IoResource + 51;
      v18 = IoResource + 1;
      v17 = IoResource + 67;
      RaidZeroXrb(
        (__int64)&IoResource[1],
        v12,
        *((_DWORD *)&IoResource[47].Next + 2),
        *((void **)&IoResource[48].Next + 1));
    }
    else
    {
      RaFreeIoResource(v2 + 64, IoResource);
    }
LABEL_3:
    if ( !v3 )
      break;
    v13 = *(_QWORD *)(v3[8] + 32);
    (*(void (__fastcall **)(_QWORD, __int64 *, _BYTE *))(v13 + 392))(*(_QWORD *)(v13 + 384), v3 - 15, v16);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  for ( i = *(_QWORD **)(a1 + 120); i != (_QWORD *)(a1 + 120); i = (_QWORD *)*i )
    RaidRestartIoQueue((__int64)(i - 6));
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
