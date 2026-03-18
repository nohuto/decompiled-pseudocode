/*
 * XREFs of MiInsertTbFlushEntry @ 0x1400FA110
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiFlushHyperSpace @ 0x14000C0C4 (MiFlushHyperSpace.c)
 *     MiReplacePageTablePage @ 0x140023E74 (MiReplacePageTablePage.c)
 *     MiGetPteFromCopyList @ 0x14002C478 (MiGetPteFromCopyList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1400344A8 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiDeletePagablePteRange @ 0x140062D20 (MiDeletePagablePteRange.c)
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     MiSetPagingOfDriver @ 0x14006D120 (MiSetPagingOfDriver.c)
 *     MiFlushDirtyBitsToPfn @ 0x140071DE8 (MiFlushDirtyBitsToPfn.c)
 *     MiRevokeExecutePte @ 0x140078450 (MiRevokeExecutePte.c)
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MiEmptyWorkingSetHelper @ 0x14007C56C (MiEmptyWorkingSetHelper.c)
 *     MiOutPageSingleKernelStack @ 0x14007C8D0 (MiOutPageSingleKernelStack.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14007F294 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertPrivateToDemandZero @ 0x14007F8B0 (MiConvertPrivateToDemandZero.c)
 *     MiReturnSystemPtes @ 0x1400821DC (MiReturnSystemPtes.c)
 *     MiZeroSystemPdes @ 0x140082A5C (MiZeroSystemPdes.c)
 *     MiReplenishBitMap @ 0x140084610 (MiReplenishBitMap.c)
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiClearNonPagedPtes @ 0x1400A7AB0 (MiClearNonPagedPtes.c)
 *     MiReleaseSystemCacheView @ 0x1400A8EF8 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400A9520 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400A9C20 (MiObtainSystemCacheView.c)
 *     MiZeroPageWorkMapping @ 0x1400B3330 (MiZeroPageWorkMapping.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiFreePagedPoolPages @ 0x1400CCF60 (MiFreePagedPoolPages.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x1400D10C0 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiAgePte @ 0x1400D5440 (MiAgePte.c)
 *     MiFlushTbAsNeeded @ 0x1400F9A20 (MiFlushTbAsNeeded.c)
 *     MiRevertValidPte @ 0x1400F9CF0 (MiRevertValidPte.c)
 *     NtUnlockVirtualMemory @ 0x1400FA8B0 (NtUnlockVirtualMemory.c)
 *     MiClearPteAccessed @ 0x1400FAFE0 (MiClearPteAccessed.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiTrimPte @ 0x1400FF080 (MiTrimPte.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiDeletePageTableHierarchy @ 0x1401052C0 (MiDeletePageTableHierarchy.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 *     MiInitializeSystemPageTable @ 0x14010A470 (MiInitializeSystemPageTable.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiReplaceRotateWithDemandZero @ 0x140122D2C (MiReplaceRotateWithDemandZero.c)
 *     MiZeroAndFlushPtes @ 0x140123AB4 (MiZeroAndFlushPtes.c)
 *     MiReturnNonPagedPoolVa @ 0x1401260D0 (MiReturnNonPagedPoolVa.c)
 *     MiGetSmallZeroPtes @ 0x140129AD0 (MiGetSmallZeroPtes.c)
 *     MmSetPageProtection @ 0x140135210 (MmSetPageProtection.c)
 *     MmMapMemoryDumpMdlEx @ 0x140137880 (MmMapMemoryDumpMdlEx.c)
 *     MiDeleteValidSystemPte @ 0x14013BF5C (MiDeleteValidSystemPte.c)
 *     MiDeleteSystemPte @ 0x14013E694 (MiDeleteSystemPte.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiPfnRangeIsZero @ 0x14015B174 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePage @ 0x14015B698 (MiDemoteLargePage.c)
 *     MiDeleteBootRange @ 0x14015D2A0 (MiDeleteBootRange.c)
 *     MiMapMdlCommon @ 0x14020F120 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x14020F570 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14020FE00 (MmProtectMdlSystemAddress.c)
 *     MmProtectSystemCacheView @ 0x1402126D8 (MmProtectSystemCacheView.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     MiJoinBitmapPages @ 0x140216A20 (MiJoinBitmapPages.c)
 *     MmFreeSpecialPool @ 0x14021753C (MmFreeSpecialPool.c)
 *     MiLargePageFault @ 0x14021C114 (MiLargePageFault.c)
 *     MiDeleteEnclavePage @ 0x14021C7C0 (MiDeleteEnclavePage.c)
 *     MiUnmapLargePages @ 0x140221B04 (MiUnmapLargePages.c)
 *     MiScrubLargeMappedPage @ 0x14022617C (MiScrubLargeMappedPage.c)
 *     MmDeleteShadowMapping @ 0x14041D938 (MmDeleteShadowMapping.c)
 *     MiEliminateZeroPages @ 0x1404CCB30 (MiEliminateZeroPages.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 *     MiProtectAweRegion @ 0x1406B89C4 (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1406B8B58 (MiRemoveUserPhysicalPagesVad.c)
 *     NtMapUserPhysicalPages @ 0x1406B9C78 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406BA0F4 (NtMapUserPhysicalPagesScatter.c)
 *     MiDeleteEnclavePages @ 0x1406BB880 (MiDeleteEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1406BBB84 (MiProtectEnclavePages.c)
 *     MiInitializeTbFlush @ 0x140802CC8 (MiInitializeTbFlush.c)
 *     MiMarkBootKernelStack @ 0x140809890 (MiMarkBootKernelStack.c)
 *     MiProtectSharedUserPage @ 0x14081347C (MiProtectSharedUserPage.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 *     MiFreeBootDriverPage @ 0x140816020 (MiFreeBootDriverPage.c)
 *     MmFreeLoaderBlock @ 0x140817414 (MmFreeLoaderBlock.c)
 *     MiReturnDriverLoadPages @ 0x140834DD4 (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x1400182F0 (MiCompressTbFlushList.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 */

void __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdi
  int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // r11
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  size_t v16; // rcx
  char v17; // dl
  unsigned __int64 i; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx

  v6 = 4096LL << (9 * (unsigned __int8)a4);
  v8 = *(_DWORD *)a1;
  if ( v8 != 1 )
  {
    v17 = *(_BYTE *)(a1 + 4);
    if ( (v17 & 8) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a1 + 4) = v17 | 8;
    if ( v8 )
    {
      for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
      {
        if ( i > 0xFFFFF6FFFFFFFFFFuLL )
          break;
      }
    }
  }
  v9 = *(_DWORD *)(a1 + 12);
  if ( v9 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 4) == 0 )
    {
      v10 = a1 + 8LL * (v9 - 1);
      v11 = *(_QWORD *)(v10 + 24);
      if ( ((v11 >> 10) & 3) == a4 )
      {
        v12 = *(_QWORD *)(v10 + 24) & 0x3FFLL;
        if ( (v11 & 0xFFFFFFFFFFFFF000uLL) + v6 * (v12 + 1) == a2 && v12 + a3 <= 0x3FF && v12 + a3 > v12 )
          goto LABEL_8;
      }
    }
    if ( (*(_BYTE *)(a1 + 4) & 4) == 0 )
    {
      v10 = a1 + 8LL * (v9 - 1);
      v19 = *(_QWORD *)(v10 + 24);
      if ( ((v19 >> 10) & 3) == a4 && (v19 & 0xFFFFFFFFFFFFF000uLL) == a3 * v6 + a2 )
      {
        v20 = v19 & 0x3FF;
        if ( v20 + a3 <= 0x3FF && v20 + a3 > v20 )
        {
          v11 = v19 - a3 * v6;
LABEL_8:
          *(_QWORD *)(a1 + 16) += a3;
          *(_QWORD *)(v10 + 24) = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v11 + a3)) & 0x3FF;
          return;
        }
      }
    }
  }
  if ( v9 >= *(_DWORD *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 5) = 1;
  }
  else if ( a3 )
  {
    v13 = (unsigned __int64)(a4 & 3) << 10;
    while ( 1 )
    {
      v14 = 1024LL;
      if ( (unsigned __int64)(a3 - 1) <= 0x3FF )
        v14 = a3;
      a3 -= v14;
      v15 = v13 | a2 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v14 - 1) & 0x3FF;
      a2 += v6 * v14;
      *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 12))++ + 24) = v15;
      v16 = *(unsigned int *)(a1 + 12);
      *(_QWORD *)(a1 + 16) += v14;
      if ( (_DWORD)v16 == *(_DWORD *)(a1 + 8) && (*(_BYTE *)(a1 + 4) & 4) == 0 )
      {
        qsort((void *)(a1 + 24), v16, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
        MiCompressTbFlushList(a1);
        if ( *(_DWORD *)(a1 + 12) == *(_DWORD *)(a1 + 8) )
          break;
      }
      if ( !a3 )
        return;
    }
    if ( a3 )
    {
      *(_QWORD *)(a1 + 16) = *(unsigned int *)(a1 + 12);
      *(_BYTE *)(a1 + 5) = 1;
    }
  }
}
