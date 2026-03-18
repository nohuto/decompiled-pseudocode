/*
 * XREFs of EtwpOpenLogger @ 0x140062124
 * Callers:
 *     NtTraceEvent @ 0x1400611F0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x140061BC0 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x140172664 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x140172E84 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x1402AD5A0 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1402AD70C (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1402ADB24 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x140628E98 (EtwpKernelTraceRundown.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006660 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x1400621D0 (EtwpCloseLogger.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall EtwpOpenLogger(unsigned int a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbp

  *a4 = 0;
  if ( (_BYTE)a3 == 1 || KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = a1;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 424) + 8LL * a1), 1u) )
    {
      KeLeaveCriticalRegion();
      return 0LL;
    }
    *a4 = 1;
  }
  else
  {
    v8 = a1;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 432) + 8 * v8) & 1) == 0 )
    return *(_QWORD *)(*(_QWORD *)(a2 + 432) + 8 * v8);
  LOBYTE(a3) = *a4;
  EtwpCloseLogger(a1, a2, a3);
  return 0LL;
}
