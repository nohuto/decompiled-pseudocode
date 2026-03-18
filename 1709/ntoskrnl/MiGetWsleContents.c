/*
 * XREFs of MiGetWsleContents @ 0x1400E9E90
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsle @ 0x140058F20 (MiTerminateWsle.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiWalkPageTablesRecursively @ 0x14009D030 (MiWalkPageTablesRecursively.c)
 *     MiAgePte @ 0x14009DA30 (MiAgePte.c)
 *     MiSetVaAge @ 0x14009E9C0 (MiSetVaAge.c)
 *     MiDemoteCombinedPte @ 0x14009F660 (MiDemoteCombinedPte.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x1400DDBDC (MiSetPagingOfDriver.c)
 *     MiSetWsleProtection @ 0x1400E5A4C (MiSetWsleProtection.c)
 *     MiConvertAndFlushWsleVas @ 0x1400E6890 (MiConvertAndFlushWsleVas.c)
 *     MiGetPfnProtection @ 0x1400E69D0 (MiGetPfnProtection.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiGetVaAge @ 0x1400E97AC (MiGetVaAge.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 *     MiCrcStillIntact @ 0x1400EA158 (MiCrcStillIntact.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiCountSystemImageCommitment @ 0x14014BA18 (MiCountSystemImageCommitment.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140152114 (MiDeprioritizeVirtualAddresses.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x140215640 (MiEmptyWsPrivatePagesCallback.c)
 *     MiRecheckEPTAccessedVa @ 0x14021DDC0 (MiRecheckEPTAccessedVa.c)
 *     MiMoveDirtyBitsToPfns @ 0x140229C98 (MiMoveDirtyBitsToPfns.c)
 *     MmFreeLoaderBlock @ 0x1408383C8 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

char __fastcall MiGetWsleContents(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r8
  unsigned __int64 PteShadow; // rax

  v2 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v2;
  if ( (unsigned __int64)v2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v2, *v2);
  if ( (PteShadow & 1) != 0 )
    return (16 * ((PteShadow >> 60) & 7)) | HIBYTE(PteShadow) & 0xF;
  else
    return 10;
}
