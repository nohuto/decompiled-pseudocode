/*
 * XREFs of PspUnlockQuotaListShared @ 0x140125A34
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140582A58 (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140582C24 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspUnlockQuotaListShared(__int64 a1, signed __int64 *a2)
{
  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread(a1);
}
