/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x14011B004
 * Callers:
 *     CcIsFatalWriteError @ 0x1400140C8 (CcIsFatalWriteError.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140023B2C (CcPerfLogWorkItemEnqueue.c)
 *     CcWriteBehindInternal @ 0x1400AACD0 (CcWriteBehindInternal.c)
 *     CcPerfLogFlushSection @ 0x140118638 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x140118844 (CcPerfLogFlushCache.c)
 *     CcPurgeAndClearCacheSection @ 0x140118940 (CcPurgeAndClearCacheSection.c)
 *     CcGetDirtyPages @ 0x14011A310 (CcGetDirtyPages.c)
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 *     CcUnpinRepinnedBcb @ 0x1401DDCA0 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x140515A10 (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14011B030 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

unsigned __int64 __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  unsigned __int64 result; // rax

  result = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}
