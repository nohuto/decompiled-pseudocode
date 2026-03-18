/*
 * XREFs of PopGetTransitionsToOnCount @ 0x14014E01C
 * Callers:
 *     PopSetSleepMarker @ 0x1405EAA78 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_1403A9608;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
