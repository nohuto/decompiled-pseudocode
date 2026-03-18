/*
 * XREFs of MmGetSessionObjectById @ 0x14005A340
 * Callers:
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     SepSetTokenSessionById @ 0x1404F0508 (SepSetTokenSessionById.c)
 *     SeSetSessionIdToken @ 0x140546054 (SeSetSessionIdToken.c)
 *     NtSetInformationObject @ 0x140550ED0 (NtSetInformationObject.c)
 *     IoGetContainerInformation @ 0x1406133D0 (IoGetContainerInformation.c)
 *     SeExchangePrimaryToken @ 0x140640AD0 (SeExchangePrimaryToken.c)
 *     IoRegisterContainerNotification @ 0x140651FD0 (IoRegisterContainerNotification.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionById @ 0x1400E1680 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

void *MmGetSessionObjectById()
{
  __int64 v0; // rdi
  __int64 SessionById; // rax
  void *v2; // rbp
  __int64 v3; // rbx
  void *v4; // rsi
  int v5; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0LL;
  SessionById = MmGetSessionById();
  v2 = (void *)SessionById;
  if ( SessionById )
  {
    v3 = *(_QWORD *)(SessionById + 1024);
    v4 = *(void **)(v3 + 72);
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
    v5 = *(_DWORD *)(v3 + 4) & 2;
    if ( !v5 )
      ObfReferenceObjectWithTag(v4, 0x746C6644u);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    ObfDereferenceObject(v2);
    if ( v5 )
      return 0LL;
    return v4;
  }
  return (void *)v0;
}
