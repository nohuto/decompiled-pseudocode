/*
 * XREFs of NtShutdownWorkerFactory @ 0x14012B704
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExpShutdownWorkerFactory @ 0x14012AB80 (ExpShutdownWorkerFactory.c)
 *     ExSystemExceptionFilter @ 0x140430F30 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtShutdownWorkerFactory(HANDLE WorkerFactoryHandle, LONG *PendingWorkerCount)
{
  KPROCESSOR_MODE PreviousMode; // r9
  int v4; // esi
  PVOID v5; // rbx
  _DWORD *v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)PendingWorkerCount & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(PendingWorkerCount + 1) > 0x7FFFFFFF0000LL || PendingWorkerCount + 1 < PendingWorkerCount )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v4 = ObReferenceObjectByHandle(WorkerFactoryHandle, 0x20u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v5 = Object;
    ExpShutdownWorkerFactory((char *)Object);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v5 + 13);
    _InterlockedExchangeAdd(PendingWorkerCount, *((_DWORD *)v5 + 34));
    v6 = Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    v6[34] = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  return v4;
}
