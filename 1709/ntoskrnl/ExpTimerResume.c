/*
 * XREFs of ExpTimerResume @ 0x14000C394
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     PspSetProcessFreezeStateCallback @ 0x1400D3230 (PspSetProcessFreezeStateCallback.c)
 *     ExWakeTimersResume @ 0x140286900 (ExWakeTimersResume.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
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
