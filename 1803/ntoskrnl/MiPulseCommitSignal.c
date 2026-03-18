/*
 * XREFs of MiPulseCommitSignal @ 0x1402658F0
 * Callers:
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 * Callees:
 *     KePulseEvent @ 0x140081280 (KePulseEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiPulseCommitSignal(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 6184), &LockHandle);
  v2 = *(struct _KEVENT **)(a1 + 296);
  if ( !v2->Header.SignalState )
    KePulseEvent(v2, 0, 0);
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 304) + 4LL) && *(_QWORD *)(a1 + 7528) == *(_QWORD *)(a1 + 6152) )
    KePulseEvent(*(PRKEVENT *)(a1 + 304), 0, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
