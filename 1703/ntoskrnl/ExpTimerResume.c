/*
 * XREFs of ExpTimerResume @ 0x140031708
 * Callers:
 *     ExTimerResume @ 0x14003155C (ExTimerResume.c)
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     ExWakeTimersResume @ 0x140138758 (ExWakeTimersResume.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 */

char __fastcall ExpTimerResume(PKTIMER Timer, __int64 a2)
{
  int Processor_low; // edi
  LARGE_INTEGER v5; // rdx
  struct _KDPC *Dpc; // rcx
  ULONG v7; // r8d

  Processor_low = LOBYTE(Timer[3].Processor);
  if ( LOBYTE(Timer[3].Processor) )
  {
    v5 = *(LARGE_INTEGER *)&Timer[4].Processor;
    if ( Processor_low == 3 )
    {
      v5.QuadPart = a2 - v5.QuadPart;
      if ( v5.HighPart >= 0 )
        v5.QuadPart = 0LL;
    }
    Dpc = 0LL;
    v7 = (ULONG)Timer[3].Dpc;
    if ( ((__int64)Timer[4].Dpc & 1) != 0 )
    {
      Dpc = (struct _KDPC *)&Timer[2].TimerListEntry;
      v7 = 0;
    }
    LOBYTE(a2) = KeSetCoalescableTimer(Timer, v5, v7, Timer[5].Header.Lock, Dpc);
    if ( Processor_low == 3 )
      _interlockedbittestandset(&Timer->Header.Lock, 9u);
  }
  LOBYTE(Timer[4].Dpc) &= ~2u;
  return a2;
}
