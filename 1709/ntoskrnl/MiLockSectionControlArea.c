/*
 * XREFs of MiLockSectionControlArea @ 0x1400A4BCC
 * Callers:
 *     MmUpdateSectionIoAttribution @ 0x14000A344 (MmUpdateSectionIoAttribution.c)
 *     MmEnoughMemoryForWrite @ 0x140064904 (MmEnoughMemoryForWrite.c)
 *     MiComputeFlushRange @ 0x1400A4B48 (MiComputeFlushRange.c)
 *     MiFlushDataSection @ 0x1400B71B4 (MiFlushDataSection.c)
 *     MmOnlySystemCacheViewsPresent @ 0x1400F2320 (MmOnlySystemCacheViewsPresent.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14011C6D4 (MiReferenceControlAreaForCacheManager.c)
 *     MmDisableModifiedWriteOfSection @ 0x140124310 (MmDisableModifiedWriteOfSection.c)
 *     MmEnableModifiedWriteOfSection @ 0x140218E50 (MmEnableModifiedWriteOfSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockSectionControlArea(__int64 *a1, int a2, KIRQL *a3)
{
  KIRQL v6; // al
  KIRQL v7; // di
  __int64 v8; // rbx
  unsigned __int64 v10; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140388100);
    *a3 = v6;
    v7 = v6;
    if ( a2 == 1 )
      v8 = *a1;
    else
      v8 = a1[2];
    if ( !v8 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
      __writecr8(v7);
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8 + 72) )
      break;
    v10 = *a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
    __writecr8(v10);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388100, retaddr);
  else
    dword_140388100 = 0;
  return v8;
}
