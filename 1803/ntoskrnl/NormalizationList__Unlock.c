/*
 * XREFs of NormalizationList__Unlock @ 0x140294130
 * Callers:
 *     RtlpGetNormalization @ 0x14078B538 (RtlpGetNormalization.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 */

_QWORD *__fastcall NormalizationList__Unlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NormalizationListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&NormalizationListLock, a2, a3, a4);
  KeAbPostRelease((ULONG_PTR)&NormalizationListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
