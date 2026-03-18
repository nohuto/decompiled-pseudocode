/*
 * XREFs of MmSessionSetUnloadAddress @ 0x14016E160
 * Callers:
 *     ExpInitializeSessionDriver @ 0x140613BD8 (ExpInitializeSessionDriver.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MmSessionSetUnloadAddress(__int64 a1)
{
  __int64 v1; // rbx
  _KPROCESS *Process; // rdx
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 104);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !v1 )
    v1 = 1LL;
  v3 = Process[1].ActiveProcessors.Bitmap[2];
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  if ( !*(_QWORD *)(v3 + 7872) )
    *(_QWORD *)(v3 + 7872) = v1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
