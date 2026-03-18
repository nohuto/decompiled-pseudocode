/*
 * XREFs of EtwpCloseLogger @ 0x1400621D0
 * Callers:
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     NtTraceEvent @ 0x1400611F0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x140061BC0 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x140062124 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140172664 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x140172E84 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x1402AD5A0 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1402AD70C (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402ADB24 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x140628E98 (EtwpKernelTraceRundown.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 424) + 8LL * a1), 1u);
    return KeLeaveCriticalRegionThread(KeGetCurrentThread());
  }
  return result;
}
