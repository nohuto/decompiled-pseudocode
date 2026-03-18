/*
 * XREFs of KeFreezeProcess @ 0x1400AC584
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x140212D64 (MiReAcquireOutSwappedProcessCommit.c)
 *     PsFreezeProcess @ 0x14057D084 (PsFreezeProcess.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiFreezeSingleThread @ 0x1400AC524 (KiFreezeSingleThread.c)
 */

void __fastcall KeFreezeProcess(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  volatile LONG *v6; // rsi
  int v7; // eax
  int v8; // r11d
  _QWORD **v9; // rdi
  _QWORD *i; // rbx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v7 = *(_DWORD *)(a1 + 616);
  v8 = v7 + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 72) = KiQueryUnbiasedInterruptTime();
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 3u);
  }
  else
  {
    *(_DWORD *)(a1 + 616) = v7 + 1;
  }
  if ( v8 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    __writecr8(CurrentIrql);
  }
  else
  {
    v9 = (_QWORD **)(a1 + 48);
    for ( i = *v9; i != v9; i = (_QWORD *)*i )
      KiFreezeSingleThread((__int64)CurrentPrcb, (__int64)(i - 95));
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  }
}
