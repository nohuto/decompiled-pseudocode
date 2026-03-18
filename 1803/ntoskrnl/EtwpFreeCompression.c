/*
 * XREFs of EtwpFreeCompression @ 0x140005FF4
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140006070 (KeRemoveQueueDpcEx.c)
 *     EtwpFreePlaceholderList @ 0x14000611C (EtwpFreePlaceholderList.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EtwpRelinquishCompressionTarget @ 0x1402B3E9C (EtwpRelinquishCompressionTarget.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeCompression(__int64 a1)
{
  void *v2; // rcx

  KeRemoveQueueDpcEx(a1 + 1208, 0LL);
  if ( *(_DWORD *)(a1 + 1184) )
  {
    ExAcquirePushLockExclusiveEx(a1 + 1160, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1160), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1160);
    KeAbPostRelease(a1 + 1160);
    _InterlockedExchange((volatile __int32 *)(a1 + 1184), 0);
  }
  v2 = *(void **)(a1 + 1176);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return EtwpFreePlaceholderList(a1);
}
