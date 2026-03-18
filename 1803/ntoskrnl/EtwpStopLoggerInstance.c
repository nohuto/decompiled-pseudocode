/*
 * XREFs of EtwpStopLoggerInstance @ 0x140587E20
 * Callers:
 *     EtwpStopTrace @ 0x140589108 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     ExCancelTimer @ 0x140085540 (ExCancelTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeGetEffectiveIrql @ 0x1400F0B10 (KeGetEffectiveIrql.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpStackRundown @ 0x1402B40B4 (EtwpStackRundown.c)
 *     EtwpSendSessionNotification @ 0x14058A040 (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x14058EF9C (EtwpDisableTraceProviders.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140628AE8 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpLogPmcCounterRundown @ 0x1407AECDC (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(unsigned __int64 a1)
{
  __int64 v2; // rbp
  unsigned int v3; // eax
  unsigned int v4; // eax
  ULONG_PTR v5; // rcx
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r8
  __int64 v10; // r9

  v2 = *(_QWORD *)(a1 + 1112);
  _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x40u);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
    EtwpUpdateLoggerGroupMasks(a1, 0LL);
  v3 = *(_DWORD *)(a1 + 832);
  if ( (v3 & 0x20) == 0 )
  {
    EtwpDisableTraceProviders(v2, *(unsigned int *)a1);
    v3 = *(_DWORD *)(a1 + 832);
  }
  if ( (v3 & 0x4000) != 0 )
  {
    v7 = 0LL;
    while ( *(unsigned __int16 *)(v2 + 2 * v7 + 4024) != *(_DWORD *)a1 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= 8 )
        goto LABEL_6;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v2 + 408, 0LL);
    *(_BYTE *)(v2 + 4040) &= ~(1 << v7);
    memset((void *)(32 * v7 + v2 + 136), 0, 0x20uLL);
    *(_WORD *)(v2 + 2 * v7 + 4024) = 0;
    *(_QWORD *)(v2 + 416) = 0LL;
    ExReleasePushLockEx(v2 + 408, 0LL, v9, v10);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 832);
    if ( (v4 & 0x800) != 0 )
    {
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
      v4 = *(_DWORD *)(a1 + 832);
    }
    if ( (v4 & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 992), v2, *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 336), 0) )
    return 2147483685LL;
  v5 = *(_QWORD *)(a1 + 1088);
  if ( v5 )
    ExCancelTimer(v5);
  *(_QWORD *)(*(_QWORD *)(v2 + 432) + 8LL * *(unsigned int *)a1) = a1 | 1;
  if ( KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 496), 0, 0);
  }
  EtwpSendSessionNotification(a1, 2LL);
  return 0LL;
}
