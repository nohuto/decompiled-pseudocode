/*
 * XREFs of MiInsertTbFlushEntry @ 0x140026270
 * Callers:
 *     MiUnmapMdlCommon @ 0x140001568 (MiUnmapMdlCommon.c)
 *     MiGetPteFromCopyList @ 0x140002458 (MiGetPteFromCopyList.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiFlushTbAsNeeded @ 0x140025F90 (MiFlushTbAsNeeded.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiZeroPage @ 0x1400299B0 (MiZeroPage.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiOutPageSingleKernelStack @ 0x1400520A0 (MiOutPageSingleKernelStack.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140052680 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiReplenishBitMap @ 0x14009E090 (MiReplenishBitMap.c)
 *     MiEmptyWorkingSetHelper @ 0x1400ACEE8 (MiEmptyWorkingSetHelper.c)
 *     MiRevokeExecutePte @ 0x1400B4C60 (MiRevokeExecutePte.c)
 *     MiFlushHyperSpace @ 0x1400B9164 (MiFlushHyperSpace.c)
 *     MiDeleteSystemPageTable @ 0x1400B9530 (MiDeleteSystemPageTable.c)
 *     MiReplacePageTablePage @ 0x1400B97E0 (MiReplacePageTablePage.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400BDA54 (MiFlushDirtyBitsToPfn.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1400C03C4 (MiInsertRecursiveTbFlushEntries.c)
 *     MiZeroPageWorkMapping @ 0x1400C0E24 (MiZeroPageWorkMapping.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400C39A0 (MiReplaceRotateWithDemandZero.c)
 *     MmSetPageProtection @ 0x1400C7020 (MmSetPageProtection.c)
 *     MmMapViewInSystemCache @ 0x1400DD850 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400DDFF0 (MiObtainSystemCacheView.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140124A90 (MmSetAddressRangeModifiedEx.c)
 *     MiRevertValidPte @ 0x140125BF0 (MiRevertValidPte.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiTrimPte @ 0x14012A7D0 (MiTrimPte.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x1401373A0 (MiInsertLargeTbFlushEntry.c)
 *     MiDeleteNonPagedPoolPte @ 0x140137420 (MiDeleteNonPagedPoolPte.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiMapMdlCommon @ 0x14013B6DC (MiMapMdlCommon.c)
 *     MiZeroAndFlushPtes @ 0x14013CDC4 (MiZeroAndFlushPtes.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiSetPagingOfDriver @ 0x14013F7B4 (MiSetPagingOfDriver.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MmMapMemoryDumpMdlEx @ 0x14014F088 (MmMapMemoryDumpMdlEx.c)
 *     MiClearSystemAccessBits @ 0x14017AFF0 (MiClearSystemAccessBits.c)
 *     MmProtectMdlSystemAddress @ 0x140254B70 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiTrimPteWorker @ 0x14025A4D0 (MiTrimPteWorker.c)
 *     MiJoinBitmapPages @ 0x14025B96C (MiJoinBitmapPages.c)
 *     MmFreeSpecialPool @ 0x14025CAE4 (MmFreeSpecialPool.c)
 *     MiLargePageFault @ 0x140261DA4 (MiLargePageFault.c)
 *     MiProtectAweRegion @ 0x14026271C (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1402629CC (MiRemoveUserPhysicalPagesVad.c)
 *     MiWriteAwePtes @ 0x140262D60 (MiWriteAwePtes.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiScrubLargeMappedPage @ 0x1402703B8 (MiScrubLargeMappedPage.c)
 *     MiEliminateZeroPages @ 0x1404B3970 (MiEliminateZeroPages.c)
 *     MmDeleteShadowMapping @ 0x14074F478 (MmDeleteShadowMapping.c)
 *     MiProtectEnclavePages @ 0x140752874 (MiProtectEnclavePages.c)
 *     MiInitializeTbFlush @ 0x14089D77C (MiInitializeTbFlush.c)
 *     MiMarkBootKernelStack @ 0x1408AC040 (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPage @ 0x1408ADE54 (MiFreeBootDriverPage.c)
 *     MiTradeBootImagePage @ 0x1408AE0E0 (MiTradeBootImagePage.c)
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 *     MiProtectSharedUserPage @ 0x1408CA06C (MiProtectSharedUserPage.c)
 *     MiReturnDriverLoadPages @ 0x1408E0BF0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x1400B06D0 (MiCompressTbFlushList.c)
 *     qsort @ 0x140189210 (qsort.c)
 */

unsigned __int64 __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned int v8; // r8d
  int v9; // r10d
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  size_t v14; // rcx
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax

  v6 = 4096LL << (9 * (unsigned __int8)a4);
  v7 = a2;
  if ( *(_DWORD *)a1 != 1 )
  {
    v15 = *(_BYTE *)(a1 + 4);
    if ( (v15 & 8) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a1 + 4) = v15 | 8;
  }
  v8 = *(_DWORD *)(a1 + 12);
  v9 = 0;
  if ( !v8 || (*(_BYTE *)(a1 + 4) & 4) != 0 )
  {
    result = 0LL;
  }
  else
  {
    result = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24);
    if ( ((result >> 10) & 3) != a4 )
      goto LABEL_11;
    result &= 0xFFFFFFFFFFFFF000uLL;
    v11 = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24) & 0x3FFLL;
    if ( result + v6 * (v11 + 1) != v7 )
      goto LABEL_11;
    result = v11 + a3;
    if ( v11 + a3 > 0x3FF || result <= v11 )
      goto LABEL_11;
    result = 1LL;
  }
  if ( (_DWORD)result )
  {
    v16 = a1 + 8LL * (v8 - 1);
    result = *(_QWORD *)(v16 + 24);
    *(_QWORD *)(a1 + 16) += a3;
    *(_QWORD *)(v16 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
    return result;
  }
LABEL_11:
  if ( v8 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 4) == 0 )
    {
      result = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24);
      if ( ((result >> 10) & 3) == a4 && (result & 0xFFFFFFFFFFFFF000uLL) == v7 + a3 * v6 )
      {
        result &= 0x3FFu;
        if ( result + a3 > result && result + a3 <= 0x3FF )
          v9 = 1;
      }
    }
  }
  if ( v9 )
  {
    v17 = a1 + 8LL * (v8 - 1);
    v18 = *(_QWORD *)(v17 + 24);
    *(_QWORD *)(a1 + 16) += a3;
    result = v18 - a3 * v6;
    *(_QWORD *)(v17 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
  }
  else if ( v8 >= *(_DWORD *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 5) = 1;
  }
  else if ( a3 )
  {
    v12 = (unsigned __int64)(a4 & 3) << 10;
    while ( 1 )
    {
      v13 = 1024LL;
      if ( (unsigned __int64)(a3 - 1) <= 0x3FF )
        v13 = a3;
      a3 -= v13;
      result = v12 | v7 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v13 - 1) & 0x3FF;
      v7 += v6 * v13;
      *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 12))++ + 24) = result;
      v14 = *(unsigned int *)(a1 + 12);
      *(_QWORD *)(a1 + 16) += v13;
      if ( (_DWORD)v14 == *(_DWORD *)(a1 + 8) && (*(_BYTE *)(a1 + 4) & 4) == 0 )
      {
        qsort((void *)(a1 + 24), v14, 8uLL, MiTbFlushSort);
        MiCompressTbFlushList(a1);
        result = *(unsigned int *)(a1 + 12);
        if ( (_DWORD)result == *(_DWORD *)(a1 + 8) )
          break;
      }
      if ( !a3 )
        return result;
    }
    if ( a3 )
    {
      *(_BYTE *)(a1 + 5) = 1;
      *(_QWORD *)(a1 + 16) = result;
    }
  }
  return result;
}
