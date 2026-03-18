/*
 * XREFs of ExpConvertFastResourceExclusiveToShared @ 0x140157DF4
 * Callers:
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x140157D78 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExConvertFastResourceExclusiveToShared @ 0x1402B96A0 (ExConvertFastResourceExclusiveToShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWakeWaitChain @ 0x1400BDED8 (KeWakeWaitChain.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 */

__int64 __fastcall ExpConvertFastResourceExclusiveToShared(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v8; // [rsp+50h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 96));
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v5 = *(_QWORD **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v8 = v5;
  LODWORD(v5) = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) += (_DWORD)v5;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeWakeWaitChain(&v8, 0, 0);
  *(_BYTE *)(a2 + 17) &= ~4u;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
