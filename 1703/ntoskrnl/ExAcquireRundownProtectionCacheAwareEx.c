/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x140061BB0
 * Callers:
 *     RawBeginOperation @ 0x140005430 (RawBeginOperation.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwpOpenLogger @ 0x1400877F4 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     EtwpFailLogging @ 0x1401319A4 (EtwpFailLogging.c)
 *     EtwpCompressionDpc @ 0x140257940 (EtwpCompressionDpc.c)
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware, ULONG Count)
{
  signed __int64 *v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v2 = (signed __int64 *)((char *)RunRefCacheAware->RunRefs
                        + RunRefCacheAware->RunRefSize * (KeGetPcr()->Prcb.Number % RunRefCacheAware->Number));
  _m_prefetchw(v2);
  v3 = *v2;
  if ( (*v2 & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(v2, 2 * Count + v3, v3);
    if ( v4 == v3 )
      break;
    if ( (v3 & 1) != 0 )
      return 0;
  }
  return 1;
}
