/*
 * XREFs of PopDereferenceWakeInfos @ 0x14024131C
 * Callers:
 *     PopGetWakeSource @ 0x1406FA664 (PopGetWakeSource.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopWakeInfoDereference @ 0x1402418E0 (PopWakeInfoDereference.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PopDereferenceWakeInfos(unsigned int a1, _QWORD *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  if ( (_DWORD)v3 )
  {
    v4 = a2;
    do
    {
      PopWakeInfoDereference(*v4++);
      --v3;
    }
    while ( v3 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  ExFreePoolWithTag(a2, 0x206D654Du);
}
