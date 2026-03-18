/*
 * XREFs of ExpTimerAdjust @ 0x14025D0A8
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x140239944 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeCancelTimerInternal @ 0x140031670 (KeCancelTimerInternal.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     ExpCalcAdjustedDueTime @ 0x14025CF4C (ExpCalcAdjustedDueTime.c)
 */

char __fastcall ExpTimerAdjust(PKTIMER Timer, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v9; // si
  __int64 v10; // rax
  ULONG v11; // r8d
  LARGE_INTEGER v12; // r11
  int Dpc_high; // eax
  ULONG v14; // eax
  struct _KDPC *Dpc; // rcx
  volatile LONG Lock; // r9d
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+70h] [rbp+8h] BYREF

  KxAcquireSpinLock((PKSPIN_LOCK)&Timer[1]);
  v9 = KeCancelTimerInternal((__int64)Timer, &v18, &v19, (unsigned int *)&Timer[5]);
  if ( v9 )
  {
    v10 = ExpCalcAdjustedDueTime(v18, v19, a3, a4, a5);
    v11 = (ULONG)Timer[3].Dpc;
    v12.QuadPart = v10;
    Dpc_high = HIDWORD(Timer[3].Dpc);
    if ( v11 )
    {
      if ( Dpc_high )
        v11 -= Dpc_high;
      v14 = a2 / 0x2710 + v11;
      if ( v14 >= v11 )
      {
        v11 += a2 / 0x2710;
        LODWORD(Timer[3].Dpc) = v14;
        HIDWORD(Timer[3].Dpc) = a2 / 0x2710;
      }
    }
    Dpc = 0LL;
    if ( ((__int64)Timer[4].Dpc & 1) != 0 )
    {
      Dpc = (struct _KDPC *)&Timer[2].TimerListEntry;
      v11 = 0;
    }
    Lock = Timer[5].Header.Lock;
    *(LARGE_INTEGER *)&Timer[4].Processor = v12;
    KeSetCoalescableTimer(Timer, v12, v11, Lock, Dpc);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&Timer[1]);
  return v9;
}
