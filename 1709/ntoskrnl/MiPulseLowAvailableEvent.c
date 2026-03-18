/*
 * XREFs of MiPulseLowAvailableEvent @ 0x1402304AC
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1400F4B60 (MiComputeSystemTrimCriteria.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KePulseEvent @ 0x1400F0C10 (KePulseEvent.c)
 */

__int64 __fastcall MiPulseLowAvailableEvent(__int64 a1)
{
  __int64 result; // rax
  struct _KEVENT *v3; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = *(_QWORD *)(a1 + 272);
  if ( !*(_DWORD *)(result + 4) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4800), &LockHandle);
    v3 = *(struct _KEVENT **)(a1 + 272);
    if ( !v3->Header.SignalState )
      KePulseEvent(v3, 0, 0);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  return result;
}
