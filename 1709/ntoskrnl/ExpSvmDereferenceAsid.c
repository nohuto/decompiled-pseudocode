/*
 * XREFs of ExpSvmDereferenceAsid @ 0x140287FE0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall ExpSvmDereferenceAsid(unsigned int a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14035B5B8, &LockHandle);
  v2 = (char *)qword_14035B5B0 + 16 * a1;
  if ( --v2[1] == 0x8000000000000000uLL )
  {
    *v2 = 0LL;
    ObfDereferenceObjectWithTag(0LL, 0x746C6644u);
    --dword_14035B5A8;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
