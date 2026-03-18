/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x1400C0094
 * Callers:
 *     MiOutSwapKernelStackPage @ 0x140002130 (MiOutSwapKernelStackPage.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14000ABF8 (MmAdjustWorkingSetSizeEx.c)
 *     MiPfCompleteInPageSupport @ 0x14002083C (MiPfCompleteInPageSupport.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400B69C0 (MiRemoveFromSystemSpace.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiProbeAndLockPrepare @ 0x1400BEF50 (MiProbeAndLockPrepare.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x1400D00F0 (MiJumpStackTarget.c)
 *     MiAcquireProperVm @ 0x1400D5208 (MiAcquireProperVm.c)
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x1400DDBDC (MiSetPagingOfDriver.c)
 *     MiCapturePfnVm @ 0x1400E6A5C (MiCapturePfnVm.c)
 *     MiOutPageSingleKernelStack @ 0x1400EAD50 (MiOutPageSingleKernelStack.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400F4A18 (MmQuerySystemWorkingSetInformation.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiMarkPteDirty @ 0x140117FA4 (MiMarkPteDirty.c)
 *     MiLockPagedAddress @ 0x140120470 (MiLockPagedAddress.c)
 *     MiEncodeProtoFill @ 0x14012459C (MiEncodeProtoFill.c)
 *     MiProtoFault @ 0x1401269B8 (MiProtoFault.c)
 *     MiDeleteBootRange @ 0x140142F9C (MiDeleteBootRange.c)
 *     MiFreeUnusedPfnPages @ 0x140144320 (MiFreeUnusedPfnPages.c)
 *     MiCountSystemImageCommitment @ 0x14014BA18 (MiCountSystemImageCommitment.c)
 *     MiExceptionForMappedVa @ 0x140213B6C (MiExceptionForMappedVa.c)
 *     MiDeletePteRange @ 0x1402151D4 (MiDeletePteRange.c)
 *     MiTranslatePageForCopy @ 0x140217C58 (MiTranslatePageForCopy.c)
 *     MiLockHotPatchPages @ 0x140219014 (MiLockHotPatchPages.c)
 *     MmReplaceImportEntry @ 0x1402193DC (MmReplaceImportEntry.c)
 *     MmProtectSystemCacheView @ 0x14021A1C8 (MmProtectSystemCacheView.c)
 *     MmRemoveSystemCacheFromDump @ 0x14021B580 (MmRemoveSystemCacheFromDump.c)
 *     MmFreeSpecialPool @ 0x140220DA4 (MmFreeSpecialPool.c)
 *     MiDbgCopyMemory @ 0x1402276C0 (MiDbgCopyMemory.c)
 *     MiRecheckCombineVm @ 0x140231A64 (MiRecheckCombineVm.c)
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 *     MiGetCcAccessLog @ 0x140446910 (MiGetCcAccessLog.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404D3B60 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140542AC8 (MiUseLargeDriverPage.c)
 *     MiFreeInitializationCode @ 0x14058F3A0 (MiFreeInitializationCode.c)
 *     MmTrimPagedPool @ 0x1405D9B2C (MmTrimPagedPool.c)
 *     MmReturnChargesToLockPagedPool @ 0x1406E3484 (MmReturnChargesToLockPagedPool.c)
 *     MmLogSystemShareablePfnInfo @ 0x1406E734C (MmLogSystemShareablePfnInfo.c)
 *     MiInitializePteInfo @ 0x14082D63C (MiInitializePteInfo.c)
 *     MiInitializeSystemPtes @ 0x14082F554 (MiInitializeSystemPtes.c)
 *     MiBuildPagedPool @ 0x14082F958 (MiBuildPagedPool.c)
 *     MmFreeLoaderBlock @ 0x1408383C8 (MmFreeLoaderBlock.c)
 *     MiCreateInitialSystemWsles @ 0x140857248 (MiCreateInitialSystemWsles.c)
 *     MiReturnDriverLoadPages @ 0x14086BF50 (MiReturnDriverLoadPages.c)
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
    v2 = (char *)&unk_14038B880;
  }
  else
  {
    v1 = 272LL * a1;
    v2 = (char *)&unk_140389440;
  }
  return &v2[v1];
}
