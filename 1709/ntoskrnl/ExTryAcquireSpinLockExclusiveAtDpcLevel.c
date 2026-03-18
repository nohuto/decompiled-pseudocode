/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510
 * Callers:
 *     MmDoesFileHaveUserWritableReferences @ 0x14001ACD0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiReferenceControlArea @ 0x1400662F8 (MiReferenceControlArea.c)
 *     MiLockSectionControlArea @ 0x1400A4BCC (MiLockSectionControlArea.c)
 *     MiCopyHeaderIfResident @ 0x1400B6F80 (MiCopyHeaderIfResident.c)
 *     PopPepWork @ 0x1400FD200 (PopPepWork.c)
 *     MmFlushImageSection @ 0x14010A5D0 (MmFlushImageSection.c)
 *     MmForceSectionClosed @ 0x14010A6E0 (MmForceSectionClosed.c)
 *     MiCanFileBeTruncatedInternal @ 0x14011042C (MiCanFileBeTruncatedInternal.c)
 *     MiDeleteEmptySubsections @ 0x1401256C8 (MiDeleteEmptySubsections.c)
 *     MmChangeSectionBackingFile @ 0x140127FAC (MmChangeSectionBackingFile.c)
 *     MiProcessDereferenceList @ 0x14014B46C (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x1401682E0 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x14021083C (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 *     MiForceSectionClosed @ 0x1402111D8 (MiForceSectionClosed.c)
 *     MiProcessDeleteOnClose @ 0x1402113D0 (MiProcessDeleteOnClose.c)
 *     MiDbgMarkPfnModified @ 0x1402279A0 (MiDbgMarkPfnModified.c)
 *     PspIumReplenishPartitionPages @ 0x14024FB68 (PspIumReplenishPartitionPages.c)
 *     sub_14043C010 @ 0x14043C010 (sub_14043C010.c)
 *     KiForceSymbolReferences @ 0x14086B5B8 (KiForceSymbolReferences.c)
 * Callees:
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402861A0 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented();
  else
    return _InterlockedCompareExchange(a1, 0x80000000, 0) == 0;
}
