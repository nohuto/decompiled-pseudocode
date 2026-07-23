/*
 * XREFs of KiResumeClockTimer @ 0x14014E908
 * Callers:
 *     KeResumeClockTimer @ 0x14014E8F4 (KeResumeClockTimer.c)
 *     KeResumeClockTimerSafe @ 0x1402408E4 (KeResumeClockTimerSafe.c)
 * Callees:
 *     KiRestoreClockTickRate @ 0x140005B28 (KiRestoreClockTickRate.c)
 *     KiEventClockStateChange @ 0x140005D9C (KiEventClockStateChange.c)
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

LONGLONG KiResumeClockTimer()
{
  char v0; // di
  int v1; // ebx
  LONGLONG result; // rax
  __int64 v3; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v0 = 0;
  v1 = KiClockState;
  result = (unsigned int)KiClockTimerOwner;
  if ( KeGetCurrentPrcb()->Number == KiClockTimerOwner )
  {
    v0 = 1;
  }
  else if ( !KiClockTimerPerCpu )
  {
    return result;
  }
  off_140398960[0]();
  LOBYTE(v3) = v0;
  result = ((__int64 (__fastcall *)(__int64))off_140398958[0])(v3);
  if ( v0 )
  {
    ++dword_1403B3DC4;
    KeGetCurrentPrcb()->ClockOwner = 1;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiRestoreClockTickRate(InterruptTimePrecise.QuadPart, &v6);
    if ( v1 == 2 )
      LOBYTE(v1) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v1, &v5, &v6);
    result = InterruptTimePrecise.QuadPart + (unsigned int)KeTimeIncrement;
    KiClockTimerNextTickTime = result;
  }
  return result;
}
