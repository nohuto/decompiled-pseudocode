/*
 * XREFs of MiReleasePtes @ 0x140074F70
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MmCreateKernelStack @ 0x140029020 (MmCreateKernelStack.c)
 *     MiDeleteKernelStack @ 0x1400328D0 (MiDeleteKernelStack.c)
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400B69C0 (MiRemoveFromSystemSpace.c)
 *     MiZeroInParallelWorker @ 0x1400CC570 (MiZeroInParallelWorker.c)
 *     MiUnmapSinglePage @ 0x1400CD154 (MiUnmapSinglePage.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiZeroLargePage @ 0x1400CFBFC (MiZeroLargePage.c)
 *     MmUnmapIoSpace @ 0x1401186A0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x1401199F4 (MiMapContiguousMemory.c)
 *     MiReleasePteCopyList @ 0x140125EF4 (MiReleasePteCopyList.c)
 *     MiDeleteProcessShadow @ 0x14017BF70 (MiDeleteProcessShadow.c)
 *     MmDeleteProcessor @ 0x1402143B8 (MmDeleteProcessor.c)
 *     MmCopyMemory @ 0x140218220 (MmCopyMemory.c)
 *     MmMapMdl @ 0x14021A540 (MmMapMdl.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiExtendPagingFileMaximum @ 0x14022501C (MiExtendPagingFileMaximum.c)
 *     MiReleasePageHash @ 0x1402326F8 (MiReleasePageHash.c)
 *     MiScrubNodeLargePageList @ 0x140233A64 (MiScrubNodeLargePageList.c)
 *     MiReturnPteMappingPair @ 0x140234C68 (MiReturnPteMappingPair.c)
 *     MiRelocateImagePfn @ 0x140495F60 (MiRelocateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 *     MiRelocateImageAgain @ 0x140504210 (MiRelocateImageAgain.c)
 *     MiValidateImagePfn @ 0x140509814 (MiValidateImagePfn.c)
 *     MmFreeMappingAddress @ 0x1405832F0 (MmFreeMappingAddress.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14059081C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     MiCreateLargePfnBitMaps @ 0x1405B4DC8 (MiCreateLargePfnBitMaps.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     MmFreeIndependentPages @ 0x1405D59B0 (MmFreeIndependentPages.c)
 *     MmFreeNonCachedMemory @ 0x1406E0910 (MmFreeNonCachedMemory.c)
 *     MmReleaseDumpHibernateResources @ 0x1406E2588 (MmReleaseDumpHibernateResources.c)
 *     MmFreeIsrStack @ 0x1406E5004 (MmFreeIsrStack.c)
 *     MiAddPagesToEnclave @ 0x1406E74B8 (MiAddPagesToEnclave.c)
 *     MiAllocateEnclaveVad @ 0x1406E77E0 (MiAllocateEnclaveVad.c)
 *     MiDeleteEnclavePages @ 0x1406E87CC (MiDeleteEnclavePages.c)
 *     MiDeleteLargePfnBitMap @ 0x1406ED6C0 (MiDeleteLargePfnBitMap.c)
 *     MiExpandPartitionIds @ 0x1406EDE84 (MiExpandPartitionIds.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 *     MiInitializePteInfo @ 0x14082D63C (MiInitializePteInfo.c)
 *     MiInitializeTbFlush @ 0x140849448 (MiInitializeTbFlush.c)
 *     MiInitializeGapFrames @ 0x140849A88 (MiInitializeGapFrames.c)
 * Callees:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertCachedPte @ 0x1400753D0 (MiInsertCachedPte.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiAttemptCoalesce @ 0x1400E6760 (MiAttemptCoalesce.c)
 *     MiReturnSystemPtes @ 0x1400F60D0 (MiReturnSystemPtes.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiCheckPteRelease @ 0x14022B9CC (MiCheckPteRelease.c)
 */

__int64 __fastcall MiReleasePtes(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  ULONG_PTR v4; // r13
  unsigned __int64 v5; // rdi
  ULONG_PTR v7; // r15
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned __int64 v9; // r14
  int v10; // r12d
  unsigned __int64 v11; // r11
  __int64 v12; // rcx
  __int64 *v13; // r8
  __int64 *v14; // r10
  __int64 v15; // rax
  __int64 *v16; // r8
  unsigned __int64 v17; // r11
  ULONG_PTR v18; // r10
  unsigned __int64 v19; // rdi
  __int64 result; // rax
  __int64 PteShadow; // rax
  __int64 updated; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r11
  __int64 v25; // rdx
  ULONG_PTR v26; // r10
  char v27; // al
  _KPROCESS *v28; // rdx
  ULONG_PTR v29; // r10
  unsigned __int64 v30; // r9
  volatile signed __int32 *v31; // r8
  int v32; // eax
  unsigned __int64 v33; // rdx
  signed __int32 v34[8]; // [rsp+0h] [rbp-148h] BYREF
  _QWORD v35[2]; // [rsp+30h] [rbp-118h] BYREF
  int v36; // [rsp+40h] [rbp-108h] BYREF
  __int16 v37; // [rsp+44h] [rbp-104h]
  __int64 v38; // [rsp+48h] [rbp-100h]
  __int64 v39; // [rsp+50h] [rbp-F8h]
  __int64 v40; // [rsp+58h] [rbp-F0h]

  v4 = a3;
  v5 = a2;
  if ( (__int64 *)a1 == &qword_140389360 && (dword_14040010C & 2) != 0 )
    MiCheckPteRelease(a2, a3);
  v7 = v4;
  BugCheckParameter4 = (__int64)(v5 - *(_QWORD *)(a1 + 16)) >> 3;
  v9 = v4;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    BugCheckParameter4 >>= 4;
    v9 = v4 >> 4;
  }
  if ( (unsigned int)v4 >= 0x200 && (__int64 *)a1 == &qword_140389360 )
  {
    v10 = 1;
    goto LABEL_22;
  }
  v10 = 0;
  v11 = v9 + BugCheckParameter4 - 1;
  if ( v11 >= *(_QWORD *)a1 )
    goto LABEL_63;
  if ( v9 > 1 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = (__int64 *)(v12 + 8 * (BugCheckParameter4 >> 6));
    v14 = (__int64 *)(v12 + 8 * (v11 >> 6));
    v15 = *v13;
    if ( v13 == v14 )
    {
      a4 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << BugCheckParameter4;
      if ( (a4 & v15) != a4 )
        goto LABEL_63;
      goto LABEL_22;
    }
    if ( ((-1LL << BugCheckParameter4) & v15) != -1LL << BugCheckParameter4 )
      goto LABEL_63;
    v16 = v13 + 1;
    if ( v16 == v14 )
    {
LABEL_21:
      a4 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11;
      if ( (a4 & *v16) != a4 )
        goto LABEL_63;
      goto LABEL_22;
    }
    while ( *v16 == -1 )
    {
      if ( ++v16 == v14 )
        goto LABEL_21;
    }
LABEL_63:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)(v5 << 25) >> 16, v4, BugCheckParameter4);
  }
  if ( v9 != 1 || !_bittest64(*(const signed __int64 **)(a1 + 8), BugCheckParameter4) )
    goto LABEL_63;
LABEL_22:
  v17 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (_DWORD)v4 )
  {
    v18 = v4;
    do
    {
      *(_QWORD *)v5 = 0LL;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= v17 )
        MiWritePteShadow(v5, 0LL);
      v5 += 8LL;
      --v18;
    }
    while ( v18 );
    v7 = v4;
  }
  v19 = v5 - 8 * v7;
  if ( v10 )
    goto LABEL_59;
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
  {
    result = MiInsertCachedPte(a1, v19, (unsigned int)v4, a4);
    if ( (_DWORD)result == 1 )
      return result;
    v17 = 0xFFFFF6FB7DBED7F8uLL;
  }
  v35[0] = 0LL;
  PteShadow = 0LL;
  if ( (unsigned __int64)v35 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v35 <= v17 )
    PteShadow = MiReadPteShadow(v35, 0LL);
  _InterlockedOr(v34, 0);
  updated = MiUpdatePageFileHighInPte(PteShadow, (unsigned int)KiTbFlushTimeStamp);
  v35[0] = updated;
  if ( (unsigned __int64)v35 >= v23 && (unsigned __int64)v35 <= v24 )
  {
    MiWritePteShadow(v35, updated);
    v23 = 0xFFFFF6FB7DBED000uLL;
  }
  v25 = v35[0];
  if ( (_DWORD)v4 )
  {
    v26 = v7;
    do
    {
      *(_QWORD *)v19 = v25;
      if ( v19 >= v23 && v19 <= v24 )
      {
        MiWritePteShadow(v19, v25);
        v23 = 0xFFFFF6FB7DBED000uLL;
      }
      v19 += 8LL;
      --v26;
    }
    while ( v26 );
  }
  if ( !MiGetPteTimeStamp(v25) )
  {
    v27 = ~(unsigned __int8)*(_DWORD *)(a1 + 24);
    v38 = 20LL;
    v37 = 0;
    v36 = v27 & 2;
    v39 = 0LL;
    v40 = 0LL;
    MiInsertTbFlushEntry(&v36, (__int64)((v19 << 25) - (v7 << 28)) >> 16, v7, 0LL);
    MiFlushTbList((__int64)&v36, v28);
  }
  v29 = BugCheckParameter4 & 0x1F;
  v30 = v9;
  v31 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
  if ( v29 + v9 > 0x20 )
  {
    if ( (BugCheckParameter4 & 0x1F) != 0 )
    {
      _InterlockedAnd(v31, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v29));
      v30 = v9 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
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
      goto LABEL_59;
    v32 = (1 << v30) - 1;
  }
  else
  {
    if ( v9 == 32 )
    {
      *v31 = 0;
      goto LABEL_59;
    }
    v32 = ((1 << v9) - 1) << v29;
  }
  _InterlockedAnd(v31, ~v32);
LABEL_59:
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v9);
  if ( v10 == 1 )
    return MiReturnSystemPtes(a1, BugCheckParameter4, ((_DWORD)v4 + 511) & 0xFFFFFE00, 1LL);
  else
    return MiAttemptCoalesce(a1, BugCheckParameter4, v9);
}
