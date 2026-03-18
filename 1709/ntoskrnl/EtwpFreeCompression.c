/*
 * XREFs of EtwpFreeCompression @ 0x1401292C0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeRemoveQueueDpcEx @ 0x140129650 (KeRemoveQueueDpcEx.c)
 *     EtwpFreePlaceholderList @ 0x1401296F8 (EtwpFreePlaceholderList.c)
 *     EtwpRelinquishCompressionTarget @ 0x140281C04 (EtwpRelinquishCompressionTarget.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeCompression(__int64 a1)
{
  void *v2; // rcx

  KeRemoveQueueDpcEx(a1 + 2352, 0LL);
  if ( *(_DWORD *)(a1 + 2328) )
  {
    ExAcquirePushLockExclusiveEx(a1 + 2304, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2304), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 2304));
    KeAbPostRelease(a1 + 2304);
    _InterlockedExchange((volatile __int32 *)(a1 + 2328), 0);
  }
  v2 = *(void **)(a1 + 2320);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return EtwpFreePlaceholderList(a1);
}
