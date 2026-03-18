/*
 * XREFs of EtwpStopLoggerInstance @ 0x1404F0374
 * Callers:
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1404F0484 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     ExCancelTimer @ 0x14012AFC0 (ExCancelTimer.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpStackRundown @ 0x140282000 (EtwpStackRundown.c)
 *     EtwpSendSessionNotification @ 0x1404EDDD4 (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x1404EF090 (EtwpDisableTraceProviders.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140749BD8 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpLogPmcCounterRundown @ 0x14074D464 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  __int64 v2; // rbp
  ULONG_PTR v3; // rcx
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax

  v2 = *(_QWORD *)(a1 + 2256);
  _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x40u);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
    EtwpUpdateLoggerGroupMasks(a1, 0LL);
  if ( (*(_DWORD *)(a1 + 832) & 0x20) == 0 )
    EtwpDisableTraceProviders(v2, *(_DWORD *)a1);
  if ( (*(_DWORD *)(a1 + 832) & 0x4000) != 0 )
  {
    v5 = 0LL;
    while ( *(unsigned __int16 *)(v2 + 2 * v5 + 4016) != *(_DWORD *)a1 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= 8 )
        goto LABEL_6;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v2 + 400, 0LL);
    *(_BYTE *)(v2 + 4032) &= ~(1 << v5);
    memset((void *)(v2 + 32 * (v5 + 4)), 0, 0x20uLL);
    *(_WORD *)(v2 + 2 * v5 + 4016) = 0;
    *(_QWORD *)(v2 + 408) = 0LL;
    ExReleasePushLockEx(v2 + 400, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 832) & 0x800) != 0 )
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
    if ( (*(_DWORD *)(a1 + 832) & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 2144), v2, *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 336), 0) )
    return 2147483685LL;
  v3 = *(_QWORD *)(a1 + 2232);
  if ( v3 )
    ExCancelTimer(v3);
  *(_QWORD *)(*(_QWORD *)(v2 + 424) + 8LL * *(unsigned int *)a1) = a1 | 1;
  if ( KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 496), 0, 0);
  }
  EtwpSendSessionNotification(a1, 2u, 0);
  return 0LL;
}
