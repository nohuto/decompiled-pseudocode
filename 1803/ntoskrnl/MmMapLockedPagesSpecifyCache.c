/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14010AF00
 * Callers:
 *     MiInitializeImageProtos @ 0x14004DF48 (MiInitializeImageProtos.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14008C6C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14008FE10 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmMapPage @ 0x140094084 (SmMapPage.c)
 *     SmFpAllocate @ 0x140096D84 (SmFpAllocate.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     FsRtlCancelNotify @ 0x1400B6BD0 (FsRtlCancelNotify.c)
 *     KeFlushIoBuffers @ 0x1400BA320 (KeFlushIoBuffers.c)
 *     CcCompleteAsyncRead @ 0x1400C1278 (CcCompleteAsyncRead.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     MiValidateInPage @ 0x140138DF0 (MiValidateInPage.c)
 *     MiMapPageFileHash @ 0x14013C818 (MiMapPageFileHash.c)
 *     MiGetWorkingSetInfo @ 0x140144490 (MiGetWorkingSetInfo.c)
 *     MiValidatePagefilePageHash @ 0x140153348 (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x14015359C (MiWritePageFileHash.c)
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     BgpFwAllocateMemory @ 0x1401655A0 (BgpFwAllocateMemory.c)
 *     CcLockSystemCacheBuffer @ 0x140220198 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x14024B784 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x140254950 (MmMapLockedPages.c)
 *     MiFlushFileOnlyMdl @ 0x14025DA0C (MiFlushFileOnlyMdl.c)
 *     PspIumAllocatePhysicalPages @ 0x140285238 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x1402854F4 (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x1402A90EC (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x1402AA340 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1402AA534 (MdlInvariantPreProcessing1.c)
 *     PopAllocatePages @ 0x1404773C8 (PopAllocatePages.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x14048AACC (WbMakeUserDataPagesKernelWritable.c)
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 *     AlpcpInitializeCompletionList @ 0x14052DD94 (AlpcpInitializeCompletionList.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140539770 (WbMakeUserExecutablePagesKernelWritable.c)
 *     FsRtlNotifyFilterReportChange @ 0x14055A7D0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14055B570 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x14055BB84 (FsRtlNotifyCompleteIrp.c)
 *     ExLockUserBuffer @ 0x14055FA68 (ExLockUserBuffer.c)
 *     MmCopyVirtualMemory @ 0x14059CD40 (MmCopyVirtualMemory.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     NtStartProfile @ 0x1407C7D2C (NtStartProfile.c)
 *     ViAllocateMapRegisterFile @ 0x14081A0D8 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x14081B180 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x14081B830 (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140831B50 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x140832388 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x14083B210 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x1408B32B4 (KiComputeNumaCosts.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x140056EF8 (MiProtectionToCacheAttribute.c)
 *     MiFillSystemPtes @ 0x14010B150 (MiFillSystemPtes.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiMappingHasIoReferences @ 0x14013CCF0 (MiMappingHasIoReferences.c)
 *     MiIssueNoPtesBugcheck @ 0x140256A90 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x14026CEA4 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x1405BA250 (MiMapLockedPagesInUserSpace.c)
 */

PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  ULONG ByteOffset; // ecx
  signed int v9; // ebp
  unsigned __int64 v10; // rsi
  ULONG v11; // ecx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // r14
  void *v17; // rdi
  unsigned int v18; // eax
  int v19; // edx
  int v20; // eax
  CSHORT MdlFlags; // cx
  char v22; // si
  CSHORT v23; // cx
  unsigned int v24; // esi
  unsigned int v26; // eax
  int v27; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v28; // [rsp+78h] [rbp+10h]

  ByteOffset = MemoryDescriptorList->ByteOffset;
  if ( AccessMode )
    return (PVOID)MiMapLockedPagesInUserSpace(
                    (_DWORD)MemoryDescriptorList,
                    ByteOffset + LODWORD(MemoryDescriptorList->StartVa),
                    CacheType,
                    (_DWORD)RequestedAddress,
                    Priority);
  v9 = Priority;
  v10 = (((ByteOffset + LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF)
       + (unsigned __int64)MemoryDescriptorList->ByteCount
       + 4095) >> 12;
  if ( (Priority & 0x20) == 0 )
  {
    v11 = Priority & 0x3FFFFFFF;
    v12 = 512LL;
    if ( (Priority & 0x3FFFFFFF) != 0x10 )
      v12 = 2048LL;
    v13 = v11 == 16 ? 0x2000000LL : 0x4000000 / ((unsigned int)(v11 == 16) + 1);
    if ( ((qword_1403CB868 << 9) - qword_1403CC618) << 12 < v13
      && (v12 >= qword_1403CC638 || (unsigned int)v10 >= qword_1403CC638 - v12)
      && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      ++dword_1403CC608;
      return 0LL;
    }
  }
  v14 = v10;
  if ( MmProtectFreedNonPagedPool == 1 )
    v14 = v10 + 1;
  v15 = MiReservePtes(&qword_1403CC5E0, v14);
  v16 = v15;
  if ( v15 )
  {
    v17 = (void *)(MemoryDescriptorList->ByteOffset + (v15 << 25 >> 16));
    v18 = (v9 >> 31) & 0xFFFFFFFD;
    v19 = v18 + 4;
    v28 = v18 + 4;
    if ( (v9 & 0x40000000) == 0 )
    {
      v19 = v18 + 4;
      v28 = v18 + 4;
      if ( (MiFlags & 0x10000) == 0 )
      {
        v19 = (v18 + 4) | 2;
        v28 = v19;
      }
    }
    if ( CacheType )
    {
      if ( CacheType != MmWriteCombined )
        goto LABEL_14;
      v19 |= 0x18u;
    }
    else
    {
      v19 |= 8u;
    }
    v28 = v19;
LABEL_14:
    v20 = MiFillSystemPtes(v16, v10, (int)MemoryDescriptorList + 48, v19, 0, (__int64)&v27);
    MdlFlags = MemoryDescriptorList->MdlFlags;
    if ( v20 < 0 )
    {
      if ( (MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
        MiIssueNoPtesBugcheck((unsigned int)v10);
      MiReleasePtes(&qword_1403CC5E0, v16, v14);
      return 0LL;
    }
    else
    {
      v22 = v27;
      v23 = MdlFlags | 1;
      MemoryDescriptorList->MappedSystemVa = v17;
      MemoryDescriptorList->MdlFlags = v23;
      v24 = v22 & 1;
      if ( v24 )
      {
        MiMappingHasIoReferences(v17);
        MemoryDescriptorList->MdlFlags |= 0x800u;
        v23 = MemoryDescriptorList->MdlFlags;
      }
      if ( (dword_14044B16C & 1) != 0 )
      {
        if ( MmProtectFreedNonPagedPool == 1 )
          v24 |= 2u;
        v26 = MiProtectionToCacheAttribute(v28);
        MiInsertPteTracker(MemoryDescriptorList, 0LL, v24, v26);
        v23 = MemoryDescriptorList->MdlFlags;
      }
      if ( (v23 & 0x10) != 0 )
        MemoryDescriptorList->MdlFlags = v23 | 0x20;
      return v17;
    }
  }
  if ( (MemoryDescriptorList->MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
    MiIssueNoPtesBugcheck((unsigned int)v10);
  return 0LL;
}
