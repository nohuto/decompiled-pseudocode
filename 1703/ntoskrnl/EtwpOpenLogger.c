/*
 * XREFs of EtwpOpenLogger @ 0x1400877F4
 * Callers:
 *     EtwpCCSwapFlush @ 0x140028E80 (EtwpCCSwapFlush.c)
 *     EtwpLogSystemEventUnsafe @ 0x14006B670 (EtwpLogSystemEventUnsafe.c)
 *     NtTraceEvent @ 0x1400860F0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x140087260 (EtwpTraceMessageVa.c)
 *     EtwTraceEvent @ 0x140150C60 (EtwTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x140252E60 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x140252FC0 (EtwTraceRaw.c)
 *     EtwpTraceStackKey @ 0x140258578 (EtwpTraceStackKey.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140061BB0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x14008788C (EtwpCloseLogger.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall EtwpOpenLogger(unsigned int a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax

  v4 = a1;
  *a4 = 0;
  if ( (_BYTE)a3 == 1 || KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 8LL * a1 + 408), 1u) )
    {
      KeLeaveCriticalRegion();
      return 0LL;
    }
    *a4 = 1;
  }
  if ( (*(_BYTE *)(a2 + 8 * v4 + 920) & 1) == 0 )
    return *(_QWORD *)(a2 + 8 * v4 + 920);
  LOBYTE(a3) = *a4;
  EtwpCloseLogger((unsigned int)v4, a2, a3);
  return 0LL;
}
