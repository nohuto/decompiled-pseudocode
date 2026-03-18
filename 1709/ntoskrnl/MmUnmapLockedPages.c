/*
 * XREFs of MmUnmapLockedPages @ 0x140074D40
 * Callers:
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MiUnlockFlushMdl @ 0x1400A5008 (MiUnlockFlushMdl.c)
 *     MiValidateInPage @ 0x1400CCA70 (MiValidateInPage.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiZeroPageWrite @ 0x14011F014 (MiZeroPageWrite.c)
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiPfCompleteCoalescedIo @ 0x14021BACC (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x14021FAB0 (MiFlushComplete.c)
 *     MiFlushFileOnlyMdl @ 0x140222DFC (MiFlushFileOnlyMdl.c)
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x14024F774 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x14024FA30 (PspIumFreePhysicalPages.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x1402654CC (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14026784C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmFpFree @ 0x140272EDC (SmFpFree.c)
 *     SmKmUnlockMdl @ 0x140273F34 (SmKmUnlockMdl.c)
 *     SmPrepareForFatalPageError @ 0x140276010 (SmPrepareForFatalPageError.c)
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 *     MiZeroPageFileFirstPage @ 0x1405D4E68 (MiZeroPageFileFirstPage.c)
 *     IopCleanupFileObjectIosbRange @ 0x1406B4B00 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 *     PopFreeHiberContext @ 0x1406FB8E8 (PopFreeHiberContext.c)
 *     ExpProfileDelete @ 0x140760720 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140760D44 (NtStopProfile.c)
 *     ViFreeMapRegisterFile @ 0x1407ADC0C (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x1407C4E28 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiUnmapLockedPagesInUserSpace @ 0x14000EC64 (MiUnmapLockedPagesInUserSpace.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiZeroAndFlushPtes @ 0x1401188A4 (MiZeroAndFlushPtes.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiRetardMdl @ 0x140215E5C (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x140234808 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v4; // ecx
  ULONG ByteOffset; // edx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  int v10; // r11d
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+20h] [rbp-58h]
  unsigned __int64 v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-48h]

  v4 = 0;
  if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
    v4 = MiRetardMdl(MemoryDescriptorList);
  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
  {
    ByteOffset = MemoryDescriptorList->ByteOffset;
    v6 = (unsigned __int64)BaseAddress - v4;
    v7 = ((((_WORD)ByteOffset + (unsigned __int16)LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF)
        + (unsigned __int64)MemoryDescriptorList->ByteCount
        + 4095) >> 12;
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + ByteOffset;
    v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v14 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    LODWORD(v9) = 3;
    do
    {
      v10 = v9;
      v9 = (unsigned int)(v9 - 1);
      v11 = (_QWORD *)*(&v14 + v9);
      v12 = *v11;
      if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
        LOBYTE(v12) = MiReadPteShadow(v11, *v11);
      if ( (v12 & 1) == 0 )
        break;
      if ( (v12 & 0x80u) != 0LL )
      {
        for ( ; v10; --v10 )
          v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        break;
      }
    }
    while ( (_DWORD)v9 );
    v13 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v13) = MiReadPteShadow(v8, *(_QWORD *)v8);
    if ( (v13 & 0x200) != 0 )
      MiZeroAndFlushPtes(v6, v7);
    if ( MmProtectFreedNonPagedPool == 1 )
      LODWORD(v7) = v7 + 1;
    if ( (dword_14040010C & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes(&qword_140389360, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v7);
  }
  else
  {
    MiUnmapLockedPagesInUserSpace((unsigned __int64)BaseAddress, MemoryDescriptorList);
  }
}
