/*
 * XREFs of ExpDeleteTimer @ 0x1400E0CF0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x1400B0710 (PoDestroyReasonContext.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x140143D90 (KeTryToAcquireSpinLockAtDpcLevel.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1)
{
  LIST_ENTRY *p_WaitListHead; // rsi
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v4; // r14
  PRTL_BALANCED_NODE v5; // rax
  signed __int8 v6; // cf
  PRTL_BALANCED_NODE v7; // rbp
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rdx
  unsigned __int8 CurrentIrql; // r14
  char *p_TimerListEntry; // rsi
  KSPIN_LOCK *v12; // rbp
  struct _LIST_ENTRY *v13; // rax
  struct _LIST_ENTRY *v14; // rdx
  char v15; // bp

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( a1[4].Header.WaitListHead.Flink )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = *(_QWORD **)&a1[4].Header.Lock;
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, (__int64)v5, (__int16 *)&ExpWakeTimerLock);
    if ( v7 )
      BYTE2(v7[1].Left) |= 1u;
    Flink = p_WaitListHead->Flink;
    if ( p_WaitListHead->Flink->Blink != p_WaitListHead
      || (Blink = p_WaitListHead->Blink, Blink->Flink != p_WaitListHead) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    p_WaitListHead->Flink = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v4 )
      PoDestroyReasonContext(v4);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock((PKSPIN_LOCK)&a1[1]);
  if ( a1[4].DueTime.QuadPart )
  {
    p_TimerListEntry = (char *)&a1[4].TimerListEntry;
    while ( 1 )
    {
      v12 = (KSPIN_LOCK *)(a1[4].DueTime.QuadPart + 2016);
      if ( KeTryToAcquireSpinLockAtDpcLevel(v12) )
      {
        v13 = *(struct _LIST_ENTRY **)p_TimerListEntry;
        if ( *(char **)(*(_QWORD *)p_TimerListEntry + 8LL) != p_TimerListEntry
          || (v14 = a1[4].TimerListEntry.Blink, (char *)v14->Flink != p_TimerListEntry) )
        {
          __fastfail(3u);
        }
        v14->Flink = v13;
        v13->Blink = v14;
        KxReleaseSpinLock(v12);
        v15 = 1;
      }
      else
      {
        v15 = 0;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)&a1[1]);
      if ( v15 )
        break;
      KxAcquireSpinLock((PKSPIN_LOCK)&a1[1]);
      if ( !a1[4].DueTime.QuadPart )
        goto LABEL_22;
    }
  }
  else
  {
LABEL_22:
    KxReleaseSpinLock((PKSPIN_LOCK)&a1[1]);
  }
  __writecr8(CurrentIrql);
  return KeCancelTimer(a1);
}
