/*
 * XREFs of MiPulseCommitSignal @ 0x140222334
 * Callers:
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KePulseEvent @ 0x1400F0C10 (KePulseEvent.c)
 */

__int64 __fastcall MiPulseCommitSignal(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5096), &LockHandle);
  v2 = *(struct _KEVENT **)(a1 + 296);
  if ( !v2->Header.SignalState )
    KePulseEvent(v2, 0, 0);
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 304) + 4LL) && *(_QWORD *)(a1 + 6440) == *(_QWORD *)(a1 + 5064) )
    KePulseEvent(*(PRKEVENT *)(a1 + 304), 0, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
