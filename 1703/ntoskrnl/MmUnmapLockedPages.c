/*
 * XREFs of MmUnmapLockedPages @ 0x1400A3B30
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14001505C (MiUnlockFlushMdl.c)
 *     MiZeroPageWrite @ 0x14002FFC4 (MiZeroPageWrite.c)
 *     SmKmUnlockMdl @ 0x140039E90 (SmKmUnlockMdl.c)
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140055574 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140055E00 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     MiMapPageFileHash @ 0x140075F48 (MiMapPageFileHash.c)
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     MiValidateInPage @ 0x1400CB690 (MiValidateInPage.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiPfCompleteCoalescedIo @ 0x140213BC8 (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x140216300 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x140218B04 (MiFlushFileOnlyMdl.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x14023A554 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x14023A67C (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x14024F9EC (SmPrepareForFatalPageError.c)
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 *     PopFreeHiberContext @ 0x140577660 (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x1405BA518 (MiZeroPageFileFirstPage.c)
 *     IopCleanupFileObjectIosbRange @ 0x140688B20 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 *     ExpProfileDelete @ 0x1407208B0 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140720E4C (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x14076BF40 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x140782A98 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiZeroAndFlushPtes @ 0x140123AB4 (MiZeroAndFlushPtes.c)
 *     MiRetardMdl @ 0x14020E700 (MiRetardMdl.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemovePteTracker @ 0x140225B70 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  __int64 v2; // r8
  unsigned int v4; // ecx
  __int64 ByteOffset; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  int i; // eax
  unsigned __int64 v10; // r11

  v4 = 0;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v4 = MiRetardMdl(MemoryDescriptorList);
  if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapLockedPagesInUserSpace(BaseAddress, MemoryDescriptorList, v2);
  }
  else
  {
    ByteOffset = MemoryDescriptorList->ByteOffset;
    v7 = (unsigned __int64)BaseAddress - v4;
    v8 = ((((_WORD)ByteOffset + (unsigned __int16)LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF)
        + (unsigned __int64)MemoryDescriptorList->ByteCount
        + 4095) >> 12;
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + ByteOffset;
    for ( i = MI_IS_PHYSICAL_ADDRESS(v7); i; --i )
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (MI_READ_PTE_LOCK_FREE(v10) & 0x200) != 0 )
      MiZeroAndFlushPtes(v7, v8);
    if ( MmProtectFreedNonPagedPool == 1 )
      LODWORD(v8) = v8 + 1;
    if ( (dword_1403E310C & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v8);
  }
}
