/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x140005B80
 * Callers:
 *     KiSetClockInterval @ 0x140005980 (KiSetClockInterval.c)
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 *     KiCheckForTimerExpiration @ 0x14010D920 (KiCheckForTimerExpiration.c)
 *     KiResetClockInterval @ 0x140184708 (KiResetClockInterval.c)
 * Callees:
 *     KiSetClockTickRate @ 0x140005C44 (KiSetClockTickRate.c)
 *     KiGetClockIntervalOneShot @ 0x140005E0C (KiGetClockIntervalOneShot.c)
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 */

__int64 __fastcall KiSetClockIntervalToMinimumRequested(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbp
  bool v4; // di
  unsigned int v5; // ebx
  char v6; // si
  __int64 InterruptTimePrecise; // rax
  unsigned int ClockIntervalOneShot; // eax
  __int64 result; // rax
  __int16 v10; // [rsp+30h] [rbp-8h]
  char v11; // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_1403E4B50 & 1) != 0 )
  {
    if ( qword_1403E4B50 == 1 )
      v2 = 0LL;
    else
      v2 = qword_1403E4B50 ^ ((unsigned __int64)&KiClockIntervalRequests + 1);
  }
  else
  {
    v2 = qword_1403E4B50;
  }
  v3 = KiClockOwnerOneShotRequest;
  v4 = 0;
  v5 = *(_DWORD *)(v2 + 28);
  v6 = 0;
  if ( KiClockOwnerOneShotRequest )
  {
    _disable();
    v4 = (v10 & 0x200) != 0;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v11);
    ClockIntervalOneShot = KiGetClockIntervalOneShot(v3, InterruptTimePrecise);
    if ( ClockIntervalOneShot < v5 )
    {
      v5 = ClockIntervalOneShot;
      v6 = 1;
    }
  }
  if ( KiClockOwnerOneShotRequestState != 2 && (v5 == KiLastRequestedTimeIncrement || v5 == KeTimeIncrement) )
  {
    result = (unsigned int)KeTimeIncrement;
  }
  else
  {
    LOBYTE(a2) = v6;
    result = KiSetClockTickRate(v5, a2);
  }
  if ( v4 )
    _enable();
  return result;
}
