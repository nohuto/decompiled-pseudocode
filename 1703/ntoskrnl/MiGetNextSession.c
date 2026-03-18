/*
 * XREFs of MiGetNextSession @ 0x14007118C
 * Callers:
 *     MmGetNextSession @ 0x140071180 (MmGetNextSession.c)
 *     MiEmptyAccessLogs @ 0x14013F820 (MiEmptyAccessLogs.c)
 *     PsQueryCpuQuotaInformation @ 0x140168578 (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSelectSessionAttachProcess @ 0x140094590 (MiSelectSessionAttachProcess.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 */

void *__fastcall MiGetNextSession(_QWORD *Object)
{
  void *v2; // rsi
  __int64 CurrentServerSilo; // r14
  __int64 v4; // rbx
  __int64 *v5; // rbx
  void *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( Object )
    v4 = Object[128];
  else
    v4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
  if ( v4 )
    v5 = *(__int64 **)(v4 + 144);
  else
    v5 = (__int64 *)qword_14036D040;
  while ( v5 != &qword_14036D040 )
  {
    v6 = (void *)MiSelectSessionAttachProcess(v5 - 18);
    v2 = v6;
    if ( v6 )
    {
      if ( !CurrentServerSilo || v5[1004] == CurrentServerSilo )
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
