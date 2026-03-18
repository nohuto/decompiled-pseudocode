/*
 * XREFs of ExpTimerAdjust @ 0x140286A1C
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x14024E8F4 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeCancelTimerInternal @ 0x1400D3430 (KeCancelTimerInternal.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 */

char __fastcall ExpTimerAdjust(PKTIMER Timer, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v9; // r14
  __int64 v10; // r10
  ULONG v11; // r8d
  int Dpc_high; // eax
  ULONG v13; // eax
  struct _KDPC *Dpc; // rcx
  volatile LONG Lock; // r9d
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF

  KxAcquireSpinLock((PKSPIN_LOCK)&Timer[1]);
  v9 = KeCancelTimerInternal((__int64)Timer, &v17, &v18, (unsigned int *)&Timer[5]);
  if ( v9 )
  {
    v10 = 0LL;
    if ( v18 == 1 )
    {
      v10 = a4 + a3 + v17 - a5;
      if ( v10 < 0 )
        v10 = a4;
    }
    else if ( (unsigned int)(v18 - 2) <= 1 )
    {
      v10 = a5 - v17 - a3;
      if ( v10 > 0 )
      {
        v10 = -1LL;
        if ( a3 > 0 )
          v10 = a5 - v17;
      }
    }
    v11 = (ULONG)Timer[3].Dpc;
    if ( v11 )
    {
      Dpc_high = HIDWORD(Timer[3].Dpc);
      if ( Dpc_high )
        v11 -= Dpc_high;
      v13 = a2 / 0x2710 + v11;
      if ( v13 >= v11 )
      {
        v11 += a2 / 0x2710;
        LODWORD(Timer[3].Dpc) = v13;
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
    *(_QWORD *)&Timer[4].Processor = v10;
    KeSetCoalescableTimer(Timer, (LARGE_INTEGER)v10, v11, Lock, Dpc);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&Timer[1]);
  return v9;
}
