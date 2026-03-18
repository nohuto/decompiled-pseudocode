/*
 * XREFs of CcSlowReferenceSharedCacheMapFileObject @ 0x14011B030
 * Callers:
 *     CcReferenceSharedCacheMapFileObject @ 0x14011B004 (CcReferenceSharedCacheMapFileObject.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

unsigned __int64 __fastcall CcSlowReferenceSharedCacheMapFileObject(__int64 a1)
{
  signed __int64 *v2; // rdi
  unsigned __int64 v3; // rbx

  v2 = (signed __int64 *)(*(_QWORD *)(a1 + 528) + 256LL);
  ExAcquirePushLockSharedEx((ULONG_PTR)v2, 0LL);
  v3 = ObFastReferenceObjectLocked((_QWORD *)(a1 + 96));
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v3;
}
