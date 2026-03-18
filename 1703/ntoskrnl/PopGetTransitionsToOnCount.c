/*
 * XREFs of PopGetTransitionsToOnCount @ 0x1401383A4
 * Callers:
 *     PopSetSleepMarker @ 0x140576A30 (PopSetSleepMarker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_14034A628;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
