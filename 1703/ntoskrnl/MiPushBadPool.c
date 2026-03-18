/*
 * XREFs of MiPushBadPool @ 0x140217BF0
 * Callers:
 *     MiScrubNonPagedPool @ 0x1406B6538 (MiScrubNonPagedPool.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiPushBadPool(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = MiLockPageInline(a2);
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v4);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 304), &LockHandle);
  *(_QWORD *)a2 = qword_14036BD20;
  qword_14036BD20 = a2;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
