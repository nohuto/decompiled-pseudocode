/*
 * XREFs of CcDereferenceSharedCacheMapFileObject @ 0x14011AFC4
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
 *     <none>
 */

void __fastcall CcDereferenceSharedCacheMapFileObject(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 96));
  v2 = *(_QWORD *)(a1 + 96);
  if ( (a2 ^ v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDeleteWithTag((PVOID)a2, 0x746C6644u);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
