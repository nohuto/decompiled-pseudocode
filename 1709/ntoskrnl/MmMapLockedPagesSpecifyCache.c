/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14009A990
 * Callers:
 *     MiGetWorkingSetInfo @ 0x14000CC00 (MiGetWorkingSetInfo.c)
 *     CcCompleteAsyncRead @ 0x1400215D4 (CcCompleteAsyncRead.c)
 *     MiValidateInPage @ 0x1400CCA70 (MiValidateInPage.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     MiInitializeImageProtos @ 0x1400ECF10 (MiInitializeImageProtos.c)
 *     FsRtlCancelNotify @ 0x1401086F0 (FsRtlCancelNotify.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     KeFlushIoBuffers @ 0x1401180C0 (KeFlushIoBuffers.c)
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
 *     KiOpPatchCode @ 0x14020D3F4 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x140216F40 (MmMapLockedPages.c)
 *     MiFlushFileOnlyMdl @ 0x140222DFC (MiFlushFileOnlyMdl.c)
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 *     MiValidatePagefilePageHash @ 0x140232750 (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x140232A1C (MiWritePageFileHash.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x14024F774 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x14024FA30 (PspIumFreePhysicalPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14026784C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmFpAllocate @ 0x140272DD0 (SmFpAllocate.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140274F04 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmMapPage @ 0x140275E1C (SmMapPage.c)
 *     SmPrepareForFatalPageError @ 0x140276010 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x140277224 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140277414 (MdlInvariantPreProcessing1.c)
 *     PopAllocatePages @ 0x140432360 (PopAllocatePages.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x14044AD7C (WbMakeUserDataPagesKernelWritable.c)
 *     FsRtlNotifyFilterReportChange @ 0x14044CD00 (FsRtlNotifyFilterReportChange.c)
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 *     MmCopyVirtualMemory @ 0x1405084C0 (MmCopyVirtualMemory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140567030 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x14056765C (FsRtlNotifyCompleteIrp.c)
 *     ExLockUserBuffer @ 0x14056EEE8 (ExLockUserBuffer.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140575C50 (WbMakeUserExecutablePagesKernelWritable.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 *     AlpcpInitializeCompletionList @ 0x1406DD984 (AlpcpInitializeCompletionList.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 *     NtStartProfile @ 0x140760AE4 (NtStartProfile.c)
 *     ViAllocateMapRegisterFile @ 0x1407ACF6C (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x1407AE014 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x1407AE6CC (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1407C45E0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x1407C4E28 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x1407D3B2C (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140838CD8 (KiComputeNumaCosts.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x140028A58 (MiProtectionToCacheAttribute.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14009ABD0 (MiFillSystemPtes.c)
 *     MiMappingHasIoReferences @ 0x140119C0C (MiMappingHasIoReferences.c)
 *     MiIssueNoPtesBugcheck @ 0x14021A4D4 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x1402345EC (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x140448658 (MiMapLockedPagesInUserSpace.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  MEMORY_CACHING_TYPE v7; // r15d
  char *v8; // rcx
  signed int v9; // r14d
  unsigned __int64 v10; // rsi
  ULONG v11; // ecx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  unsigned int v14; // r12d
  ULONG_PTR v15; // rax
  unsigned __int64 v16; // rbp
  void *v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // r13d
  unsigned __int64 v20; // r9
  char v21; // si
  unsigned int v22; // esi
  CSHORT MdlFlags; // ax
  unsigned int v25; // eax
  int v26; // [rsp+68h] [rbp+10h] BYREF

  v7 = CacheType;
  v8 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
  if ( AccessMode )
    return (PVOID)MiMapLockedPagesInUserSpace(
                    (_DWORD)MemoryDescriptorList,
                    (_DWORD)v8,
                    CacheType,
                    (_DWORD)RequestedAddress,
                    Priority);
  v9 = Priority;
  v10 = (((unsigned __int16)v8 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
  if ( (Priority & 0x20) != 0 )
    goto LABEL_8;
  v11 = Priority & 0x3FFFFFFF;
  v12 = 512LL;
  if ( (Priority & 0x3FFFFFFF) != 0x10 )
    v12 = 2048LL;
  *(_QWORD *)&CacheType = ((qword_140388668 << 9) - qword_1403893A0) << 12;
  v13 = v11 == 16 ? 0x2000000LL : 0x4000000 / ((unsigned int)(v11 == 16) + 1);
  if ( *(_QWORD *)&CacheType >= v13
    || v12 < qword_1403893C0 && (unsigned int)v10 < qword_1403893C0 - v12
    || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
LABEL_8:
    v14 = v10;
    if ( MmProtectFreedNonPagedPool == 1 )
      v14 = v10 + 1;
    v15 = MiReservePtes((__int64)&qword_140389360, v14, *(__int64 *)&CacheType);
    v16 = v15;
    if ( v15 )
    {
      v17 = (void *)(MemoryDescriptorList->ByteOffset + ((__int64)(v15 << 25) >> 16));
      v18 = (v9 >> 31) & 0xFFFFFFFD;
      v19 = v18 + 4;
      if ( (v9 & 0x40000000) == 0 )
      {
        v19 = v18 + 4;
        if ( (MiFlags & 0x10000) == 0 )
          v19 = (v18 + 4) | 2;
      }
      if ( v7 )
      {
        if ( v7 == MmWriteCombined )
          v19 |= 0x18u;
      }
      else
      {
        v19 |= 8u;
      }
      if ( (int)MiFillSystemPtes(v16, v10, (int)MemoryDescriptorList + 48, v19, 0, (__int64)&v26) < 0 )
      {
        if ( (MemoryDescriptorList->MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
          MiIssueNoPtesBugcheck((unsigned int)v10);
        MiReleasePtes((__int64)&qword_140389360, v16, v14, v20);
        return 0LL;
      }
      else
      {
        MemoryDescriptorList->MdlFlags |= 1u;
        v21 = v26;
        MemoryDescriptorList->MappedSystemVa = v17;
        v22 = v21 & 1;
        if ( v22 )
        {
          MiMappingHasIoReferences(v17);
          MemoryDescriptorList->MdlFlags |= 0x800u;
        }
        if ( (dword_14040010C & 1) != 0 )
        {
          if ( MmProtectFreedNonPagedPool == 1 )
            v22 |= 2u;
          v25 = MiProtectionToCacheAttribute(v19);
          MiInsertPteTracker(MemoryDescriptorList, 0LL, v22, v25);
        }
        MdlFlags = MemoryDescriptorList->MdlFlags;
        if ( (MdlFlags & 0x10) != 0 )
          MemoryDescriptorList->MdlFlags = MdlFlags | 0x20;
        return v17;
      }
    }
    else
    {
      if ( (MemoryDescriptorList->MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
        MiIssueNoPtesBugcheck((unsigned int)v10);
      return 0LL;
    }
  }
  else
  {
    ++dword_140389388;
    return 0LL;
  }
}
