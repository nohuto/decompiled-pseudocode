/*
 * XREFs of ExpDeleteWorkerFactory @ 0x1400B8940
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     IoFreeMiniCompletionPacket @ 0x14055F6A0 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall ExpDeleteWorkerFactory(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rbx
  char v4; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 34LL) = 1;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(void **)(v2 + 8);
  v4 = *(_BYTE *)(v2 + 32);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x66577845u);
  ObCloseHandle(*(HANDLE *)(a1 + 40), 0);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  if ( !v4 )
  {
    IoFreeMiniCompletionPacket(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
  }
}
