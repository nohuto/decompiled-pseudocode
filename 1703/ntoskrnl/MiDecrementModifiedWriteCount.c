/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x1400150EC
 * Callers:
 *     MiTrimSharedPage @ 0x140014134 (MiTrimSharedPage.c)
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14001505C (MiUnlockFlushMdl.c)
 *     MiReleasePageFileSectionInfo @ 0x14013A480 (MiReleasePageFileSectionInfo.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x14020A348 (MiFlushControlArea.c)
 *     MiFlushComplete @ 0x140216300 (MiFlushComplete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140096DC4 (MiBuildWakeList.c)
 */

__int64 __fastcall MiDecrementModifiedWriteCount(__int64 a1, int a2)
{
  KIRQL v3; // di
  __int64 v4; // rsi

  if ( a2 == 1 )
    v3 = 17;
  else
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_DWORD *)(a1 + 76);
  v4 = MiBuildWakeList(a1, 8LL);
  if ( v3 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v3);
  }
  return v4;
}
