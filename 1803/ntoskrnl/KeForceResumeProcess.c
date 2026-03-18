/*
 * XREFs of KeForceResumeProcess @ 0x1400BCFB4
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x140251120 (MiReAcquireCommitFailWorker.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PspTerminateProcess @ 0x1404E9088 (PspTerminateProcess.c)
 *     PsFreezeProcess @ 0x140565F94 (PsFreezeProcess.c)
 * Callees:
 *     KiThawSingleThread @ 0x1400BD1B0 (KiThawSingleThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall KeForceResumeProcess(__int64 a1)
{
  _QWORD **v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  volatile LONG *v5; // rsi
  __int64 v6; // r8
  __int64 result; // rax
  _QWORD *i; // rbx

  v2 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 616) + ((*(_DWORD *)(a1 + 440) >> 3) & 1) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 3u);
    *(_DWORD *)(a1 + 616) = 0;
    for ( i = *v2; i != v2; i = (_QWORD *)*i )
    {
      LOBYTE(v6) = 1;
      KiThawSingleThread(CurrentPrcb, i - 95, v6);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    return KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
