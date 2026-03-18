/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0
 * Callers:
 *     MiDeleteEmptySubsections @ 0x140029CD4 (MiDeleteEmptySubsections.c)
 *     MmFlushImageSection @ 0x14002D9E0 (MmFlushImageSection.c)
 *     MmForceSectionClosed @ 0x14002DAF0 (MmForceSectionClosed.c)
 *     MiCopyHeaderIfResident @ 0x14005DFD4 (MiCopyHeaderIfResident.c)
 *     PopPepWork @ 0x140069FFC (PopPepWork.c)
 *     MiReferenceControlArea @ 0x1400949E0 (MiReferenceControlArea.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiLockSectionControlArea @ 0x140099610 (MiLockSectionControlArea.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14009AD50 (MmDoesFileHaveUserWritableReferences.c)
 *     MiCanFileBeTruncatedInternal @ 0x14010BDA4 (MiCanFileBeTruncatedInternal.c)
 *     MmChangeSectionBackingFile @ 0x140118718 (MmChangeSectionBackingFile.c)
 *     MiProcessDereferenceList @ 0x14013A7D0 (MiProcessDereferenceList.c)
 *     CcBcbProfiler @ 0x140173A20 (CcBcbProfiler.c)
 *     MiDeleteCachedSegment @ 0x140209CC8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 *     MiProcessDeleteOnClose @ 0x14020A790 (MiProcessDeleteOnClose.c)
 *     MiDbgMarkPfnModified @ 0x14021B0FC (MiDbgMarkPfnModified.c)
 *     sub_14041C010 @ 0x14041C010 (sub_14041C010.c)
 *     KiForceSymbolReferences @ 0x1408343F0 (KiForceSymbolReferences.c)
 * Callees:
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C874 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented();
  else
    return _InterlockedCompareExchange(a1, 0x80000000, 0) == 0;
}
