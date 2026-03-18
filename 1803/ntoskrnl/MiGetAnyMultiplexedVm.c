/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x1400493AC
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiProbeAndLockPrepare @ 0x140022150 (MiProbeAndLockPrepare.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiGetNextPageTable @ 0x14003DA90 (MiGetNextPageTable.c)
 *     MiIsCfgBitMapPageShared @ 0x14003DC60 (MiIsCfgBitMapPageShared.c)
 *     MiPfCompleteInPageSupport @ 0x14003F1DC (MiPfCompleteInPageSupport.c)
 *     MiSynchronizeSystemVa @ 0x14003F344 (MiSynchronizeSystemVa.c)
 *     MiLockStealSystemVm @ 0x14003F754 (MiLockStealSystemVm.c)
 *     MiRemoveFromSystemSpace @ 0x14004671C (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiMarkPteDirty @ 0x140048BD0 (MiMarkPteDirty.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiEncodeProtoFill @ 0x14004AAA0 (MiEncodeProtoFill.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiOutPageSingleKernelStack @ 0x1400520A0 (MiOutPageSingleKernelStack.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14007FE08 (MmQuerySystemWorkingSetInformation.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiCountSharedPages @ 0x1400A6330 (MiCountSharedPages.c)
 *     MiExpandPagedPool @ 0x1400C631C (MiExpandPagedPool.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400C8FB8 (MmAdjustWorkingSetSizeEx.c)
 *     MiOutSwapKernelStackPage @ 0x1400CBDA0 (MiOutSwapKernelStackPage.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiCapturePfnVm @ 0x140124730 (MiCapturePfnVm.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiMapPageFileHash @ 0x14013C818 (MiMapPageFileHash.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x14013F7B4 (MiSetPagingOfDriver.c)
 *     MiRecheckCombineVm @ 0x140143918 (MiRecheckCombineVm.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 *     MiCountSystemImageCommitment @ 0x140169A08 (MiCountSystemImageCommitment.c)
 *     MiDeleteBootRange @ 0x140178A94 (MiDeleteBootRange.c)
 *     MiFreeUnusedPfnPages @ 0x14017A360 (MiFreeUnusedPfnPages.c)
 *     MiGetNextNonGapPfnPage @ 0x14017A7D8 (MiGetNextNonGapPfnPage.c)
 *     MiFaultInPagedPool @ 0x14018630C (MiFaultInPagedPool.c)
 *     MiExceptionForMappedVa @ 0x140251EB4 (MiExceptionForMappedVa.c)
 *     MiGetFileOnlyRanges @ 0x140252864 (MiGetFileOnlyRanges.c)
 *     MiLockHotPatchPages @ 0x140255CEC (MiLockHotPatchPages.c)
 *     MmReplaceImportEntry @ 0x140256048 (MmReplaceImportEntry.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402577EC (MmRemoveSystemCacheFromDump.c)
 *     MmFreeSpecialPool @ 0x14025CAE4 (MmFreeSpecialPool.c)
 *     MiReleaseLargePteMappings @ 0x140267410 (MiReleaseLargePteMappings.c)
 *     MiConvertHiberPhasePages @ 0x140475478 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x14048548C (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1404855D8 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x14048566C (MiMarkNonPagedHiberPhasePages.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B3C20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x1404BD390 (MiMapImageInSystemSpace.c)
 *     HvTrimHive @ 0x140517868 (HvTrimHive.c)
 *     MiGetCcAccessLog @ 0x14052760C (MiGetCcAccessLog.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 *     MiFreeInitializationCode @ 0x1405F84EC (MiFreeInitializationCode.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 *     MmReturnChargesToLockPagedPool @ 0x14074DB80 (MmReturnChargesToLockPagedPool.c)
 *     MmLogSystemShareablePfnInfo @ 0x140750D14 (MmLogSystemShareablePfnInfo.c)
 *     MiMarkLargePageMappings @ 0x140898CBC (MiMarkLargePageMappings.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 *     MiAddLoaderHalIoMappings @ 0x14089C610 (MiAddLoaderHalIoMappings.c)
 *     MiInitializeNonPagedPool @ 0x14089CAE8 (MiInitializeNonPagedPool.c)
 *     MiMarkBootKernelStack @ 0x1408AC040 (MiMarkBootKernelStack.c)
 *     MiBuildPagedPool @ 0x1408AC498 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1408AC630 (MiInitializeSystemPtes.c)
 *     MiCreateInitialSystemWsles @ 0x1408AD704 (MiCreateInitialSystemWsles.c)
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 *     MiInitializeDynamicVa @ 0x1408C2DDC (MiInitializeDynamicVa.c)
 *     MiReturnDriverLoadPages @ 0x1408E0BF0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetAnyMultiplexedVm(int a1)
{
  __int64 v1; // rax
  char *v2; // rcx

  if ( a1 < 1 )
  {
    v1 = 192LL * a1;
    v2 = (char *)&unk_1403CFB40;
  }
  else
  {
    v1 = 272LL * a1;
    v2 = (char *)&unk_1403CC6C0;
  }
  return &v2[v1];
}
