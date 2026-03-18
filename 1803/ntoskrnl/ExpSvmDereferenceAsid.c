/*
 * XREFs of ExpSvmDereferenceAsid @ 0x1402BC330
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceAsid(unsigned int a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14039EBD8, &LockHandle);
  v2 = (char *)qword_14039EBD0 + 16 * a1;
  if ( --v2[1] == 0x8000000000000000uLL )
  {
    *v2 = 0LL;
    ObfDereferenceObjectWithTag(0LL, 0x746C6644u);
    --dword_14039EBC8;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
