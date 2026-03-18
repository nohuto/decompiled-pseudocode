/*
 * XREFs of KeThawProcess @ 0x1400BD08C
 * Callers:
 *     PsThawProcess @ 0x140565D8C (PsThawProcess.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KiThawSingleThread @ 0x1400BD1B0 (KiThawSingleThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall KeThawProcess(__int64 a1, char a2)
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
  __int64 result; // rax

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
    return KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
