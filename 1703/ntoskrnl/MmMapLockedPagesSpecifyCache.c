/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x1400F8330
 * Callers:
 *     FsRtlCancelNotify @ 0x140018DC0 (FsRtlCancelNotify.c)
 *     KeFlushIoBuffers @ 0x140021430 (KeFlushIoBuffers.c)
 *     CcCompleteAsyncRead @ 0x14002887C (CcCompleteAsyncRead.c)
 *     MiGetWorkingSetInfo @ 0x140039594 (MiGetWorkingSetInfo.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1400533F8 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140055E00 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmMapPage @ 0x14005D83C (SmMapPage.c)
 *     MiMapPageFileHash @ 0x140075F48 (MiMapPageFileHash.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     MiValidateInPage @ 0x1400CB690 (MiValidateInPage.c)
 *     MiInitializeImageProtos @ 0x14010A158 (MiInitializeImageProtos.c)
 *     SmFpAllocate @ 0x140121890 (SmFpAllocate.c)
 *     MiValidatePagefilePageHash @ 0x14013B100 (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x14013B348 (MiWritePageFileHash.c)
 *     BgpFwAllocateMemory @ 0x140142DA8 (BgpFwAllocateMemory.c)
 *     KiOpPatchCode @ 0x140206A50 (KiOpPatchCode.c)
 *     MmMapLockedPages @ 0x14020F890 (MmMapLockedPages.c)
 *     MiFlushFileOnlyMdl @ 0x140218B04 (MiFlushFileOnlyMdl.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x14023A554 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x14023A67C (PspIumFreePhysicalPages.c)
 *     SmPrepareForFatalPageError @ 0x14024F9EC (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x1402509C4 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140250BB4 (MdlInvariantPreProcessing1.c)
 *     PopAllocatePages @ 0x14040DF10 (PopAllocatePages.c)
 *     FsRtlNotifyFilterReportChange @ 0x140431400 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x140432250 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyCompleteIrp @ 0x140432850 (FsRtlNotifyCompleteIrp.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x14043EF34 (WbMakeUserExecutablePagesKernelWritable.c)
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 *     MmCopyVirtualMemory @ 0x1405181F0 (MmCopyVirtualMemory.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405493C8 (WbMakeUserDataPagesKernelWritable.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 *     AlpcpInitializeCompletionList @ 0x14056B364 (AlpcpInitializeCompletionList.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     NtStartProfile @ 0x140720BEC (NtStartProfile.c)
 *     ResFwGetContext @ 0x140755458 (ResFwGetContext.c)
 *     ViAllocateMapRegisterFile @ 0x14076B29C (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x14076C348 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x14076CA00 (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140782250 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x140782A98 (VfFillAllocatePagesForMdl.c)
 *     KiComputeNumaCosts @ 0x140817D54 (KiComputeNumaCosts.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14001D68C (MiUserPdeOrAbove.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiZeroAndFlushPtes @ 0x140123AB4 (MiZeroAndFlushPtes.c)
 *     MiReferenceIoPages @ 0x140124F3C (MiReferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x1401253AC (MiIoSpaceIsConstant.c)
 *     MiMappingHasIoReferences @ 0x1401253CC (MiMappingHasIoReferences.c)
 *     MiAssignInitialPageAttribute @ 0x140163838 (MiAssignInitialPageAttribute.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiShowBadMapper @ 0x14020CCEC (MiShowBadMapper.c)
 *     MiIssueNoPtesBugcheck @ 0x1402129DC (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x140225958 (MiInsertPteTracker.c)
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
  MEMORY_CACHING_TYPE v6; // r14d
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rbx
  int v11; // ecx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  ULONG_PTR v14; // rax
  _QWORD *v15; // r13
  __int64 v16; // r10
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // r15d
  __int64 v21; // r14
  unsigned __int64 v22; // rdi
  unsigned __int8 v23; // r12
  int v24; // eax
  unsigned __int64 v25; // rdi
  PMDL v26; // r12
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rdi
  unsigned __int64 *v29; // r8
  __int64 IsConstant; // rbp
  ULONG_PTR v31; // rcx
  unsigned __int64 *v32; // r14
  unsigned __int64 v33; // rbx
  __int64 v34; // rsi
  MEMORY_CACHING_TYPE v35; // r14d
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rax
  __int64 CurrentIrql; // r9
  __int64 v39; // r9
  __int64 v40; // r8
  unsigned __int64 v41; // r11
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdx
  void *v45; // rbx
  __int64 v46; // rbp
  unsigned int v47; // ecx
  CSHORT MdlFlags; // cx
  unsigned int v49; // edi
  unsigned __int64 v50; // rbx
  __int64 v51; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v52; // [rsp+48h] [rbp-60h]
  __int64 v53; // [rsp+50h] [rbp-58h]
  unsigned __int64 *v54; // [rsp+58h] [rbp-50h]
  void *v55; // [rsp+60h] [rbp-48h]
  unsigned __int64 v56; // [rsp+68h] [rbp-40h]
  unsigned __int64 *v58; // [rsp+B0h] [rbp+8h]
  unsigned __int16 v59; // [rsp+B8h] [rbp+10h]
  MEMORY_CACHING_TYPE v60; // [rsp+C0h] [rbp+18h]

  v60 = CacheType;
  v6 = CacheType;
  if ( AccessMode )
    return MiMapLockedPagesInUserSpace(
             MemoryDescriptorList,
             LOBYTE(MemoryDescriptorList->StartVa) + (unsigned __int8)MemoryDescriptorList->ByteOffset,
             CacheType,
             RequestedAddress,
             Priority,
             Priority);
  v9 = (unsigned __int64 *)&MemoryDescriptorList[1];
  v10 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
       + (unsigned __int64)MemoryDescriptorList->ByteCount
       + 4095) >> 12;
  v11 = 0;
  v56 = v10;
  if ( (Priority & 0x20) == 0 )
  {
    *(_QWORD *)&CacheType = ((qword_14036C2D0 << 9) - qword_14036D0E0) << 12;
    LOBYTE(v11) = (Priority & 0x3FFFFFFF) == 16;
    if ( *(_QWORD *)&CacheType < (unsigned __int64)(0x4000000u / (v11 + 1)) )
    {
      v12 = 512LL;
      if ( (Priority & 0x3FFFFFFF) != 0x10 )
        v12 = 2048LL;
      if ( (unsigned int)v10 >= (unsigned __int64)(qword_14036D100 - v12)
        && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
        && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        ++dword_14036D0C8;
        return 0LL;
      }
    }
  }
  v13 = (unsigned int)v10;
  if ( MmProtectFreedNonPagedPool == 1 )
  {
    v13 = (unsigned int)(v10 + 1);
    if ( (_DWORD)v10 == -1 )
      return 0LL;
  }
  v14 = MiReservePtes((__int64)&qword_14036D0A0, v13, *(unsigned __int64 *)&CacheType);
  v15 = (_QWORD *)v14;
  if ( !v14 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 0x2000) == 0 )
    {
      if ( BugCheckOnFailure )
        MiIssueNoPtesBugcheck((unsigned int)v10);
    }
    return 0LL;
  }
  v52 = (unsigned __int64)&v9[v10];
  v16 = 0LL;
  v53 = 0LL;
  v17 = (__int64)(v14 << 25) >> 16;
  v18 = v17 + MemoryDescriptorList->ByteOffset;
  v51 = 0LL;
  v55 = (void *)v18;
  v19 = ((int)Priority >> 31) & 0xFFFFFFFD;
  v20 = v19 + 4;
  if ( (Priority & 0x40000000) == 0 )
  {
    v20 = v19 + 4;
    if ( (MiFlags & 0x10000) == 0 )
      v20 = (v19 + 4) | 2;
  }
  if ( v6 )
  {
    if ( v6 == MmWriteCombined )
      v20 |= 0x18u;
  }
  else
  {
    v20 |= 8u;
  }
  v21 = v20 & 0x1F;
  v22 = MmProtectToPteMask[v21] & 0xFFFF000000000E5EuLL | 0x21;
  v23 = word_14036C2A8;
  if ( (unsigned __int64)v15 < 0xFFFFF68000000000uLL || (unsigned __int64)v15 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_47;
  if ( (unsigned __int64)v15 >= 0xFFFFF6FB40000000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v15 == (_QWORD *)0xFFFFF6FB7DBEDF68LL )
    {
      v22 = MmProtectToPteMask[v21] & 0x7FFF000000000E5ELL | 0x8000000000000021uLL;
    }
    else if ( (v20 & 0x4000000) == 0 )
    {
      v22 = MmProtectToPteMask[v21] & 0x7FFF000000000E5ELL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove((unsigned __int64)v15) )
      v22 |= 4uLL;
    v16 = 0LL;
  }
  if ( (unsigned __int64)v15 <= 0xFFFFF6BFFFFFFF78uLL )
    v22 |= 4uLL;
  if ( v17 >= 0xFFFF800000000000uLL )
  {
    if ( byte_14036D700[((v17 >> 39) & 0x1FF) - 256] == 1
      || v17 >= 0xFFFFF68000000000uLL && v17 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      goto LABEL_48;
    }
    if ( v17 < qword_14036D870 || (v24 = HIBYTE(word_14036C2A8), v17 > qword_14036C5D0) )
      v24 = v23;
  }
  else
  {
    v24 = HIBYTE(word_14036C2A8);
  }
  if ( v24 )
LABEL_47:
    v22 |= 0x100uLL;
LABEL_48:
  if ( (v20 & 5) == 4 )
    v22 |= 0x42uLL;
  if ( (v20 & 0x40000000) != 0 )
    v22 &= ~4uLL;
  v25 = ((unsigned __int16)v22 ^ (unsigned __int16)(v23 << 8)) & 0x100 ^ v22;
  if ( (v20 & 0x8000000) != 0 )
    v25 &= ~0x100uLL;
  if ( (v20 & 0x4000000) != 0 )
    v25 |= 0x80uLL;
  v26 = MemoryDescriptorList;
  v54 = 0LL;
  v27 = 0xFFFFFA8000000000uLL;
  v28 = v25 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  v29 = 0LL;
  IsConstant = 0LL;
  do
  {
    v31 = *v9;
    v32 = v9;
    v33 = v28;
    v58 = v9;
    if ( *v9 > qword_14036C290
      || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v31 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    {
      if ( !v29 )
      {
        v54 = v9;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        IsConstant = MiIoSpaceIsConstant(*v9, 1LL, 0LL, CurrentIrql);
        if ( IsConstant )
        {
          while ( MiIsPfnInline(*v9) || IsConstant == MiIoSpaceIsConstant(v40, 1LL, v40, v39) )
          {
            if ( (unsigned __int64)++v9 >= v41 )
              goto LABEL_73;
          }
          IsConstant = v16;
        }
LABEL_73:
        __writecr8((unsigned __int8)v39);
      }
      if ( IsConstant )
      {
        v42 = *(_DWORD *)(IsConstant + 40);
      }
      else
      {
        if ( (int)MiReferenceIoPages(1, *v32, 1, v60, v16, (__int64)&v51) < 0 )
        {
          v49 = v56;
          v50 = (unsigned __int64)v55;
          MiZeroAndFlushPtes(v55, v56);
          MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)(((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v49);
          return 0LL;
        }
        v26->MdlFlags |= 0x800u;
        v59 = *(_WORD *)(*(_QWORD *)(v51 + 48) + 2 * ((*v32 & 0xFFFFFFFFFLL) - *(_QWORD *)(v51 + 40)));
        v53 = v51;
        v42 = v59 >> 14;
      }
      v20 &= 7u;
      if ( v42 )
      {
        if ( v42 == 2 )
          v20 |= 0x18u;
      }
      else
      {
        v20 |= 8u;
      }
      ValidPte = MiMakeValidPte((unsigned __int64)v15, 0LL, v20 | 0xA0000000);
      v35 = v60;
      goto LABEL_83;
    }
    v34 = 48 * v31 - 0x58000000000LL;
    if ( !*(_WORD *)(v34 + 32) )
      MiShowBadMapper(v31);
    v35 = v60;
    if ( (*(_BYTE *)(v34 + 34) & 0xC0) == 0xC0 )
      MiAssignInitialPageAttribute(v34, (unsigned int)v60, v29, v27);
    if ( v60 != *(unsigned __int8 *)(v34 + 34) >> 6 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v20, v34);
      LOBYTE(v20) = ProtectionPfnCompatible;
      ValidPte = MiMakeValidPte((unsigned __int64)v15, 0LL, ProtectionPfnCompatible | 0xA0000000);
LABEL_83:
      v33 = ValidPte;
    }
    *v15 = (v33 ^ (*v58 << 12)) & 0xFFFFFFFFF000LL ^ v33;
    if ( (unsigned int)MiPteInShadowRange(v15) )
      MiWritePteShadow(v43);
    v16 = 0LL;
    v29 = v54;
    v9 = v58 + 1;
    ++v15;
    v27 = 0xFFFFFA8000000000uLL;
    v44 = 1LL;
  }
  while ( (unsigned __int64)(v58 + 1) < v52 );
  v26->MdlFlags |= 1u;
  v45 = v55;
  v46 = v53;
  v26->MappedSystemVa = v55;
  if ( (dword_1403E310C & 1) != 0 )
  {
    v47 = v46 != 0;
    if ( MmProtectFreedNonPagedPool == 1 )
      v47 |= 2u;
    MiInsertPteTracker(v26, 0LL, v47, (unsigned int)v35);
  }
  if ( v46 )
    MiMappingHasIoReferences(v45, v44, v29, v27);
  MdlFlags = v26->MdlFlags;
  if ( (MdlFlags & 0x10) != 0 )
    v26->MdlFlags = MdlFlags | 0x20;
  return v45;
}
