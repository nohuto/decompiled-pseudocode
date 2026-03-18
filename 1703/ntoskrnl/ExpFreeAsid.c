/*
 * XREFs of ExpFreeAsid @ 0x14025E214
 * Callers:
 *     ExFreeSvmAsid @ 0x140033488 (ExFreeSvmAsid.c)
 *     ExpAssignPasid @ 0x14071F11C (ExpAssignPasid.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall ExpFreeAsid(unsigned int a1)
{
  _KPROCESS *Process; // rdi
  _QWORD *v3; // rax
  int v5; // ebx
  LONG_PTR result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140342DD8, &LockHandle);
  v3 = (char *)qword_140342DD0 + 16 * a1;
  if ( v3[1]-- == 1LL )
  {
    *v3 = 0LL;
    v5 = 1;
    --dword_140342DC8;
  }
  else
  {
    v3[1] |= 0x8000000000000000uLL;
    v5 = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v5 == 1 )
    return ObfDereferenceObject(Process);
  return result;
}
