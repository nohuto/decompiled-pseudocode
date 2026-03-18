/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300
 * Callers:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x140092350 (EtwpTraceMessageVa.c)
 *     RawEndOperation @ 0x1400FA2CC (RawEndOperation.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140129264 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpCloseLogger @ 0x14012B268 (EtwpCloseLogger.c)
 *     EtwpFailLogging @ 0x14027A444 (EtwpFailLogging.c)
 *     EtwpFinalizePendingApc @ 0x14027F99C (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x14027FA30 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x14027FC0C (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x14027FED0 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x1402813E0 (EtwpCompressionProc.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1404F0484 (EtwpStopTrace.c)
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

void __stdcall ExReleaseRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRef, ULONG Count)
{
  _EX_RUNDOWN_REF *RunRefs; // r8
  signed __int64 v3; // r9
  unsigned __int64 v4; // r9

  RunRefs = (_EX_RUNDOWN_REF *)((char *)RunRef->RunRefs + RunRef->RunRefSize
                                                        * (KeGetPcr()->Prcb.Number % RunRef->Number));
  _m_prefetchw(RunRefs);
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = RunRefs->Count;
      if ( (RunRefs->Count & 1) != 0 )
        break;
      if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)RunRefs, v3 - 2 * Count, v3) )
        return;
    }
    if ( v3 != 1 )
      break;
    RunRefs = RunRef->RunRefs;
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4, -Count) == Count )
    KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
}
