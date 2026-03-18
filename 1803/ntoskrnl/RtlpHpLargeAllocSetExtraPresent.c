/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x14029E5E4
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x140294984 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x14029E588 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquireShared @ 0x14029ED38 (RtlpHpLargeLockAcquireShared.c)
 */

void __fastcall RtlpHpLargeAllocSetExtraPresent(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  char v4; // di
  unsigned __int8 v6; // r14
  unsigned __int64 Metadata; // rsi

  v4 = a3;
  v6 = RtlpHpLargeLockAcquireShared(a1, a3);
  Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
  if ( (v4 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      __writecr8(v6);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      KeAbPostRelease(a1 + 72);
      KeLeaveCriticalRegion();
    }
  }
  *(_QWORD *)(Metadata + 32) |= 1uLL;
}
