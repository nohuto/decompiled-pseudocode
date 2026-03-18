/*
 * XREFs of KiEventClockStateChange @ 0x140068030
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140067B60 (KePrepareClockTimerForIdle.c)
 *     KiSetClockTickRate @ 0x140067F14 (KiSetClockTickRate.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1400F6D60 (KeResumeClockTimerFromIdle.c)
 *     KiResumeClockTimer @ 0x140137F00 (KiResumeClockTimer.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall KiEventClockStateChange(int a1, char a2, __int64 *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-20h]
  __int64 *v8; // [rsp+48h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+54h] [rbp-Ch]

  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v5 = 0LL;
    BYTE1(v5) = a2;
    v6 = 0LL;
    v7 = 0LL;
    LOBYTE(v5) = a1;
    if ( a1 >= 0 )
    {
      if ( a1 <= 1 )
      {
        v6 = *a3;
        v7 = *a4;
      }
      else if ( a1 == 2 )
      {
        v6 = KiClockTimerNextTickTime;
      }
    }
    v10 = 0;
    v8 = &v5;
    v9 = 24;
    return EtwTraceKernelEvent((unsigned int)&v8, 1, 1074790400, 3927, 1538);
  }
  return result;
}
