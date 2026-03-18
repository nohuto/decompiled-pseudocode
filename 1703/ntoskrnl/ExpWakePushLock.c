/*
 * XREFs of ExpWakePushLock @ 0x140112720
 * Callers:
 *     ExfReleasePushLockSharedEx @ 0x14000C468 (ExfReleasePushLockSharedEx.c)
 *     ExpOptimizePushLockList @ 0x140022508 (ExpOptimizePushLockList.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1401126B0 (ExfReleasePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiAbApplyWakeupBoost @ 0x140112AD4 (KiAbApplyWakeupBoost.c)
 */

int __fastcall ExpWakePushLock(volatile signed __int64 *a1, signed __int64 a2)
{
  int v4; // r9d
  _QWORD *v5; // r10
  struct _KEVENT *v6; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  signed __int64 v8; // rtt
  unsigned __int8 CurrentIrql; // si
  struct _LIST_ENTRY *v10; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  signed __int64 v12; // rtt
  _QWORD *v13; // rcx

  v4 = 1;
  while ( (a2 & 1) == 0 )
  {
LABEL_3:
    v5 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v6 = *(struct _KEVENT **)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
    if ( !v6 )
    {
      do
      {
        v13 = v5;
        v5 = (_QWORD *)v5[3];
        v5[5] = v13;
        v6 = (struct _KEVENT *)v5[4];
      }
      while ( !v6 );
      if ( v5 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v6;
    }
    if ( (v6[2].Header.SignalState & 1) != 0 )
    {
      Blink = v6[1].Header.WaitListHead.Blink;
      if ( Blink )
      {
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = Blink;
        v6[1].Header.WaitListHead.Blink = 0LL;
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        v4 = 0;
LABEL_7:
        CurrentIrql = 2;
        if ( v6[1].Header.WaitListHead.Blink )
        {
          CurrentIrql = KeGetCurrentIrql();
          LODWORD(a2) = 2;
          __writecr8(2uLL);
        }
        if ( !v4 )
        {
          Flink = v6[2].Header.WaitListHead.Flink;
          if ( Flink )
            LODWORD(a2) = KiAbApplyWakeupBoost((unsigned int)KeGetCurrentThread()->Priority, Flink, 0LL);
        }
        do
        {
          v10 = v6[1].Header.WaitListHead.Blink;
          if ( !_interlockedbittestandreset(&v6[2].Header.SignalState, 1u) )
            LODWORD(a2) = KeSetEvent(v6, 0, 0);
          v6 = (struct _KEVENT *)v10;
        }
        while ( v10 );
        if ( CurrentIrql != 2 )
        {
          LODWORD(a2) = CurrentIrql;
          __writecr8(CurrentIrql);
        }
        return a2;
      }
    }
    v8 = a2;
    a2 = _InterlockedCompareExchange64(a1, 0LL, a2);
    if ( v8 == a2 )
      goto LABEL_7;
  }
  while ( 1 )
  {
    v12 = a2;
    a2 = _InterlockedCompareExchange64(a1, a2 - 4, a2);
    if ( v12 == a2 )
      return a2;
    if ( (a2 & 1) == 0 )
      goto LABEL_3;
  }
}
