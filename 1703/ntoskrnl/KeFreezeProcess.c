/*
 * XREFs of KeFreezeProcess @ 0x140072E2C
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020BDF4 (MiReAcquireOutSwappedProcessCommit.c)
 *     PsFreezeProcess @ 0x1404C7A84 (PsFreezeProcess.c)
 * Callees:
 *     KiFreezeSingleThread @ 0x140072F08 (KiFreezeSingleThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 */

__int64 __fastcall KeFreezeProcess(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  volatile LONG *v6; // rsi
  int v7; // eax
  int v8; // r11d
  _QWORD **v9; // rdi
  _QWORD *i; // rbx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v7 = *(_DWORD *)(a1 + 616);
  v8 = v7 + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 72) = KiQueryUnbiasedInterruptTime(0LL);
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 3u);
  }
  else
  {
    *(_DWORD *)(a1 + 616) = v7 + 1;
  }
  if ( v8 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v9 = (_QWORD **)(a1 + 48);
    for ( i = *v9; i != v9; i = (_QWORD *)*i )
      KiFreezeSingleThread(CurrentPrcb, i - 95);
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    return KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  }
  return result;
}
