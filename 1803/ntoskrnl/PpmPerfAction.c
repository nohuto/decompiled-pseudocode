/*
 * XREFs of PpmPerfAction @ 0x140109090
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140109130 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmPerfApplyProcessorState @ 0x14016B97C (PpmPerfApplyProcessorState.c)
 *     PpmParkReportParkedCore @ 0x1402828F0 (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x140282974 (PpmParkReportUnparkedCore.c)
 */

void __fastcall PpmPerfAction(
        struct _KDPC *Dpc,
        volatile __int32 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  volatile __int32 *v4; // rdi
  char v5; // bl
  __int64 v6; // rax

  v4 = DeferredContext;
  v5 = _InterlockedExchange(DeferredContext + 6036, 0);
  if ( (v5 & 1) != 0 )
    PpmPerfSnapDeliveredPerformance(DeferredContext);
  if ( (v5 & 2) != 0 )
    PpmParkReportUnparkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 4) != 0 )
  {
    v6 = *((_QWORD *)v4 + 3023);
    if ( *(_BYTE *)(v6 + 120) )
    {
      LOBYTE(DeferredContext) = 1;
      *(_BYTE *)(v6 + 120) = 0;
      PpmPerfApplyProcessorState(v4, DeferredContext, SystemArgument1, SystemArgument2);
    }
    PpmPerfApplyProcessorState(v4, 0LL, SystemArgument1, SystemArgument2);
  }
  if ( (v5 & 8) != 0 )
    PpmParkReportParkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( _InterlockedExchangeAdd(&PpmCheckCount, 0xFFFFFFFF) == 1 )
    KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0LL, 0LL, 0LL, 0);
}
