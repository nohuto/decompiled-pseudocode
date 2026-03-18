/*
 * XREFs of ExpDeleteTimer @ 0x1400C00C0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoDestroyReasonContext @ 0x14007624C (PoDestroyReasonContext.c)
 *     PsRemoveVirtualizedTimer @ 0x1400C0160 (PsRemoveVirtualizedTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1)
{
  LIST_ENTRY *p_WaitListHead; // rsi
  KIRQL v3; // al
  __int64 v4; // r9
  KIRQL v5; // si
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  signed __int8 v12; // cf
  __int64 v13; // rbp
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rdx

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( a1[4].Header.WaitListHead.Flink )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = *(_QWORD **)&a1[4].Header.Lock;
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
    v12 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    v13 = v9;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v9, (ULONG_PTR)&ExpWakeTimerLock);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
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
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock, (__int64)Blink, v10, v11);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KeLeaveCriticalRegionThread(CurrentThread);
    if ( v8 )
      PoDestroyReasonContext(v8);
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[1]);
  v5 = v3;
  if ( a1[4].DueTime.QuadPart )
  {
    LOBYTE(v4) = v3;
    PsRemoveVirtualizedTimer(&a1[4].DueTime, &a1[4].TimerListEntry, &a1[1], v4);
  }
  else
  {
    KxReleaseSpinLock((PKSPIN_LOCK)&a1[1]);
    __writecr8(v5);
  }
  return KeCancelTimer(a1);
}
