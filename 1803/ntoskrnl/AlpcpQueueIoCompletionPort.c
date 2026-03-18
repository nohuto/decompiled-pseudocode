/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x1400845E0
 * Callers:
 *     AlpcpSignal @ 0x14006010C (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSignalPortAndUnlock @ 0x14052DAC0 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpAssociateIoCompletionPort @ 0x14052E268 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1407482FC (AlpcpAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     IoSetIoCompletionEx2 @ 0x1400863C0 (IoSetIoCompletionEx2.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 */

__int64 __fastcall AlpcpQueueIoCompletionPort(_QWORD *a1, char a2, char a3, char a4)
{
  __int64 v4; // rdi
  unsigned int v9; // eax
  _QWORD *v10; // rsi
  __int64 v11; // rsi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v4 = a1[6];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4, &LockHandle);
  v9 = *(_DWORD *)(v4 + 12);
  if ( v9 >= *(_DWORD *)(v4 + 8) )
  {
    v11 = 0LL;
    if ( a2 )
      ++*(_DWORD *)(v4 + 20);
    else
      ++*(_DWORD *)(v4 + 16);
  }
  else
  {
    v10 = *(_QWORD **)(v4 + 32);
    if ( v10 )
    {
      *(_QWORD *)(v4 + 32) = *v10;
      v9 = *(_DWORD *)(v4 + 12);
    }
    v11 = v10[1];
    *(_DWORD *)(v4 + 12) = v9 + 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( a3 )
  {
    if ( _InterlockedCompareExchange64(a1 + 44, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 44);
    result = KeAbPostRelease((ULONG_PTR)(a1 + 44));
  }
  if ( v11 )
    return IoSetIoCompletionEx2(a1[4], a1[5], -(a2 != 0), 0, 0LL, 0, v11, a4);
  return result;
}
