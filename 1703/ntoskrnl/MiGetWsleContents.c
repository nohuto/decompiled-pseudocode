/*
 * XREFs of MiGetWsleContents @ 0x1400FBED0
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x14006D120 (MiSetPagingOfDriver.c)
 *     MiSetWsleProtection @ 0x14006D394 (MiSetWsleProtection.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiGetPfnProtection @ 0x140078704 (MiGetPfnProtection.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x14007C430 (MiEmptyWsPrivatePagesCallback.c)
 *     MiEmptyWorkingSetHelper @ 0x14007C56C (MiEmptyWorkingSetHelper.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14007F294 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertAndFlushWsleVas @ 0x14007FA24 (MiConvertAndFlushWsleVas.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiSetVaAge @ 0x1400FDA60 (MiSetVaAge.c)
 *     MiTrimThisWsle @ 0x1400FF1A0 (MiTrimThisWsle.c)
 *     MiCrcStillIntact @ 0x1400FF430 (MiCrcStillIntact.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiTerminateWsle @ 0x140105650 (MiTerminateWsle.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiCountSystemImageCommitment @ 0x1401443B8 (MiCountSystemImageCommitment.c)
 *     MiSimpleAgePte @ 0x1402155C0 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x140215910 (MiUpdateOldPte.c)
 *     MmFreeLoaderBlock @ 0x140817414 (MmFreeLoaderBlock.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiGetWsleContents(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v2 & 1) != 0 )
    return (16 * ((v2 >> 60) & 7)) | HIBYTE(v2) & 0xF;
  else
    return 10;
}
