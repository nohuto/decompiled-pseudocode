/*
 * XREFs of CmpCompleteLazyWrite @ 0x140037A54
 * Callers:
 *     CmpLazyWriteWorker @ 0x1401634A0 (CmpLazyWriteWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 */

__int64 __fastcall CmpCompleteLazyWrite(PKTIMER Timer, unsigned __int64 *a2)
{
  KSPIN_LOCK *p_QuadPart; // r14
  KIRQL v5; // al
  __int64 v6; // rcx
  struct _LIST_ENTRY *Blink; // rdi
  KIRQL v8; // r15
  __int64 v9; // rbp
  unsigned __int64 v10; // r11
  ULONG Processor; // esi
  __int64 result; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 v15; // rdi

  p_QuadPart = &Timer[2].DueTime.QuadPart;
  v5 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
  Blink = Timer[2].TimerListEntry.Blink;
  v8 = v5;
  if ( !a2 && ((unsigned __int8)Blink & 7) != 3 )
  {
    v9 = 0LL;
    goto LABEL_6;
  }
  v9 = 1LL;
  if ( a2 )
  {
    v10 = *a2;
  }
  else
  {
    LOBYTE(v6) = 1;
    Processor = 1000;
    v13 = (unsigned __int64)Blink & 0xFFFFFFFFFFFFFFF8uLL;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v6);
    if ( UnbiasedInterruptTime >= v13 )
      goto LABEL_5;
    v15 = v13 - UnbiasedInterruptTime;
    if ( v15 <= v10 )
      goto LABEL_5;
    v10 = v15;
  }
  Processor = Timer[2].Processor;
LABEL_5:
  KeSetCoalescableTimer(Timer, (LARGE_INTEGER)-(__int64)v10, 0, Processor, (PKDPC)&Timer[1]);
LABEL_6:
  Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)v9;
  KxReleaseSpinLock(p_QuadPart);
  result = v8;
  __writecr8(v8);
  return result;
}
