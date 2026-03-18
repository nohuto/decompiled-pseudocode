/*
 * XREFs of EtwpCloseLogger @ 0x14008788C
 * Callers:
 *     EtwpCCSwapFlush @ 0x140028E80 (EtwpCCSwapFlush.c)
 *     EtwpLogSystemEventUnsafe @ 0x14006B670 (EtwpLogSystemEventUnsafe.c)
 *     NtTraceEvent @ 0x1400860F0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x140087260 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x1400877F4 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     EtwTraceEvent @ 0x140150C60 (EtwTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x140252E60 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x140252FC0 (EtwTraceRaw.c)
 *     EtwpTraceStackKey @ 0x140258578 (EtwpTraceStackKey.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400053B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = a2;
  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 8LL * a1 + 408), 1u);
    return KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  }
  return result;
}
