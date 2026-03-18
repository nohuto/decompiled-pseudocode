/*
 * XREFs of IoWriteErrorLogEntry @ 0x140163CC0
 * Callers:
 *     IopDisassociateThreadIrp @ 0x14023240C (IopDisassociateThreadIrp.c)
 *     FsRtlLogCcFlushError @ 0x140714660 (FsRtlLogCcFlushError.c)
 *     IopLogBlockedDriverEvent @ 0x14071A2F8 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x14072767C (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x14074C6D0 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x140753CB0 (MiBadMemoryLogger.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __stdcall IoWriteErrorLogEntry(PVOID ElEntry)
{
  char *v1; // rbx
  KIRQL v2; // al
  _QWORD *v3; // rcx
  KIRQL v4; // di
  _QWORD *v5; // rbx
  bool v6; // zf
  void *v7; // rcx
  void *v8; // rcx

  v1 = (char *)ElEntry - 48;
  if ( IopErrorLogDisabledThisBoot )
  {
    v7 = (void *)*((_QWORD *)v1 + 3);
    if ( v7 )
      ObfDereferenceObject(v7);
    v8 = (void *)*((_QWORD *)v1 + 4);
    if ( v8 )
      ObfDereferenceObject(v8);
    _InterlockedExchangeAdd(&IopErrorLogAllocation, -*((unsigned __int16 *)v1 + 1));
    ExFreePoolWithTag(v1, 0);
  }
  else
  {
    *((_QWORD *)v1 + 5) = MEMORY[0xFFFFF78000000014];
    v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    v3 = (_QWORD *)qword_1403C8248;
    v4 = v2;
    v5 = v1 + 8;
    if ( *(__int64 **)qword_1403C8248 != &IopErrorLogListHead )
      __fastfail(3u);
    v6 = IopErrorLogSessionPending == 0;
    *v5 = &IopErrorLogListHead;
    v5[1] = v3;
    *v3 = v5;
    qword_1403C8248 = (__int64)v5;
    if ( v6 )
    {
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.List.Flink = 0LL;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogSessionPending = 1;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    KxReleaseSpinLock(&IopErrorLogLock);
    __writecr8(v4);
  }
}
