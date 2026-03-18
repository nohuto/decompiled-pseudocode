/*
 * XREFs of PspUnlockQuotaListShared @ 0x14002F5A0
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140448638 (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140448804 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspUnlockQuotaListShared(__int64 a1, volatile signed __int64 *a2)
{
  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KiLeaveCriticalRegionUnsafe(a1);
}
