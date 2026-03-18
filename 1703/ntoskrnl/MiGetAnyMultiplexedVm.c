/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x1400B1BCC
 * Callers:
 *     MiDeleteKernelStack @ 0x140023CD4 (MiDeleteKernelStack.c)
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 *     MmAdjustWorkingSetSizeEx @ 0x140030524 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140031018 (MmQuerySystemWorkingSetInformation.c)
 *     MiLockPagedAddress @ 0x140036C60 (MiLockPagedAddress.c)
 *     MiJumpStackTarget @ 0x140040A00 (MiJumpStackTarget.c)
 *     MiRemoveFromSystemSpace @ 0x140060690 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiProtoFault @ 0x14006B9C4 (MiProtoFault.c)
 *     MiAcquireProperVm @ 0x14006BF58 (MiAcquireProperVm.c)
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x14006D120 (MiSetPagingOfDriver.c)
 *     MiMapPageFileHash @ 0x140075F48 (MiMapPageFileHash.c)
 *     MiCapturePfnVm @ 0x140078F10 (MiCapturePfnVm.c)
 *     MiOutPageSingleKernelStack @ 0x14007C8D0 (MiOutPageSingleKernelStack.c)
 *     MiOutSwapKernelStackPage @ 0x14007CC6C (MiOutSwapKernelStackPage.c)
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiProbeAndLockPrepare @ 0x1400B4C90 (MiProbeAndLockPrepare.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     MiPfCompleteInPageSupport @ 0x14010B0F0 (MiPfCompleteInPageSupport.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiEncodeProtoFill @ 0x140119844 (MiEncodeProtoFill.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     MiRecheckCombineVm @ 0x14013055C (MiRecheckCombineVm.c)
 *     MiDeletePteRange @ 0x14013BCF4 (MiDeletePteRange.c)
 *     MiCountSystemImageCommitment @ 0x1401443B8 (MiCountSystemImageCommitment.c)
 *     MiFreeUnusedPfnPages @ 0x14015A8A0 (MiFreeUnusedPfnPages.c)
 *     MiDeleteBootRange @ 0x14015D2A0 (MiDeleteBootRange.c)
 *     MiExceptionForMappedVa @ 0x14020CBC0 (MiExceptionForMappedVa.c)
 *     MiTranslatePageForCopy @ 0x1402105E8 (MiTranslatePageForCopy.c)
 *     MiLockHotPatchPages @ 0x140211784 (MiLockHotPatchPages.c)
 *     MmReplaceImportEntry @ 0x140211B08 (MmReplaceImportEntry.c)
 *     MiMarkPteDirty @ 0x140212530 (MiMarkPteDirty.c)
 *     MmProtectSystemCacheView @ 0x1402126D8 (MmProtectSystemCacheView.c)
 *     MmRemoveSystemCacheFromDump @ 0x14021359C (MmRemoveSystemCacheFromDump.c)
 *     MmFreeSpecialPool @ 0x14021753C (MmFreeSpecialPool.c)
 *     MiDbgCopyMemory @ 0x14021AE1C (MiDbgCopyMemory.c)
 *     MiGetCcAccessLog @ 0x140423E34 (MiGetCcAccessLog.c)
 *     MiMapImageInSystemSpace @ 0x140497368 (MiMapImageInSystemSpace.c)
 *     MiUseLargeDriverPage @ 0x1404B0F54 (MiUseLargeDriverPage.c)
 *     MiFreeInitializationCode @ 0x1404B1698 (MiFreeInitializationCode.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MmTrimPagedPool @ 0x1404CCAF8 (MmTrimPagedPool.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140514AB0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmReturnChargesToLockPagedPool @ 0x1406B694C (MmReturnChargesToLockPagedPool.c)
 *     MmLogSystemShareablePfnInfo @ 0x1406BA5D8 (MmLogSystemShareablePfnInfo.c)
 *     MiBuildPagedPool @ 0x14081450C (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x14081469C (MiInitializeSystemPtes.c)
 *     MiCreateInitialSystemWsles @ 0x1408157CC (MiCreateInitialSystemWsles.c)
 *     MmFreeLoaderBlock @ 0x140817414 (MmFreeLoaderBlock.c)
 *     MiInitializePteInfo @ 0x140824BAC (MiInitializePteInfo.c)
 *     MiReturnDriverLoadPages @ 0x140834DD4 (MiReturnDriverLoadPages.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetAnyMultiplexedVm(int a1)
{
  __int64 v1; // rax
  char *v2; // rcx

  if ( a1 < 1 )
  {
    v1 = 200LL * a1;
    v2 = (char *)&unk_140381900;
  }
  else
  {
    v1 = 272LL * a1;
    v2 = (char *)&unk_14036D180;
  }
  return &v2[v1];
}
