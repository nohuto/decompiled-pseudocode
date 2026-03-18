/*
 * XREFs of MmUnmapLockedPages @ 0x140110450
 * Callers:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14008C6C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14008EC0C (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     SmFpFree @ 0x140091540 (SmFpFree.c)
 *     SmKmUnlockMdl @ 0x140097D04 (SmKmUnlockMdl.c)
 *     MiZeroPageWrite @ 0x1400990E8 (MiZeroPageWrite.c)
 *     MiUnlockFlushMdl @ 0x1400B5F10 (MiUnlockFlushMdl.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     MiValidateInPage @ 0x140138DF0 (MiValidateInPage.c)
 *     MiMapPageFileHash @ 0x14013C818 (MiMapPageFileHash.c)
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiPfCompleteCoalescedIo @ 0x140257C70 (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x14025B3B0 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x14025DA0C (MiFlushFileOnlyMdl.c)
 *     PspIumAllocatePhysicalPages @ 0x140285238 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x1402854F4 (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x1402A90EC (SmPrepareForFatalPageError.c)
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 *     PopFreeHiberContext @ 0x1405EF808 (PopFreeHiberContext.c)
 *     MiZeroPageFileFirstPage @ 0x14063CD20 (MiZeroPageFileFirstPage.c)
 *     IopCleanupFileObjectIosbRange @ 0x1407197B8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 *     ExpProfileDelete @ 0x1407C7A20 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1407C7F8C (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x14081AD7C (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x140832388 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiUnmapLockedPagesInUserSpace @ 0x1400C2218 (MiUnmapLockedPagesInUserSpace.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiMappingHasIoTracker @ 0x140110DA0 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x14013CDC4 (MiZeroAndFlushPtes.c)
 *     MiRetardMdl @ 0x140253D5C (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x14026D0BC (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v4; // ecx
  __int64 ByteOffset; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp

  v4 = 0;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v4 = MiRetardMdl(MemoryDescriptorList);
  if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapLockedPagesInUserSpace((unsigned __int64)BaseAddress, MemoryDescriptorList);
  }
  else
  {
    ByteOffset = MemoryDescriptorList->ByteOffset;
    v6 = (unsigned __int64)BaseAddress - v4;
    v7 = ((((_WORD)ByteOffset + (unsigned __int16)LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF)
        + (unsigned __int64)MemoryDescriptorList->ByteCount
        + 4095) >> 12;
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + ByteOffset;
    if ( (unsigned int)MiMappingHasIoTracker(v6) == 1 )
      MiZeroAndFlushPtes(v6, v7);
    if ( MmProtectFreedNonPagedPool == 1 )
      LODWORD(v7) = v7 + 1;
    if ( (dword_14044B16C & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes(&qword_1403CC5E0, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v7);
  }
}
