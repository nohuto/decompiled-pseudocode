/*
 * XREFs of MiGetNextSession @ 0x1400B15E4
 * Callers:
 *     MmGetNextSession @ 0x1400B15D0 (MmGetNextSession.c)
 *     PsQueryCpuQuotaInformation @ 0x14015D43C (PsQueryCpuQuotaInformation.c)
 *     MiEmptyAccessLogs @ 0x140230750 (MiEmptyAccessLogs.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x140089D00 (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

_QWORD *__fastcall MiGetNextSession(_QWORD *Object)
{
  _QWORD *v2; // rsi
  __int64 CurrentServerSilo; // r14
  __int64 v4; // rbx
  __int64 *v5; // rbx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( Object )
    v4 = Object[128];
  else
    v4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
  if ( v4 )
    v5 = *(__int64 **)(v4 + 144);
  else
    v5 = (__int64 *)qword_140389300;
  while ( v5 != &qword_140389300 )
  {
    v6 = MiSelectSessionAttachProcess((__int64)(v5 - 18));
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
