/*
 * XREFs of IopDeleteIoCompletionInternal @ 0x140011200
 * Callers:
 *     IopDeleteIoCompletion @ 0x140429120 (IopDeleteIoCompletion.c)
 *     IopCloseIoCompletion @ 0x140429130 (IopCloseIoCompletion.c)
 * Callees:
 *     KeRundownQueueEx @ 0x140011290 (KeRundownQueueEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     IopFreeCompletionListPackets @ 0x140429154 (IopFreeCompletionListPackets.c)
 */

void __fastcall IopDeleteIoCompletionInternal(__int64 a1, __int64 a2)
{
  char v2; // si
  char v4; // al
  _QWORD **v5; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  if ( (_BYTE)a2 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 64), &LockHandle);
    *(_BYTE *)(a1 + 72) = 1;
    v4 = 0;
  }
  else
  {
    v4 = 1;
  }
  LOBYTE(a2) = v4;
  v5 = (_QWORD **)KeRundownQueueEx(a1, a2);
  if ( v2 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( v5 )
  {
    *v5[1] = 0LL;
    IopFreeCompletionListPackets(v5);
  }
}
