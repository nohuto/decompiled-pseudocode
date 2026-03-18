/*
 * XREFs of ExpCancelTimer @ 0x1400E1D98
 * Callers:
 *     ExTimerRundown @ 0x1400A9724 (ExTimerRundown.c)
 *     NtCancelTimer @ 0x1400E1574 (NtCancelTimer.c)
 *     ExpSetTimer @ 0x1400E1930 (ExpSetTimer.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     KiCancelTimer @ 0x1400E22F0 (KiCancelTimer.c)
 *     KeRemoveQueueApc @ 0x140126E68 (KeRemoveQueueApc.c)
 *     KeRemoveQueueDpcEx @ 0x140129650 (KeRemoveQueueDpcEx.c)
 */

__int64 __fastcall ExpCancelTimer(PKTIMER a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v8; // rdx

  v2 = 0;
  if ( ((__int64)a1[4].Dpc & 1) != 0 )
  {
    Blink = a1[1].Header.WaitListHead.Blink;
    KxAcquireSpinLock((PKSPIN_LOCK)&Blink[98]);
    Flink = a1[3].TimerListEntry.Flink;
    if ( Flink->Blink != &a1[3].TimerListEntry || (v8 = a1[3].TimerListEntry.Blink, v8->Flink != &a1[3].TimerListEntry) )
      __fastfail(3u);
    v8->Flink = Flink;
    Flink->Blink = v8;
    KxReleaseSpinLock((PKSPIN_LOCK)&Blink[98]);
    LOBYTE(a1[4].Dpc) &= ~1u;
    if ( ((__int64)a1[4].Dpc & 2) != 0 && LOBYTE(a1[3].Processor)
      || KeCancelTimer(a1)
      || (unsigned __int8)KeRemoveQueueDpcEx(&a1[2].TimerListEntry, 0LL) )
    {
      v2 = 1;
    }
    if ( (unsigned __int8)KeRemoveQueueApc(&a1[1].Header.WaitListHead) )
      ++v2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(a2) = 1;
    KiCancelTimer(a1, a2);
    __writecr8(CurrentIrql);
  }
  result = v2;
  LOBYTE(a1[3].Processor) = 0;
  return result;
}
