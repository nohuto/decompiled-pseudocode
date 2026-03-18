/*
 * XREFs of MiChangePageAttribute @ 0x1401032F4
 * Callers:
 *     MiBuildForkPageTable @ 0x140002C30 (MiBuildForkPageTable.c)
 *     MiFillCombinePage @ 0x140025418 (MiFillCombinePage.c)
 *     MiSetPfnOwnedAndActive @ 0x1400269E4 (MiSetPfnOwnedAndActive.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x14007ADB0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400B2F20 (MiAssignNonPagedPoolPtes.c)
 *     MiCreateSharedZeroPages @ 0x1400B79A0 (MiCreateSharedZeroPages.c)
 *     MiGetPageChain @ 0x1400BB6F0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiCompletePrivateZeroFault @ 0x1400BC2F0 (MiCompletePrivateZeroFault.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiBuildMdlForMappedFileFault @ 0x140107600 (MiBuildMdlForMappedFileFault.c)
 *     MiInitializeReadInProgressPfn @ 0x140109270 (MiInitializeReadInProgressPfn.c)
 *     MiFindNonPagedPoolPages @ 0x14010E930 (MiFindNonPagedPoolPages.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiAddExpansionNonPagedPool @ 0x140160910 (MiAddExpansionNonPagedPool.c)
 *     MiCopySinglePage @ 0x140210384 (MiCopySinglePage.c)
 *     MiDuplicateCloneLeaf @ 0x140223024 (MiDuplicateCloneLeaf.c)
 *     MiComputeOptimalZeroPath @ 0x1408043E0 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140063C1C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAbortCombineScan @ 0x140103628 (MiAbortCombineScan.c)
 *     MiPageCombiningActive @ 0x1401036F8 (MiPageCombiningActive.c)
 *     MiFlushCacheForAttributeChange @ 0x140103734 (MiFlushCacheForAttributeChange.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // bl
  unsigned __int8 v6; // si
  int v7; // r14d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r13
  unsigned int v13; // eax
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v16[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_14036C958 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = MiLockPageInline(a1);
  v7 = *(unsigned __int8 *)(a1 + 34) >> 6;
  v8 = MiPageCombiningActive(0LL);
  v12 = (unsigned int)(v10 + 2);
  if ( v8 )
  {
    MiAbortCombineScan(a1, v9, v11);
    v3 = v12 | v3 & 0xFB;
  }
  LOBYTE(v13) = (_BYTE)a2 << 6;
  LOBYTE(v10) = ((_BYTE)a2 << 6) | *(_BYTE *)(a1 + 34) & 0x3F;
  *(_BYTE *)(a1 + 34) = v10;
  if ( v7 != 3 && (v3 & 4) == 0 )
  {
    if ( (v3 & (unsigned __int8)v12) != 0
      || (v10 = *(_BYTE *)(a1 + 31) & 0xF,
          _InterlockedOr(v16, 0),
          v13 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v10) & 0xF,
          v13 <= (unsigned int)v12)
      && ((v10 & 1) != 0 || v13 < (unsigned int)v12) )
    {
      LOBYTE(v13) = MiFlushEntireTbDueToAttributeChange(v10, v9, v11);
    }
    if ( a2 != 1 && v7 == 1 )
    {
      ++dword_14036C210;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v12);
      MiFlushCacheForAttributeChange((a1 + 0x58000000000LL) / 48, 1LL, a2);
      LOBYTE(v13) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v13) = v6;
    __writecr8(v6);
  }
  return v13;
}
