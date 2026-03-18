/*
 * XREFs of MiLockSectionControlArea @ 0x140099610
 * Callers:
 *     MmOnlySystemCacheViewsPresent @ 0x140014420 (MmOnlySystemCacheViewsPresent.c)
 *     MiReferenceControlAreaForCacheManager @ 0x1400231B4 (MiReferenceControlAreaForCacheManager.c)
 *     MmUpdateSectionIoAttribution @ 0x140029EBC (MmUpdateSectionIoAttribution.c)
 *     MmDisableModifiedWriteOfSection @ 0x14002BA80 (MmDisableModifiedWriteOfSection.c)
 *     MiFlushDataSection @ 0x14005E1F4 (MiFlushDataSection.c)
 *     MiComputeFlushRange @ 0x1400989C0 (MiComputeFlushRange.c)
 *     MmEnoughMemoryForWrite @ 0x1400AE5C4 (MmEnoughMemoryForWrite.c)
 *     MmEnableModifiedWriteOfSection @ 0x1402115C0 (MmEnableModifiedWriteOfSection.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockSectionControlArea(__int64 *a1, int a2, unsigned __int8 *a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rbx
  unsigned __int64 v9; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14036BE00, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(&dword_14036BE00, CurrentIrql);
    *a3 = CurrentIrql;
    if ( a2 == 1 )
      v7 = *a1;
    else
      v7 = a1[2];
    if ( !v7 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
      __writecr8(CurrentIrql);
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v7 + 72)) )
      break;
    v9 = *a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
    __writecr8(v9);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14036BE00, retaddr);
  else
    dword_14036BE00 = 0;
  return v7;
}
