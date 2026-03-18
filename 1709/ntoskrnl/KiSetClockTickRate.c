/*
 * XREFs of KiSetClockTickRate @ 0x14010F264
 * Callers:
 *     KiSetClockIntervalToMinimumRequested @ 0x14010F228 (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     KiEventClockStateChange @ 0x14010F7E8 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x14010F828 (KiSetPendingTick.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiSetClockTickRate(unsigned int a1)
{
  unsigned __int32 v1; // edi
  __int64 v3; // rcx
  LARGE_INTEGER v4; // r8
  __int64 v5; // rbx
  char v6; // al
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v1 = KiClockState;
  KiLastRequestedTimeIncrement = a1;
  v9 = a1;
  ((void (__fastcall *)(_QWORD, _QWORD, unsigned int *))off_1403535D0[0])(0LL, a1, &v8);
  LOBYTE(v3) = 1;
  KiSetPendingTick(v3);
  if ( v1 == 2 )
    v1 = _InterlockedExchange(&KiClockState, 0);
  KiEventClockStateChange(0LL, v1, &v8, &v9);
  KeTimeIncrement = v8;
  v4.QuadPart = MEMORY[0xFFFFF78000000008];
  KiClockTimerNextTickTime = MEMORY[0xFFFFF78000000008] + v8;
  if ( v8 < dword_140370D14 )
    dword_140370D14 = v8;
  if ( v8 > dword_140370D10 )
    dword_140370D10 = v8;
  if ( a1 < dword_140370D1C )
    dword_140370D1C = a1;
  if ( a1 > dword_140370D18 )
    dword_140370D18 = a1;
  v5 = 3LL * (unsigned int)KiClockIncrementTraceCount;
  v6 = KiClockIncrementTraceCount + 1;
  KiClockIncrementTrace[v5].LowPart = v8;
  KiClockIncrementTrace[v5 + 1] = v4;
  KiClockIncrementTraceCount = v6 & 0xF;
  KiClockIncrementTrace[v5].HighPart = KiLastRequestedTimeIncrement;
  KiClockIncrementTrace[v5 + 2] = KeQueryPerformanceCounter(0LL);
  return (unsigned int)KeTimeIncrement;
}
