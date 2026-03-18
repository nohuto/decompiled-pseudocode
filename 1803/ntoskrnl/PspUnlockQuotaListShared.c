/*
 * XREFs of PspUnlockQuotaListShared @ 0x1400C51F8
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140571E7C (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140572048 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockQuotaListShared(__int64 a1, signed __int64 *a2)
{
  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread(a1);
}
