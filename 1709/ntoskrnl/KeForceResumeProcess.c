/*
 * XREFs of KeForceResumeProcess @ 0x1400ACDDC
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x140212D30 (MiReAcquireCommitFailWorker.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     PspTerminateProcess @ 0x1404D9890 (PspTerminateProcess.c)
 *     PsFreezeProcess @ 0x14057D084 (PsFreezeProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiThawSingleThread @ 0x140121B84 (KiThawSingleThread.c)
 */

void __fastcall KeForceResumeProcess(__int64 a1)
{
  _QWORD **v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  volatile LONG *v5; // rsi
  __int64 v6; // r8
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
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    __writecr8(CurrentIrql);
  }
}
