/*
 * XREFs of EtwpFreeCompression @ 0x14001B67C
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1404358CC (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14001B6F0 (KeRemoveQueueDpcEx.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     EtwpRelinquishCompressionTarget @ 0x1402581A4 (EtwpRelinquishCompressionTarget.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeCompression(__int64 a1)
{
  void *v2; // rcx

  KeRemoveQueueDpcEx(a1 + 1040, 0LL);
  if ( *(_DWORD *)(a1 + 1016) )
  {
    ExAcquirePushLockExclusiveEx(a1 + 992, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 992), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 992);
    KeAbPostRelease(a1 + 992);
    _InterlockedExchange((volatile __int32 *)(a1 + 1016), 0);
  }
  v2 = *(void **)(a1 + 1008);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return EtwpFreePlaceholderList(a1);
}
