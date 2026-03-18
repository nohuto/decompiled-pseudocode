/*
 * XREFs of MiChangePageAttribute @ 0x1400ED32C
 * Callers:
 *     MiInitializeReadInProgressPfn @ 0x140026A90 (MiInitializeReadInProgressPfn.c)
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     MiBuildMdlForMappedFileFault @ 0x140028510 (MiBuildMdlForMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x140029AB0 (MiAllocateKernelStackPages.c)
 *     MiCompletePrivateZeroFault @ 0x140046F90 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1400484F0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiCreateSharedZeroPages @ 0x14004BDB0 (MiCreateSharedZeroPages.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiMapPagesToZero @ 0x14005C610 (MiMapPagesToZero.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400C38C0 (MiAssignNonPagedPoolPtes.c)
 *     MiSetPfnOwnedAndActive @ 0x1400C7EB8 (MiSetPfnOwnedAndActive.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1400CAB80 (MiPageAttributeBatchChangeNeeded.c)
 *     MiFillCombinePage @ 0x1400CD09C (MiFillCombinePage.c)
 *     MiBuildForkPageTable @ 0x1400CEA74 (MiBuildForkPageTable.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     MiAddExpansionNonPagedPool @ 0x14014DD28 (MiAddExpansionNonPagedPool.c)
 *     MiCopySinglePage @ 0x1402179B4 (MiCopySinglePage.c)
 *     MiDuplicateCloneLeaf @ 0x14022FED0 (MiDuplicateCloneLeaf.c)
 *     MiComputeOptimalZeroPath @ 0x140829810 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x1400ED698 (MiAbortCombineScan.c)
 *     MiPageCombiningActive @ 0x1400ED77C (MiPageCombiningActive.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400ED79C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiFlushCacheForAttributeChange @ 0x1400ED7F4 (MiFlushCacheForAttributeChange.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, unsigned int a2, char a3)
{
  char v3; // bl
  unsigned __int8 v6; // si
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v14[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140388B50 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = MiLockPageInline(a1);
  v7 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( (unsigned int)MiPageCombiningActive(0LL) )
  {
    MiAbortCombineScan(a1);
    v3 = -5;
  }
  LOBYTE(v11) = (_BYTE)a2 << 6;
  LOBYTE(v9) = ((_BYTE)a2 << 6) | *(_BYTE *)(a1 + 34) & 0x3F;
  *(_BYTE *)(a1 + 34) = v9;
  if ( v7 != 3 && (v3 & 4) == 0 )
  {
    if ( (v3 & 2) != 0
      || (v9 = *(_BYTE *)(a1 + 31) & 0xF,
          _InterlockedOr(v14, 0),
          v11 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v9) & 0xF,
          v11 <= 2)
      && ((v9 & 1) != 0 || v11 < 2) )
    {
      LOBYTE(v11) = MiFlushEntireTbDueToAttributeChange(v9, v8, v10);
    }
    if ( a2 != 1 && v7 == 1 )
    {
      ++dword_14038855C;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      MiFlushCacheForAttributeChange((a1 + 0x58000000000LL) / 48, 1LL, a2);
      LOBYTE(v11) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v11) = v6;
    __writecr8(v6);
  }
  return v11;
}
