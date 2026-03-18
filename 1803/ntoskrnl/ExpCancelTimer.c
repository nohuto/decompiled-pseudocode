/*
 * XREFs of ExpCancelTimer @ 0x14005AA70
 * Callers:
 *     ExTimerRundown @ 0x140040D7C (ExTimerRundown.c)
 *     NtCancelTimer @ 0x14005A790 (NtCancelTimer.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140006070 (KeRemoveQueueDpcEx.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KiCancelTimer @ 0x14005B820 (KiCancelTimer.c)
 *     KeRemoveQueueApc @ 0x1400C6B54 (KeRemoveQueueApc.c)
 */

__int64 __fastcall ExpCancelTimer(PKTIMER a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *Blink; // rdi
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
      || KeRemoveQueueDpcEx((int *)&a1[2].TimerListEntry, 0) )
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
  LOBYTE(a1[3].Processor) = 0;
  return v2;
}
