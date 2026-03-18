/*
 * XREFs of MiReleasePtes @ 0x140110560
 * Callers:
 *     MiDeleteKernelStack @ 0x140025C60 (MiDeleteKernelStack.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiRemoveFromSystemSpace @ 0x14004671C (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiDeleteProcessShadow @ 0x1400704F8 (MiDeleteProcessShadow.c)
 *     MmFreeIndependentPages @ 0x1400AD1B0 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     MiReleasePteCopyList @ 0x1400C8214 (MiReleasePteCopyList.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 *     MmCreateKernelStack @ 0x14012FD20 (MmCreateKernelStack.c)
 *     MiZeroLargePage @ 0x140138310 (MiZeroLargePage.c)
 *     MiUnmapSinglePage @ 0x140138538 (MiUnmapSinglePage.c)
 *     MiZeroInParallelWorker @ 0x1401386E0 (MiZeroInParallelWorker.c)
 *     MiMapContiguousMemory @ 0x14013A054 (MiMapContiguousMemory.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     MiReturnPteMappingPair @ 0x1401407C4 (MiReturnPteMappingPair.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MmCopyMemory @ 0x14015B270 (MmCopyMemory.c)
 *     MmDeleteProcessor @ 0x14025258C (MmDeleteProcessor.c)
 *     MmMapMdl @ 0x140256AE0 (MmMapMdl.c)
 *     MiExtendPagingFileMaximum @ 0x14025F210 (MiExtendPagingFileMaximum.c)
 *     MiReleasePageHash @ 0x14026BFA8 (MiReleasePageHash.c)
 *     MiScrubNodeLargePageList @ 0x14026C284 (MiScrubNodeLargePageList.c)
 *     MiRelocateImagePfn @ 0x1404AFB00 (MiRelocateImagePfn.c)
 *     MiRelocateImageAgain @ 0x1404F16CC (MiRelocateImageAgain.c)
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14057A8C0 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiValidateImagePfn @ 0x1405BA580 (MiValidateImagePfn.c)
 *     MmFreeMappingAddress @ 0x1405E1FA0 (MmFreeMappingAddress.c)
 *     MmReleaseDumpHibernateResources @ 0x1405EFA0C (MmReleaseDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     MiCreateLargePfnBitMaps @ 0x14064A598 (MiCreateLargePfnBitMaps.c)
 *     MmFreeNonCachedMemory @ 0x14074B840 (MmFreeNonCachedMemory.c)
 *     MmFreeIsrStack @ 0x14074F430 (MmFreeIsrStack.c)
 *     MiAddPagesToEnclave @ 0x140750E84 (MiAddPagesToEnclave.c)
 *     MiAllocateEnclaveVad @ 0x1407511B4 (MiAllocateEnclaveVad.c)
 *     MiDeleteEnclavePages @ 0x14075220C (MiDeleteEnclavePages.c)
 *     MiDeleteLargePfnBitMap @ 0x140756B40 (MiDeleteLargePfnBitMap.c)
 *     MiExpandPartitionIds @ 0x140757314 (MiExpandPartitionIds.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 *     MiInitializeTbFlush @ 0x14089D77C (MiInitializeTbFlush.c)
 *     MiInitializePteInfo @ 0x1408AC9D0 (MiInitializePteInfo.c)
 *     MiInitializeGapFrames @ 0x1408BAAB8 (MiInitializeGapFrames.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1408E0A50 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiReturnSystemPtes @ 0x14004A1E8 (MiReturnSystemPtes.c)
 *     MiAttemptCoalesce @ 0x14004A270 (MiAttemptCoalesce.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiInsertCachedPte @ 0x1401109A0 (MiInsertCachedPte.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiCheckPteRelease @ 0x140266F24 (MiCheckPteRelease.c)
 */

char __fastcall MiReleasePtes(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR v3; // r13
  unsigned __int64 v4; // rbx
  __int64 v6; // r14
  unsigned __int64 BugCheckParameter4; // rdi
  unsigned __int64 v8; // rbp
  int v9; // r12d
  unsigned __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r10
  _QWORD *v13; // rdx
  _QWORD *v14; // r9
  bool v15; // zf
  _QWORD *v16; // rdx
  unsigned __int64 v17; // r11
  ULONG_PTR v18; // r10
  unsigned __int64 v19; // rbx
  int inserted; // eax
  __int64 v21; // rax
  unsigned int v22; // r10d
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // r11
  __int64 v26; // rdx
  ULONG_PTR v27; // r10
  __int64 v28; // r10
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // r9
  volatile signed __int32 *v31; // r8
  int v32; // eax
  unsigned __int64 v33; // rdx
  signed __int32 v35[8]; // [rsp+0h] [rbp-148h] BYREF
  _QWORD v36[2]; // [rsp+30h] [rbp-118h] BYREF
  int v37; // [rsp+40h] [rbp-108h] BYREF
  __int16 v38; // [rsp+44h] [rbp-104h]
  __int64 v39; // [rsp+48h] [rbp-100h]
  __int64 v40; // [rsp+50h] [rbp-F8h]
  __int64 v41; // [rsp+58h] [rbp-F0h]

  v3 = (unsigned int)a3;
  v4 = a2;
  if ( (__int64 *)a1 == &qword_1403CC5E0 && (dword_14044B16C & 2) != 0 )
    MiCheckPteRelease(a2, (unsigned int)a3);
  v6 = v3;
  BugCheckParameter4 = (__int64)(v4 - *(_QWORD *)(a1 + 16)) >> 3;
  v8 = v3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    BugCheckParameter4 >>= 4;
    v8 = v3 >> 4;
  }
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_1403CC5E0 )
  {
    v9 = 1;
    goto LABEL_22;
  }
  v9 = 0;
  v10 = BugCheckParameter4 + v8 - 1;
  if ( v10 >= *(_QWORD *)a1 )
    goto LABEL_58;
  if ( v8 > 1 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)(v11 + 8 * (BugCheckParameter4 >> 6));
    v13 = (_QWORD *)(v11 + 8 * (BugCheckParameter4 >> 6));
    v14 = (_QWORD *)(v11 + 8 * (v10 >> 6));
    if ( v13 == v14 )
    {
      a3 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << BugCheckParameter4;
      v15 = (a3 & v12) == a3;
    }
    else
    {
      if ( ((-1LL << BugCheckParameter4) & v12) != -1LL << BugCheckParameter4 )
        goto LABEL_58;
      v16 = v13 + 1;
      if ( v16 != v14 )
      {
        while ( *v16 == -1LL )
        {
          if ( ++v16 == v14 )
            goto LABEL_20;
        }
        goto LABEL_58;
      }
LABEL_20:
      a3 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v10;
      v15 = (a3 & *v16) == a3;
    }
    if ( v15 )
      goto LABEL_22;
LABEL_58:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)(v4 << 25) >> 16, v3, BugCheckParameter4);
  }
  if ( v8 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
    goto LABEL_58;
LABEL_22:
  v17 = 0xFFFFF6FB7DBED000uLL;
  if ( (_DWORD)v3 )
  {
    v18 = v3;
    do
    {
      *(_QWORD *)v4 = ZeroPte;
      if ( v4 >= v17 && v4 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v4, ZeroPte, a3);
      v4 += 8LL;
      --v18;
    }
    while ( v18 );
  }
  v19 = v4 - 8 * v3;
  if ( v9 )
    goto LABEL_54;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (inserted = MiInsertCachedPte(a1, v19, (unsigned int)v3), inserted != 1) )
  {
    v36[0] = 0LL;
    v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v36);
    _InterlockedOr(v35, v22);
    v36[0] = MiUpdatePageFileHighInPte(v21, (unsigned int)KiTbFlushTimeStamp);
    if ( MiPteInShadowRange((unsigned __int64)v36) )
      MiWritePteShadow((__int64)v36, v23, v24);
    v26 = v36[0];
    if ( (_DWORD)v3 )
    {
      v27 = v3;
      do
      {
        *(_QWORD *)v19 = v26;
        if ( v19 >= v25 && v19 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v19, v26, v24);
        v19 += 8LL;
        --v27;
      }
      while ( v27 );
      v6 = v3;
    }
    if ( !MiGetPteTimeStamp(v26) )
    {
      v37 = ~(unsigned __int8)*(_DWORD *)(a1 + 24) & 2;
      v39 = 20LL;
      v38 = 0;
      v40 = v28;
      v41 = v28;
      MiInsertTbFlushEntry((__int64)&v37, (__int64)((v19 << 25) - (v3 << 28)) >> 16, v6, 0);
      MiFlushTbList(&v37);
    }
    v29 = BugCheckParameter4 & 0x1F;
    v30 = v8;
    v31 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
    if ( v29 + v8 > 0x20 )
    {
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v31, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v29));
        v30 = v8 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
        ++v31;
      }
      if ( v30 >= 0x20 )
      {
        v33 = v30 >> 5;
        v30 += -32LL * (v30 >> 5);
        do
        {
          *v31++ = 0;
          --v33;
        }
        while ( v33 );
      }
      if ( !v30 )
        goto LABEL_54;
      v32 = (1 << v30) - 1;
    }
    else
    {
      if ( v8 == 32 )
      {
        *v31 = 0;
        goto LABEL_54;
      }
      v32 = ((1 << v8) - 1) << v29;
    }
    _InterlockedAnd(v31, ~v32);
LABEL_54:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v8);
    if ( v9 == 1 )
      LOBYTE(inserted) = MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v3 + 511) & 0xFFFFFE00, 1);
    else
      LOBYTE(inserted) = MiAttemptCoalesce(a1, BugCheckParameter4, v8);
  }
  return inserted;
}
