/*
 * XREFs of MiPulseCommitSignal @ 0x140218078
 * Callers:
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 * Callees:
 *     KePulseEvent @ 0x140082D10 (KePulseEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiPulseCommitSignal(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4968), &LockHandle);
  v2 = *(struct _KEVENT **)(a1 + 336);
  if ( !v2->Header.SignalState )
    KePulseEvent(v2, 0, 0);
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL) && *(_QWORD *)(a1 + 6248) == *(_QWORD *)(a1 + 4936) )
    KePulseEvent(*(PRKEVENT *)(a1 + 344), 0, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
