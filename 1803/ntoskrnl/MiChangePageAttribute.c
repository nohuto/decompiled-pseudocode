/*
 * XREFs of MiChangePageAttribute @ 0x1400DA5EC
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140014310 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140017C10 (MiGetPageChain.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiInitializeReadInProgressPfn @ 0x140047D40 (MiInitializeReadInProgressPfn.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x14004FBC4 (MiPageAttributeBatchChangeNeeded.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiBuildMdlForMappedFileFault @ 0x140056680 (MiBuildMdlForMappedFileFault.c)
 *     MiMapPagesToZero @ 0x14009D760 (MiMapPagesToZero.c)
 *     MiCreateSharedZeroPages @ 0x1400A2810 (MiCreateSharedZeroPages.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400A5A10 (MiAssignNonPagedPoolPtes.c)
 *     MiSetPfnOwnedAndActive @ 0x1400C2954 (MiSetPfnOwnedAndActive.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x1401278E0 (MiAllocateKernelStackPages.c)
 *     MiFillCombinePage @ 0x140138480 (MiFillCombinePage.c)
 *     MiBuildForkPageTable @ 0x1401422DC (MiBuildForkPageTable.c)
 *     MiCopySinglePage @ 0x14015B52C (MiCopySinglePage.c)
 *     MiAddExpansionNonPagedPool @ 0x14017021C (MiAddExpansionNonPagedPool.c)
 *     MiDuplicateCloneLeaf @ 0x14026AB9C (MiDuplicateCloneLeaf.c)
 *     MiComputeOptimalZeroPath @ 0x14089CFE8 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiAbortCombineScan @ 0x140051BE8 (MiAbortCombineScan.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140051CE0 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiFlushCacheForAttributeChange @ 0x1400CF57C (MiFlushCacheForAttributeChange.c)
 *     MiPageCombiningActive @ 0x1400DA778 (MiPageCombiningActive.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int8 v6; // si
  int v7; // r14d
  char v8; // r8
  __int64 v9; // r9
  int v10; // r12d
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v15[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_1403CBDE8 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = MiLockPageInline(a1);
  v7 = *(unsigned __int8 *)(a1 + 34) >> 6;
  v10 = MiPageCombiningActive(0LL);
  if ( v10 )
  {
    MiAbortCombineScan(a1);
    v8 = *(_BYTE *)(a1 + 34);
  }
  v11 = 4294967291LL;
  if ( !v10 )
    v11 = a3;
  LOBYTE(v12) = (_BYTE)a2 << 6;
  *(_BYTE *)(a1 + 34) = ((_BYTE)a2 << 6) | v8 & 0x3F;
  if ( v7 != 3 && (v11 & 4) == 0 )
  {
    if ( (v11 & 2) != 0
      || (v11 = *(_BYTE *)(a1 + 31) & 0xF,
          _InterlockedOr(v15, 0),
          v12 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v11) & 0xF,
          v12 <= 2)
      && ((v11 & 1) != 0 || v12 < 2) )
    {
      LOBYTE(v12) = MiFlushEntireTbDueToAttributeChange(v11);
    }
    if ( a2 != 1 && v7 == 1 )
    {
      ++dword_1403CB6FC;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      MiFlushCacheForAttributeChange((a1 + 0x58000000000LL) / 48, 1LL, a2, v9);
      LOBYTE(v12) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v12) = v6;
    __writecr8(v6);
  }
  return v12;
}
