/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x140067EE0
 * Callers:
 *     KiResetClockInterval @ 0x140067A68 (KiResetClockInterval.c)
 *     KiSetClockInterval @ 0x140067A94 (KiSetClockInterval.c)
 * Callees:
 *     KiSetClockTickRate @ 0x140067F14 (KiSetClockTickRate.c)
 */

__int64 KiSetClockIntervalToMinimumRequested()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = *(_DWORD *)(((unsigned __int64)KiClockIntervalRequests.Min & 0xFFFFFFFFFFFFFFFEuLL) + 28);
  result = (unsigned int)KeTimeIncrement;
  if ( v0 != KiLastRequestedTimeIncrement && v0 != KeTimeIncrement )
    return KiSetClockTickRate();
  return result;
}
