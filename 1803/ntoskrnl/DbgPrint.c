/*
 * XREFs of DbgPrint @ 0x1400772C0
 * Callers:
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400B7344 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     RtlpAllocateHeap @ 0x1402894E0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140289EB0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14028A28C (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x14028A9AC (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14028AAE4 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14028B32C (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14028BD3C (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x14028ED44 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x140293A64 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x140293EC8 (RtlpPopulateListIndex.c)
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 *     PopWriteHeaderPages @ 0x140473794 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140486AB8 (PopWriteImageHeader.c)
 *     CmNotifyRunDown @ 0x1404B9558 (CmNotifyRunDown.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     CmpPostApc @ 0x1404E1E60 (CmpPostApc.c)
 *     RtlpQueryRegistryValues @ 0x140502B1C (RtlpQueryRegistryValues.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 *     IopQueryLegacyBusInformation @ 0x1405CA928 (IopQueryLegacyBusInformation.c)
 *     RtlCreateHeap @ 0x1405E2E10 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1405F0AA0 (RtlDestroyHeap.c)
 *     IopUnloadDriver @ 0x1405F5EC0 (IopUnloadDriver.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     ExpSetCurrentUserUILanguage @ 0x14060E6CC (ExpSetCurrentUserUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x140635254 (RtlpMuiRegLoadRegistryInfo.c)
 *     CmpPostApcRunDown @ 0x140701440 (CmpPostApcRunDown.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140758B30 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x140787510 (RtlLCIDToCultureName.c)
 *     ViIsBTSSupported @ 0x140823804 (ViIsBTSSupported.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140077340 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&File, 0x65u, 3u, va, 1);
}
