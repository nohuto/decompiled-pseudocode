/*
 * XREFs of MiPushBadPool @ 0x14025C2CC
 * Callers:
 *     MiScrubNonPagedPool @ 0x14074DA70 (MiScrubNonPagedPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
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
  *(_QWORD *)a2 = qword_1403CB120;
  qword_1403CB120 = a2;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
