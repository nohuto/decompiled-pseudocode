/*
 * XREFs of PopGetTransitionsToOnCount @ 0x140247880
 * Callers:
 *     PopSetSleepMarker @ 0x1406F5844 (PopSetSleepMarker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140364EA8;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
