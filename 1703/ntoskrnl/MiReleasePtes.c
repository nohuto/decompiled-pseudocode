/*
 * XREFs of MiReleasePtes @ 0x1400A23A0
 * Callers:
 *     MiDeleteKernelStack @ 0x140023CD4 (MiDeleteKernelStack.c)
 *     MiUnmapSinglePage @ 0x1400254D0 (MiUnmapSinglePage.c)
 *     MiReleasePteCopyList @ 0x14002EDD4 (MiReleasePteCopyList.c)
 *     MiRemoveFromSystemSpace @ 0x140060690 (MiRemoveFromSystemSpace.c)
 *     MiZeroInParallelWorker @ 0x14007CF90 (MiZeroInParallelWorker.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MmCreateKernelStack @ 0x14010FBC0 (MmCreateKernelStack.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 *     MiBuildReservationCluster @ 0x140139AAC (MiBuildReservationCluster.c)
 *     MiDeleteZeroThreadContext @ 0x14015C1E0 (MiDeleteZeroThreadContext.c)
 *     MiDeleteProcessShadow @ 0x14017C830 (MiDeleteProcessShadow.c)
 *     MmDeleteProcessor @ 0x14020D358 (MmDeleteProcessor.c)
 *     MmCopyMemory @ 0x140210B00 (MmCopyMemory.c)
 *     MiExtendPagingFileMaximum @ 0x140219B30 (MiExtendPagingFileMaximum.c)
 *     MiReleasePageHash @ 0x140223E48 (MiReleasePageHash.c)
 *     MiScrubNodeLargePageList @ 0x140224CA4 (MiScrubNodeLargePageList.c)
 *     MiZeroAndConvertLargePage @ 0x140225624 (MiZeroAndConvertLargePage.c)
 *     MiReturnPteMappingPair @ 0x140225E00 (MiReturnPteMappingPair.c)
 *     MiValidateImagePfn @ 0x1404234F4 (MiValidateImagePfn.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1404515C8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 *     MiRelocateImageAgain @ 0x140511290 (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x140518C20 (MiRelocateImagePfn.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 *     MmFreeIndependentPages @ 0x14056B860 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     MmFreeMappingAddress @ 0x1405727F0 (MmFreeMappingAddress.c)
 *     MmReleaseDumpHibernateResources @ 0x140577870 (MmReleaseDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     MiCreateLargePfnBitMaps @ 0x1405BA7C0 (MiCreateLargePfnBitMaps.c)
 *     MmFreeNonCachedMemory @ 0x1406B4910 (MmFreeNonCachedMemory.c)
 *     MmFreeIsrStack @ 0x1406B8384 (MmFreeIsrStack.c)
 *     MiAddPagesToEnclave @ 0x1406BA74C (MiAddPagesToEnclave.c)
 *     MiAllocateEnclaveVad @ 0x1406BA9FC (MiAllocateEnclaveVad.c)
 *     MiDeleteEnclavePages @ 0x1406BB880 (MiDeleteEnclavePages.c)
 *     MiExpandPartitionIds @ 0x1406BCBCC (MiExpandPartitionIds.c)
 *     MiDeleteLargePfnBitMap @ 0x1406BFB38 (MiDeleteLargePfnBitMap.c)
 *     MiInitializeTbFlush @ 0x140802CC8 (MiInitializeTbFlush.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 *     MiInitializeGapFrames @ 0x1408165A8 (MiInitializeGapFrames.c)
 * Callees:
 *     MiReturnSystemPtes @ 0x1400821DC (MiReturnSystemPtes.c)
 *     MiAttemptCoalesce @ 0x1400849D0 (MiAttemptCoalesce.c)
 *     MiInsertCachedPte @ 0x1400A2790 (MiInsertCachedPte.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckPteRelease @ 0x140220610 (MiCheckPteRelease.c)
 */

char __fastcall MiReleasePtes(__int64 a1, _QWORD *a2, unsigned int a3)
{
  ULONG_PTR v3; // r13
  _QWORD *v4; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 BugCheckParameter4; // rsi
  unsigned __int64 v8; // r11
  __int64 v9; // rcx
  __int64 *v10; // r8
  __int64 *v11; // r10
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 *v16; // rdi
  int inserted; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 *v22; // rdi
  char v23; // al
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r9
  volatile signed __int32 *v26; // r8
  int v27; // eax
  unsigned __int64 v28; // rdx
  signed __int32 v30[8]; // [rsp+0h] [rbp-148h] BYREF
  int v31; // [rsp+30h] [rbp-118h]
  __int64 updated; // [rsp+38h] [rbp-110h] BYREF
  int v33; // [rsp+40h] [rbp-108h] BYREF
  __int16 v34; // [rsp+44h] [rbp-104h]
  __int64 v35; // [rsp+48h] [rbp-100h]
  __int64 v36; // [rsp+50h] [rbp-F8h]
  __int64 v37; // [rsp+58h] [rbp-F0h]

  v3 = a3;
  v4 = a2;
  if ( (__int64 *)a1 == &qword_14036D0A0 && (dword_1403E310C & 2) != 0 )
    MiCheckPteRelease(a2, a3);
  v6 = v3;
  BugCheckParameter4 = ((__int64)v4 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    BugCheckParameter4 >>= 4;
    v6 = v3 >> 4;
  }
  if ( (unsigned int)v3 >= 0x200 && (__int64 *)a1 == &qword_14036D0A0 )
  {
    v31 = 1;
    goto LABEL_22;
  }
  v31 = 0;
  v8 = v6 + BugCheckParameter4 - 1;
  if ( v8 >= *(_QWORD *)a1 )
    goto LABEL_53;
  if ( v6 > 1 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = (__int64 *)(v9 + 8 * (BugCheckParameter4 >> 6));
    v11 = (__int64 *)(v9 + 8 * (v8 >> 6));
    v12 = *v10;
    if ( v10 == v11 )
    {
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << BugCheckParameter4) & v12) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << BugCheckParameter4 )
        goto LABEL_53;
      goto LABEL_22;
    }
    if ( ((-1LL << BugCheckParameter4) & v12) != -1LL << BugCheckParameter4 )
      goto LABEL_53;
    v13 = v10 + 1;
    if ( v13 == v11 )
    {
LABEL_21:
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v8) & *v13) != 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v8 )
        goto LABEL_53;
      goto LABEL_22;
    }
    while ( *v13 == -1 )
    {
      if ( ++v13 == v11 )
        goto LABEL_21;
    }
LABEL_53:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)v4 << 25) >> 16, v3, BugCheckParameter4);
  }
  if ( v6 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
    goto LABEL_53;
LABEL_22:
  if ( (_DWORD)v3 )
  {
    do
    {
      *v4 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v4) )
        MiWritePteShadow(v14);
      ++v4;
    }
    while ( v15 != 1 );
  }
  v16 = &v4[-v3];
  if ( v31 )
    goto LABEL_49;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (inserted = MiInsertCachedPte(a1, v16, (unsigned int)v3), inserted != 1) )
  {
    updated = 0LL;
    v18 = MI_READ_PTE_LOCK_FREE(&updated);
    _InterlockedOr(v30, 0);
    updated = MiUpdatePageFileHighInPte(v18, (unsigned int)KiTbFlushTimeStamp);
    if ( (unsigned int)MiPteInShadowRange(&updated) )
      MiWritePteShadow(&updated);
    v19 = updated;
    if ( (_DWORD)v3 )
    {
      do
      {
        *v16 = v19;
        if ( (unsigned int)MiPteInShadowRange(v16) )
          MiWritePteShadow(v20);
        ++v16;
      }
      while ( v21 != 1 );
    }
    v22 = &v16[-v3];
    if ( !MiGetPteTimeStamp(v19) )
    {
      v23 = ~(unsigned __int8)*(_DWORD *)(a1 + 24);
      v35 = 20LL;
      v34 = 0;
      v33 = v23 & 2;
      v36 = 0LL;
      v37 = 0LL;
      MiInsertTbFlushEntry(&v33, (__int64)((_QWORD)v22 << 25) >> 16, v3, 0LL);
      MiFlushTbList(&v33);
    }
    v24 = BugCheckParameter4 & 0x1F;
    v25 = v6;
    v26 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
    if ( v24 + v6 > 0x20 )
    {
      if ( (BugCheckParameter4 & 0x1F) != 0 )
      {
        _InterlockedAnd(v26, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v24));
        v25 = v6 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
        ++v26;
      }
      if ( v25 >= 0x20 )
      {
        v28 = v25 >> 5;
        v25 += -32LL * (v25 >> 5);
        do
        {
          *v26++ = 0;
          --v28;
        }
        while ( v28 );
      }
      if ( !v25 )
        goto LABEL_49;
      v27 = (1 << v25) - 1;
    }
    else
    {
      if ( v6 == 32 )
      {
        *v26 = 0;
        goto LABEL_49;
      }
      v27 = ((1 << v6) - 1) << v24;
    }
    _InterlockedAnd(v26, ~v27);
LABEL_49:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v6);
    if ( v31 == 1 )
      LOBYTE(inserted) = MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v3 + 511) & 0xFFFFFE00, 1);
    else
      LOBYTE(inserted) = MiAttemptCoalesce(a1, BugCheckParameter4, v6);
  }
  return inserted;
}
