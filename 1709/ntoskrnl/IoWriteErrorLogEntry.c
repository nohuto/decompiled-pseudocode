/*
 * XREFs of IoWriteErrorLogEntry @ 0x1401310B0
 * Callers:
 *     IopDisassociateThreadIrp @ 0x1401F4EDC (IopDisassociateThreadIrp.c)
 *     FsRtlLogCcFlushError @ 0x1406AFEC0 (FsRtlLogCcFlushError.c)
 *     IopLogBlockedDriverEvent @ 0x1406B5648 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x1406C1888 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1406E1928 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x1406EA210 (MiBadMemoryLogger.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
    v3 = (_QWORD *)qword_140384E88;
    v4 = v2;
    v5 = v1 + 8;
    if ( *(__int64 **)qword_140384E88 != &IopErrorLogListHead )
      __fastfail(3u);
    v6 = IopErrorLogSessionPending == 0;
    *v5 = &IopErrorLogListHead;
    v5[1] = v3;
    *v3 = v5;
    qword_140384E88 = (__int64)v5;
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
