/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x14010F228
 * Callers:
 *     KiResetClockInterval @ 0x14010F138 (KiResetClockInterval.c)
 *     KiSetClockInterval @ 0x14010F168 (KiSetClockInterval.c)
 * Callees:
 *     KiSetClockTickRate @ 0x14010F264 (KiSetClockTickRate.c)
 */

__int64 KiSetClockIntervalToMinimumRequested()
{
  int v0; // ecx

  v0 = *(_DWORD *)(((unsigned __int64)KiClockIntervalRequests.Min & 0xFFFFFFFFFFFFFFFEuLL) + 28);
  if ( v0 == KiLastRequestedTimeIncrement || v0 == KeTimeIncrement )
    return (unsigned int)KeTimeIncrement;
  else
    return KiSetClockTickRate();
}
