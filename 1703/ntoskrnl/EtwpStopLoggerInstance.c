/*
 * XREFs of EtwpStopLoggerInstance @ 0x140434A54
 * Callers:
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeGetEffectiveIrql @ 0x1400E2B60 (KeGetEffectiveIrql.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     ExCancelTimer @ 0x14012AB50 (ExCancelTimer.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpStackRundown @ 0x1402583B0 (EtwpStackRundown.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140434B6C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpSendSessionNotification @ 0x140551BF8 (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x140552644 (EtwpDisableTraceProviders.c)
 *     EtwpLogPmcCounterRundown @ 0x14071038C (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(unsigned __int64 a1)
{
  __int64 v2; // rbp
  ULONG_PTR v3; // rcx
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax

  v2 = *(_QWORD *)(a1 + 944);
  _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x40u);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
    EtwpUpdateLoggerGroupMasks(a1, 0LL);
  if ( (*(_DWORD *)(a1 + 816) & 0x20) == 0 )
    EtwpDisableTraceProviders(v2, *(unsigned int *)a1);
  if ( (*(_DWORD *)(a1 + 816) & 0x4000) != 0 )
  {
    v5 = 0LL;
    while ( *(unsigned __int16 *)(v2 + 2 * v5 + 5016) != *(_DWORD *)a1 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= 8 )
        goto LABEL_6;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v2 + 392, 0LL);
    *(_BYTE *)(v2 + 5032) &= ~(1 << v5);
    memset((void *)(32 * v5 + v2 + 120), 0, 0x20uLL);
    *(_WORD *)(v2 + 2 * v5 + 5016) = 0;
    *(_QWORD *)(v2 + 400) = 0LL;
    ExReleasePushLockEx(v2 + 392, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 816) & 0x800) != 0 )
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
    if ( (*(_DWORD *)(a1 + 816) & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 840), *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 320), 0) )
    return 2147483685LL;
  v3 = *(_QWORD *)(a1 + 920);
  if ( v3 )
    ExCancelTimer(v3, 0LL);
  *(_QWORD *)(v2 + 8LL * *(unsigned int *)a1 + 920) = a1 | 1;
  if ( KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 820), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
  }
  EtwpSendSessionNotification(a1, 2LL);
  return 0LL;
}
