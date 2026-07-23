/*
 * XREFs of KiResumeClockTimer @ 0x140137F00
 * Callers:
 *     KeResumeClockTimer @ 0x140137EF4 (KeResumeClockTimer.c)
 *     KeResumeClockTimerSafe @ 0x1401FD334 (KeResumeClockTimerSafe.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140044EC0 (RtlGetInterruptTimePrecise.c)
 *     KiEventClockStateChange @ 0x140068030 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x140068070 (KiSetPendingTick.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER KiResumeClockTimer()
{
  char v0; // di
  int v1; // ebx
  LARGE_INTEGER result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v0 = 0;
  v1 = KiClockState;
  result.QuadPart = (unsigned int)KiClockTimerOwner;
  if ( KeGetCurrentPrcb()->Number == KiClockTimerOwner )
  {
    v0 = 1;
  }
  else if ( !KiClockTimerPerCpu )
  {
    return result;
  }
  off_14033B590[0]();
  LOBYTE(v3) = v0;
  result.QuadPart = ((__int64 (__fastcall *)(__int64))off_14033B588[0])(v3);
  if ( v0 )
  {
    ++dword_1403561C4;
    v4 = (unsigned int)KiLastRequestedTimeIncrement;
    v6 = (unsigned int)KiLastRequestedTimeIncrement;
    KeGetCurrentPrcb()->ClockOwner = 1;
    ((void (__fastcall *)(_QWORD, __int64, __int64 *))off_14033B5A0[0])(0LL, v4, &v5);
    KiSetPendingTick(1);
    if ( v1 == 2 )
      LOBYTE(v1) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v1, &v5, &v6);
    result = RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiClockTimerNextTickTime = result.QuadPart + (unsigned int)KeTimeIncrement;
  }
  return result;
}
