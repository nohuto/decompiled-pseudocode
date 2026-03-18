/*
 * XREFs of PiDrvDbUnloadNodeDpcRoutine @ 0x1401311C0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 */

void __fastcall PiDrvDbUnloadNodeDpcRoutine(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *v4; // rdi

  v4 = (KSPIN_LOCK *)(DeferredContext + 424);
  KxAcquireSpinLock((PKSPIN_LOCK)DeferredContext + 53);
  if ( !DeferredContext[432] )
  {
    *((_QWORD *)DeferredContext + 49) = 0LL;
    *((_QWORD *)DeferredContext + 51) = PiDrvDbUnloadNodeWorkerCallback;
    *((_QWORD *)DeferredContext + 52) = DeferredContext;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 392), DelayedWorkQueue);
    DeferredContext[432] = 1;
  }
  KxReleaseSpinLock(v4);
}
