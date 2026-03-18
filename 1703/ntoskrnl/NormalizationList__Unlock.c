/*
 * XREFs of NormalizationList__Unlock @ 0x140244CD8
 * Callers:
 *     RtlpGetNormalization @ 0x1406EFEA8 (RtlpGetNormalization.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 NormalizationList__Unlock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NormalizationListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&NormalizationListLock);
  KeAbPostRelease((ULONG_PTR)&NormalizationListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
