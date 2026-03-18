/*
 * XREFs of ExpFreeAsid @ 0x1402BC054
 * Callers:
 *     ExFreeSvmAsid @ 0x1400C8CA8 (ExFreeSvmAsid.c)
 *     ExpAssignPasid @ 0x1407C627C (ExpAssignPasid.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall ExpFreeAsid(unsigned int a1)
{
  _KPROCESS *Process; // rdi
  _QWORD *v3; // rax
  int v5; // ebx
  LONG_PTR result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_14039EBD8, &LockHandle);
  v3 = (char *)qword_14039EBD0 + 16 * a1;
  if ( v3[1]-- == 1LL )
  {
    *v3 = 0LL;
    v5 = 1;
    --dword_14039EBC8;
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
