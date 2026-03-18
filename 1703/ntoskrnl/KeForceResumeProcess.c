/*
 * XREFs of KeForceResumeProcess @ 0x1401202A4
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14020BDC0 (MiReAcquireCommitFailWorker.c)
 *     PsFreezeProcess @ 0x1404C7A84 (PsFreezeProcess.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     PspTerminateProcess @ 0x14054EBC8 (PspTerminateProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiThawSingleThread @ 0x140120CB4 (KiThawSingleThread.c)
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
    KiExitDispatcher((__int64)CurrentPrcb, 0, 1LL, 0LL, CurrentIrql);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    __writecr8(CurrentIrql);
  }
}
