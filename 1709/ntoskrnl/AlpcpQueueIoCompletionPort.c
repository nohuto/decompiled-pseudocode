/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x14011DF30
 * Callers:
 *     AlpciSendDeferredMessageBeforeWait @ 0x14006AB80 (AlpciSendDeferredMessageBeforeWait.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpAssociateIoCompletionPort @ 0x1404EB28C (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpSignalPortAndUnlock @ 0x140577394 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1406DD5DC (AlpcpAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoSetIoCompletionEx2 @ 0x1400759E0 (IoSetIoCompletionEx2.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

char __fastcall AlpcpQueueIoCompletionPort(__int64 *a1, char a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // rdi
  _QWORD *v9; // r9
  __int64 v10; // rsi
  char result; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v4 = a1[6];
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
    if ( _InterlockedCompareExchange64(a1 + 44, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 44);
    result = KeAbPostRelease((ULONG_PTR)(a1 + 44));
  }
  if ( v10 )
    return IoSetIoCompletionEx2(a1[4], a1[5], -(__int64)(a2 != 0), 0, 0LL, 0, v10, a4);
  return result;
}
