/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x140006430
 * Callers:
 *     EtwpCancelPendingStackwalkApcs @ 0x140005FA8 (EtwpCancelPendingStackwalkApcs.c)
 *     RawEndOperation @ 0x1400063FC (RawEndOperation.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     EtwpCloseLogger @ 0x1400621D0 (EtwpCloseLogger.c)
 *     EtwpFailLogging @ 0x1400CF814 (EtwpFailLogging.c)
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     EtwpFinalizePendingApc @ 0x1402ADFDC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x1402AE070 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x1402AE24C (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x1402AE510 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x1402B3670 (EtwpCompressionProc.c)
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
 *     EtwpWriteUserEvent @ 0x1404D3060 (EtwpWriteUserEvent.c)
 *     EtwpStopTrace @ 0x140589108 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
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
