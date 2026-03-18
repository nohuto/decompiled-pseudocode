/*
 * XREFs of PfSnTraceTimerRoutine @ 0x14002E5D0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     PfSnTraceGetLogEntry @ 0x1400B31C4 (PfSnTraceGetLogEntry.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void __fastcall PfSnTraceTimerRoutine(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v5; // edx
  unsigned __int64 *v6; // rcx
  bool v7; // zf
  unsigned __int64 *v8; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_DWORD *)DeferredContext + 100) )
    goto LABEL_12;
  v5 = *((_DWORD *)DeferredContext + 83);
  if ( v5 > *((_DWORD *)DeferredContext + 85) )
    v5 = *((_DWORD *)DeferredContext + 85);
  if ( *((_DWORD *)DeferredContext + 81) > v5 )
    *((_DWORD *)DeferredContext + 81) = v5;
  *(_DWORD *)&DeferredContext[4 * (*((_DWORD *)DeferredContext + 82))++ + 284] = v5 - *((_DWORD *)DeferredContext + 81);
  *((_DWORD *)DeferredContext + 81) = v5;
  if ( (int)PfSnTraceGetLogEntry(DeferredContext, 1LL, &v8, SystemArgument2) < 0 )
  {
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)DeferredContext + 100, 10, 0) == 0;
  }
  else
  {
    v6 = v8;
    *v8 &= 7uLL;
    v6[1] = 0LL;
    *v6 = *v6 & 0xFFFFFFFFFFFFFFF8uLL | 4;
    if ( *((_DWORD *)DeferredContext + 82) < dword_14036DE34 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)DeferredContext + 34);
      if ( !*((_DWORD *)DeferredContext + 100) && ExAcquireRundownProtection((PEX_RUNDOWN_REF)DeferredContext + 45) )
        KiSetTimerEx(
          (_DWORD)DeferredContext + 136,
          *((_QWORD *)DeferredContext + 25),
          0,
          0,
          (__int64)(DeferredContext + 208));
      KxReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 34);
      goto LABEL_12;
    }
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)DeferredContext + 100, 4, 0) == 0;
  }
  if ( v7 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 368), DelayedWorkQueue);
LABEL_12:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)DeferredContext + 45);
}
