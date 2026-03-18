/*
 * XREFs of DbgPrint @ 0x140132890
 * Callers:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400F3AB0 (CcInsertIntoCleanSharedCacheMapList.c)
 *     RtlpDeCommitFreeBlock @ 0x14010CD3C (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x14010CDA0 (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x14010CFC4 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x14010D830 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x14010DCD4 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x14010E9A0 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x14010EB30 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x14010ECB8 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14014EF48 (RtlpPopulateListIndex.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x140256A04 (RtlpTraceDatabaseInternalAdd.c)
 *     PopWriteHeaderPages @ 0x140435AC8 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140436198 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     IopUnloadDriver @ 0x14046EF24 (IopUnloadDriver.c)
 *     CmpPostApc @ 0x14046F720 (CmpPostApc.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     CmNotifyRunDown @ 0x1404D66B0 (CmNotifyRunDown.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     RtlpQueryRegistryValues @ 0x140520470 (RtlpQueryRegistryValues.c)
 *     IopQueryLegacyBusInformation @ 0x1405973D8 (IopQueryLegacyBusInformation.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1405BCDCC (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlCreateHeap @ 0x1405D3930 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1405DD020 (RtlDestroyHeap.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405DD320 (ExpSetCurrentUserUILanguage.c)
 *     CmpPostApcRunDown @ 0x140697900 (CmpPostApcRunDown.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1406EF630 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x140723C40 (RtlLCIDToCultureName.c)
 *     ViIsBTSSupported @ 0x1407B5B10 (ViIsBTSSupported.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140132910 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&File, 0x65u, 3u, va, 1);
}
