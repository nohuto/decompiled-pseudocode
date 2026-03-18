/*
 * XREFs of CmpCompleteLazyWrite @ 0x14012C128
 * Callers:
 *     CmpLazyWriteWorker @ 0x140151BE0 (CmpLazyWriteWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 */

__int64 __fastcall CmpCompleteLazyWrite(PKTIMER Timer, __int64 *a2)
{
  KSPIN_LOCK *p_QuadPart; // r14
  KIRQL v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rdi
  ULONG Processor; // ebp
  __int64 result; // rax
  unsigned __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r11

  p_QuadPart = &Timer[2].DueTime.QuadPart;
  v5 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
  if ( !a2 && ((__int64)Timer[2].TimerListEntry.Blink & 7) != 3 )
  {
    v6 = 0LL;
    goto LABEL_6;
  }
  v6 = 1LL;
  if ( a2 )
  {
    v7 = *a2;
  }
  else
  {
    v7 = 20000000LL;
    Processor = 1000;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( UnbiasedInterruptTime >= v11 )
      goto LABEL_5;
    v12 = v11 - UnbiasedInterruptTime;
    if ( v12 <= 0x1312D00 )
      goto LABEL_5;
    v7 = v12;
  }
  Processor = Timer[2].Processor;
LABEL_5:
  KeSetCoalescableTimer(Timer, (LARGE_INTEGER)-v7, 0, Processor, (PKDPC)&Timer[1]);
LABEL_6:
  Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)v6;
  KxReleaseSpinLock(p_QuadPart);
  result = v5;
  __writecr8(v5);
  return result;
}
