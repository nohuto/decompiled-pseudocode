/*
 * XREFs of MiGetNextSession @ 0x140074C24
 * Callers:
 *     MmGetNextSession @ 0x140074C10 (MmGetNextSession.c)
 *     MiEmptyAccessLogs @ 0x14016A490 (MiEmptyAccessLogs.c)
 *     PsQueryCpuQuotaInformation @ 0x14016E7DC (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetThreadServerSilo @ 0x1400E1718 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x1400E174C (MiSelectSessionAttachProcess.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

void *__fastcall MiGetNextSession(_QWORD *Object)
{
  void *v2; // rdi
  __int64 ThreadServerSilo; // r14
  __int64 v4; // rbx
  __int64 *v5; // rbx
  void *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  if ( Object )
    v4 = Object[128];
  else
    v4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  if ( v4 )
    v5 = *(__int64 **)(v4 + 144);
  else
    v5 = (__int64 *)qword_1403CC580;
  while ( v5 != &qword_1403CC580 )
  {
    v6 = (void *)MiSelectSessionAttachProcess(v5 - 18);
    v2 = v6;
    if ( v6 )
    {
      if ( !ThreadServerSilo || v5[1020] == ThreadServerSilo )
        break;
      ObfDereferenceObject(v6);
      v2 = 0LL;
    }
    v5 = (__int64 *)*v5;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( Object )
    ObfDereferenceObject(Object);
  return v2;
}
