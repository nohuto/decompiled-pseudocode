/*
 * XREFs of KeAdjustTimerDelayProcess @ 0x1401FD040
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x140239944 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiAdjustThreadTimer @ 0x140203CEC (KiAdjustThreadTimer.c)
 */

void __fastcall KeAdjustTimerDelayProcess(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _QWORD *i; // rbx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  CurrentPrcb = KeGetCurrentPrcb();
  for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    KiAdjustThreadTimer(i - 95, a2, a3);
  *(_DWORD *)(a1 + 68) = a3;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  KiExitDispatcher((__int64)CurrentPrcb, 0, 1LL, 0LL, CurrentIrql);
}
