/*
 * XREFs of MiInsertTbFlushEntry @ 0x14009C1B0
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140009834 (MiReplaceRotateWithDemandZero.c)
 *     MiEmptyWorkingSetHelper @ 0x140010BF0 (MiEmptyWorkingSetHelper.c)
 *     MiTrimPteWorker @ 0x140011034 (MiTrimPteWorker.c)
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140031CA0 (NtGetWriteWatch.c)
 *     MiFreePagedPoolPages @ 0x140035950 (MiFreePagedPoolPages.c)
 *     MiRevertValidPte @ 0x140036C60 (MiRevertValidPte.c)
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     NtResetWriteWatch @ 0x14003D7F0 (NtResetWriteWatch.c)
 *     MiZeroPage @ 0x14004E9F0 (MiZeroPage.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiRemoveMappedPtes @ 0x14005C210 (MiRemoveMappedPtes.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiFlushTbAsNeeded @ 0x14009BE70 (MiFlushTbAsNeeded.c)
 *     MiAgePte @ 0x14009DA30 (MiAgePte.c)
 *     MmMapViewInSystemCache @ 0x1400A2D00 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400A3510 (MiObtainSystemCacheView.c)
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400B0398 (MiFlushDirtyBitsToPfn.c)
 *     MiDeletePagablePteRange @ 0x1400B8270 (MiDeletePagablePteRange.c)
 *     MiClearNonPagedPtes @ 0x1400BC1C0 (MiClearNonPagedPtes.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiInitializeSystemPageTable @ 0x1400C42AC (MiInitializeSystemPageTable.c)
 *     MiMakeLargePageTable @ 0x1400C46E8 (MiMakeLargePageTable.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiGetPteFromCopyList @ 0x1400CEEDC (MiGetPteFromCopyList.c)
 *     MiReplacePageTablePage @ 0x1400D0B4C (MiReplacePageTablePage.c)
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 *     MiSetPagingOfDriver @ 0x1400DDBDC (MiSetPagingOfDriver.c)
 *     MiReplenishBitMap @ 0x1400E6290 (MiReplenishBitMap.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiOutPageSingleKernelStack @ 0x1400EAD50 (MiOutPageSingleKernelStack.c)
 *     MiDeletePageTableHierarchy @ 0x1400EB190 (MiDeletePageTableHierarchy.c)
 *     NtUnlockVirtualMemory @ 0x1400EB680 (NtUnlockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 *     MiReturnSystemPtes @ 0x1400F60D0 (MiReturnSystemPtes.c)
 *     MiZeroSystemPdes @ 0x1400F7190 (MiZeroSystemPdes.c)
 *     MiFlushHyperSpace @ 0x140102EA4 (MiFlushHyperSpace.c)
 *     MiZeroPageWorkMapping @ 0x14010FE88 (MiZeroPageWorkMapping.c)
 *     MiInsertLargeTbFlushEntry @ 0x140110068 (MiInsertLargeTbFlushEntry.c)
 *     MiZeroAndFlushPtes @ 0x1401188A4 (MiZeroAndFlushPtes.c)
 *     MiConvertPrivateToDemandZero @ 0x14011E33C (MiConvertPrivateToDemandZero.c)
 *     MiClearPteAccessed @ 0x140121C30 (MiClearPteAccessed.c)
 *     MiRevokeExecutePte @ 0x140125040 (MiRevokeExecutePte.c)
 *     MmSetPageProtection @ 0x140139650 (MmSetPageProtection.c)
 *     MiDeleteBootRange @ 0x140142F9C (MiDeleteBootRange.c)
 *     MiPfnRangeIsZero @ 0x140144C40 (MiPfnRangeIsZero.c)
 *     MiMapMdlCommon @ 0x14014EA10 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x140150654 (MiUnmapMdlCommon.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140152114 (MiDeprioritizeVirtualAddresses.c)
 *     MmProtectMdlSystemAddress @ 0x140217160 (MmProtectMdlSystemAddress.c)
 *     MmProtectSystemCacheView @ 0x14021A1C8 (MmProtectSystemCacheView.c)
 *     MmMapMemoryDumpMdlEx @ 0x14021B38C (MmMapMemoryDumpMdlEx.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MiAgePteWorker @ 0x14021CBF0 (MiAgePteWorker.c)
 *     MiJoinBitmapPages @ 0x1402201F0 (MiJoinBitmapPages.c)
 *     MmFreeSpecialPool @ 0x140220DA4 (MmFreeSpecialPool.c)
 *     MiDeleteSystemPte @ 0x140221900 (MiDeleteSystemPte.c)
 *     MiLargePageFault @ 0x140228A74 (MiLargePageFault.c)
 *     MiDeleteEnclavePage @ 0x1402295DC (MiDeleteEnclavePage.c)
 *     MiMoveDirtyBitsToPfns @ 0x140229C98 (MiMoveDirtyBitsToPfns.c)
 *     MiUnmapLargePages @ 0x14022E928 (MiUnmapLargePages.c)
 *     MiDeleteValidSystemPte @ 0x14022FBD0 (MiDeleteValidSystemPte.c)
 *     MiScrubLargeMappedPage @ 0x1402387C4 (MiScrubLargeMappedPage.c)
 *     MmDeleteShadowMapping @ 0x14043D51C (MmDeleteShadowMapping.c)
 *     MiEliminateZeroPages @ 0x1404D4270 (MiEliminateZeroPages.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 *     MiProtectAweRegion @ 0x1406E568C (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406E5880 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x1406E69F4 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406E6E70 (NtMapUserPhysicalPagesScatter.c)
 *     MiProtectEnclavePages @ 0x1406E8DE4 (MiProtectEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1406E9220 (MiTerminateHardwareEnclave.c)
 *     MiMarkBootKernelStack @ 0x14082EBE0 (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 *     MiFreeBootDriverPage @ 0x140837C4C (MiFreeBootDriverPage.c)
 *     MmFreeLoaderBlock @ 0x1408383C8 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140849448 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x1408574D4 (MiProtectSharedUserPage.c)
 *     MiReturnDriverLoadPages @ 0x14086BF50 (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140112EA0 (MiCompressTbFlushList.c)
 *     qsort @ 0x14015F450 (qsort.c)
 */

void __fastcall MiInsertTbFlushEntry(int *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdi
  int v8; // ecx
  unsigned int v9; // r8d
  char v10; // r11
  int *v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  size_t v17; // rcx
  char v18; // dl
  unsigned __int64 i; // rcx
  int *v20; // r11
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax

  v6 = 4096LL << (9 * (unsigned __int8)a4);
  v8 = *a1;
  if ( v8 != 1 )
  {
    v18 = *((_BYTE *)a1 + 4);
    if ( (v18 & 8) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *((_BYTE *)a1 + 4) = v18 | 8;
    if ( v8 )
    {
      for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
      {
        if ( i > 0xFFFFF6FFFFFFFFFFuLL )
          break;
      }
    }
  }
  v9 = a1[3];
  if ( v9 )
  {
    v10 = a1[1] & 4;
    if ( !v10 )
    {
      v11 = &a1[2 * v9 - 2];
      v12 = *((_QWORD *)v11 + 3);
      if ( ((v12 >> 10) & 3) == a4 )
      {
        v13 = *((_QWORD *)v11 + 3) & 0x3FFLL;
        if ( (v12 & 0xFFFFFFFFFFFFF000uLL) + v6 * (v13 + 1) == a2 && v13 + a3 <= 0x3FF && v13 + a3 > v13 )
        {
          *((_QWORD *)a1 + 2) += a3;
          *((_QWORD *)v11 + 3) = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)(v12 + a3)) & 0x3FF;
          return;
        }
      }
    }
    if ( !v10 )
    {
      v20 = &a1[2 * v9 - 2];
      v21 = *((_QWORD *)v20 + 3);
      if ( ((v21 >> 10) & 3) == a4 && (v21 & 0xFFFFFFFFFFFFF000uLL) == a3 * v6 + a2 )
      {
        v22 = v21 & 0x3FF;
        if ( v22 + a3 <= 0x3FF && v22 + a3 > v22 )
        {
          *((_QWORD *)a1 + 2) += a3;
          *((_QWORD *)v20 + 3) = (v21 - a3 * v6) ^ ((unsigned __int16)(v21 - a3 * v6) ^ (unsigned __int16)(v21 - a3 * v6 + a3)) & 0x3FF;
          return;
        }
      }
    }
  }
  if ( v9 >= a1[2] )
    goto LABEL_32;
  if ( a3 )
  {
    v14 = (unsigned __int64)(a4 & 3) << 10;
    while ( 1 )
    {
      v15 = 1024LL;
      if ( (unsigned __int64)(a3 - 1) <= 0x3FF )
        v15 = a3;
      a3 -= v15;
      v16 = v14 | a2 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v15 - 1) & 0x3FF;
      a2 += v6 * v15;
      *(_QWORD *)&a1[2 * a1[3]++ + 6] = v16;
      v17 = (unsigned int)a1[3];
      *((_QWORD *)a1 + 2) += v15;
      if ( (_DWORD)v17 == a1[2] && (a1[1] & 4) == 0 )
      {
        qsort(a1 + 6, v17, 8uLL, MiTbFlushSort);
        MiCompressTbFlushList(a1);
        v23 = (unsigned int)a1[3];
        if ( (_DWORD)v23 == a1[2] )
          break;
      }
      if ( !a3 )
        return;
    }
    if ( a3 )
    {
      *((_QWORD *)a1 + 2) = v23;
LABEL_32:
      *((_BYTE *)a1 + 5) = 1;
    }
  }
}
