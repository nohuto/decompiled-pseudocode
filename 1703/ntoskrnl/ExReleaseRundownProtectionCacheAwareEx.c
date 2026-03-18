/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x1400053B0
 * Callers:
 *     RawEndOperation @ 0x140005378 (RawEndOperation.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwpCloseLogger @ 0x14008788C (EtwpCloseLogger.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     EtwpFailLogging @ 0x1401319A4 (EtwpFailLogging.c)
 *     EtwpCompressionProc @ 0x140257980 (EtwpCompressionProc.c)
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpFreeLoggerContext @ 0x1404358CC (EtwpFreeLoggerContext.c)
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
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
