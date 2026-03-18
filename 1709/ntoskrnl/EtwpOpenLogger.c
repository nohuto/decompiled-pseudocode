/*
 * XREFs of EtwpOpenLogger @ 0x14015377C
 * Callers:
 *     NtTraceEvent @ 0x140091AC0 (NtTraceEvent.c)
 *     EtwTraceEvent @ 0x14015331C (EtwTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x14027A7E0 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x14027A94C (EtwTraceRaw.c)
 *     EtwpLogSystemEventUnsafe @ 0x14027C4F4 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x140280A40 (EtwpCCSwapFlush.c)
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FA3C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x14012B268 (EtwpCloseLogger.c)
 */

__int64 __fastcall EtwpOpenLogger(unsigned int a1, __int64 a2, char a3, char *a4)
{
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax

  v4 = a1;
  *a4 = 0;
  if ( a3 == 1 || KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 416) + 8LL * a1), 1u) )
    {
      KeLeaveCriticalRegion();
      return 0LL;
    }
    *a4 = 1;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 424) + 8 * v4) & 1) != 0 )
  {
    EtwpCloseLogger(v4, a2, *a4);
    return 0LL;
  }
  return *(_QWORD *)(*(_QWORD *)(a2 + 424) + 8 * v4);
}
