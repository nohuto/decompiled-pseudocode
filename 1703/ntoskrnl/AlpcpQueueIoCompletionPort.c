/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x1400402CC
 * Callers:
 *     AlpcpSignal @ 0x14004021C (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404306C4 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpAssociateIoCompletionPort @ 0x14055D608 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x14056C8CC (AlpcpAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     IoSetIoCompletionEx2 @ 0x1400E2780 (IoSetIoCompletionEx2.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall AlpcpQueueIoCompletionPort(__int64 a1, char a2, char a3, char a4)
{
  __int64 v4; // rdi
  _QWORD *v9; // r9
  __int64 v10; // rsi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4, &LockHandle);
  if ( *(_DWORD *)(v4 + 12) >= *(_DWORD *)(v4 + 8) )
  {
    v10 = 0LL;
    if ( a2 )
      ++*(_DWORD *)(v4 + 20);
    else
      ++*(_DWORD *)(v4 + 16);
  }
  else
  {
    v9 = *(_QWORD **)(v4 + 32);
    if ( v9 )
      *(_QWORD *)(v4 + 32) = *v9;
    v10 = v9[1];
    ++*(_DWORD *)(v4 + 12);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( a3 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 352);
    result = KeAbPostRelease(a1 + 352);
  }
  if ( v10 )
    return IoSetIoCompletionEx2(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), -(a2 != 0), 0, 0LL, 0, v10, a4);
  return result;
}
