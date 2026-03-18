/*
 * XREFs of NtShutdownWorkerFactory @ 0x140085388
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExpShutdownWorkerFactory @ 0x140087284 (ExpShutdownWorkerFactory.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x1405BCA80 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtShutdownWorkerFactory(void *a1, volatile signed __int32 *a2)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v4; // esi
  PVOID v5; // rbx
  _DWORD *v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a2 + 1) > 0x7FFFFFFF0000LL || a2 + 1 < a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v4 = ObReferenceObjectByHandle(a1, 0x20u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v5 = Object;
    ExpShutdownWorkerFactory(Object);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v5 + 13);
    _InterlockedExchangeAdd(a2, *((_DWORD *)v5 + 34));
    v6 = Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    v6[34] = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  return (unsigned int)v4;
}
