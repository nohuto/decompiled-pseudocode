/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x1401351A4
 * Callers:
 *     MiTrimSharedPage @ 0x140081E44 (MiTrimSharedPage.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiReleasePageFileSectionInfo @ 0x140150C04 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x14024F320 (MiFlushControlArea.c)
 *     MiFlushComplete @ 0x14025B3B0 (MiFlushComplete.c)
 *     MiPurgeBadFileOnlyPages @ 0x14025E2E0 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiBuildWakeList @ 0x1400E3EDC (MiBuildWakeList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 *__fastcall MiDecrementModifiedWriteCount(__int64 a1, int a2)
{
  volatile LONG *v2; // rsi
  KIRQL v4; // bl
  __int64 *v5; // rdi

  v2 = (volatile LONG *)(a1 + 72);
  if ( a2 == 1 )
    v4 = 17;
  else
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_DWORD *)(a1 + 76);
  v5 = MiBuildWakeList(a1, 8);
  if ( v4 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    __writecr8(v4);
  }
  return v5;
}
