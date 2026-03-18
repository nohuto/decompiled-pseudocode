/*
 * XREFs of KeThawProcess @ 0x14011FF68
 * Callers:
 *     PsThawProcess @ 0x14054E700 (PsThawProcess.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiThawSingleThread @ 0x140120CB4 (KiThawSingleThread.c)
 */

void __fastcall KeThawProcess(__int64 a1, char a2)
{
  _QWORD **v3; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r12
  volatile LONG *v7; // rbp
  __int64 v8; // rsi
  int v9; // eax
  int v10; // r11d
  _QWORD *i; // rax
  _QWORD *j; // rbx

  v3 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = (volatile LONG *)(a1 + 64);
  v8 = 0LL;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v9 = *(_DWORD *)(a1 + 616);
  v10 = v9 + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  if ( v10 )
  {
    if ( a2 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 3u);
      v8 = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 72);
    }
    else
    {
      *(_DWORD *)(a1 + 616) = v9 - 1;
    }
  }
  if ( a2 && (*(_DWORD *)(a1 + 440) & 0x10) != 0 )
  {
    for ( i = *v3; i != v3; i = (_QWORD *)*i )
      *(i - 64) += v8;
  }
  if ( v10 == 1 )
  {
    for ( j = *v3; j != v3; j = (_QWORD *)*j )
      KiThawSingleThread(CurrentPrcb, j - 95, 0LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    KiExitDispatcher((__int64)CurrentPrcb, 0, 1LL, 0LL, CurrentIrql);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    __writecr8(CurrentIrql);
  }
}
