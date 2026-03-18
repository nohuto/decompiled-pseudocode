/*
 * XREFs of DbgPrint @ 0x140068550
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x14000E878 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x14000E8DC (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x14000EAF4 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x14000F368 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x14000F830 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x1400105BC (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x140010744 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x1400108C8 (RtlpFindUCREntry.c)
 *     SepCreateTokenEx @ 0x14003E5B4 (SepCreateTokenEx.c)
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400ADDA8 (CcInsertIntoCleanSharedCacheMapList.c)
 *     RtlpPopulateListIndex @ 0x1401353EC (RtlpPopulateListIndex.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1402406BC (RtlpTraceDatabaseInternalAdd.c)
 *     PopWriteHeaderPages @ 0x140405288 (PopWriteHeaderPages.c)
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 *     PopWriteImageHeader @ 0x140419DFC (PopWriteImageHeader.c)
 *     IopQueryLegacyBusInformation @ 0x140457CCC (IopQueryLegacyBusInformation.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     CmpPostApc @ 0x1404CDCF0 (CmpPostApc.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     CmNotifyRunDown @ 0x14053F248 (CmNotifyRunDown.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x140579570 (RtlDestroyHeap.c)
 *     ExpSetCurrentUserUILanguage @ 0x140587598 (ExpSetCurrentUserUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1405B7134 (RtlpMuiRegLoadRegistryInfo.c)
 *     IopUnloadDriver @ 0x1405CC050 (IopUnloadDriver.c)
 *     CmpPostApcRunDown @ 0x14066D290 (CmpPostApcRunDown.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1406C0B80 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x1406EB9D0 (RtlLCIDToCultureName.c)
 *     ViIsBTSSupported @ 0x140773D54 (ViIsBTSSupported.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1400690F0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)File, 0x65u, 3u, va, 1);
}
