/*
 * XREFs of MiReservePtes @ 0x140099750
 * Callers:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MmCreateKernelStack @ 0x140029020 (MmCreateKernelStack.c)
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiZeroInParallelWorker @ 0x1400CC570 (MiZeroInParallelWorker.c)
 *     MiMapSinglePage @ 0x1400CD194 (MiMapSinglePage.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiZeroLargePage @ 0x1400CFBFC (MiZeroLargePage.c)
 *     MiMapContiguousMemory @ 0x1401199F4 (MiMapContiguousMemory.c)
 *     MiCreatePteCopyList @ 0x140123E80 (MiCreatePteCopyList.c)
 *     MiBuildDynamicRegion @ 0x140138F04 (MiBuildDynamicRegion.c)
 *     MiReservePageHash @ 0x1401501B4 (MiReservePageHash.c)
 *     MmCopyMemory @ 0x140218220 (MmCopyMemory.c)
 *     MmMapMdl @ 0x14021A540 (MmMapMdl.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiScrubNodeLargePageList @ 0x140233A64 (MiScrubNodeLargePageList.c)
 *     MmInitializeProcessor @ 0x140425688 (MmInitializeProcessor.c)
 *     MiAllocateProcessShadow @ 0x14043CF0C (MiAllocateProcessShadow.c)
 *     MiRelocateImagePfn @ 0x140495F60 (MiRelocateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 *     MiRelocateImageAgain @ 0x140504210 (MiRelocateImageAgain.c)
 *     MiValidateImagePfn @ 0x140509814 (MiValidateImagePfn.c)
 *     MmAllocateMappingAddress @ 0x140583480 (MmAllocateMappingAddress.c)
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     MiCreateLargePfnBitMaps @ 0x1405B4DC8 (MiCreateLargePfnBitMaps.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     MmAllocateNonCachedMemory @ 0x1406E0780 (MmAllocateNonCachedMemory.c)
 *     MmAllocateDumpHibernateResources @ 0x1406E24F0 (MmAllocateDumpHibernateResources.c)
 *     MiAddPagesToEnclave @ 0x1406E74B8 (MiAddPagesToEnclave.c)
 *     MiAllocateEnclaveVad @ 0x1406E77E0 (MiAllocateEnclaveVad.c)
 *     MiExpandPartitionIds @ 0x1406EDE84 (MiExpandPartitionIds.c)
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 *     MiInitializePteInfo @ 0x14082D63C (MiInitializePteInfo.c)
 *     MiInitializeNonPagedPool @ 0x14082D7A8 (MiInitializeNonPagedPool.c)
 *     MiInitializeMirroring @ 0x14082ED28 (MiInitializeMirroring.c)
 *     MiBuildPagedPool @ 0x14082F958 (MiBuildPagedPool.c)
 *     MiInitializeTbFlush @ 0x140849448 (MiInitializeTbFlush.c)
 *     MiInitializeGapFrames @ 0x140849A88 (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x140856878 (MiMapDummyPages.c)
 *     MiInitializeKernelCfg @ 0x1408580E8 (MiInitializeKernelCfg.c)
 * Callees:
 *     MiCheckProcessorPteCache @ 0x140099E20 (MiCheckProcessorPteCache.c)
 *     MiFlushTbAsNeeded @ 0x14009BE70 (MiFlushTbAsNeeded.c)
 *     MiEmptyPteBins @ 0x1400A4EA0 (MiEmptyPteBins.c)
 *     RtlInterlockedSetClearRunEx @ 0x1400E5400 (RtlInterlockedSetClearRunEx.c)
 *     MiPteBinsNeedTrimming @ 0x1400F0AD8 (MiPteBinsNeedTrimming.c)
 *     MiExpandPtes @ 0x1400F5BA0 (MiExpandPtes.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiCheckPteReserve @ 0x14022BC94 (MiCheckPteReserve.c)
 */

ULONG_PTR __fastcall MiReservePtes(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // r14
  __int64 v5; // rsi
  unsigned __int64 v7; // rdi
  ULONG_PTR v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rcx
  int v12; // esi
  unsigned __int64 *v13; // rbx
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r11
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // r10
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 *v29; // rbx
  __int64 v30; // rcx
  unsigned int v31; // r9d
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // rcx
  __int64 v34; // r9
  unsigned int v35; // ecx
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // r9
  unsigned __int64 v41; // rdx
  int v42; // eax
  int v43; // eax
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int64 v49; // rcx
  __int64 *v50; // r9
  unsigned __int64 v51; // r10
  unsigned __int64 v52; // r11
  __int64 PteShadow; // rax
  __int64 v54; // r9
  unsigned __int64 v55; // [rsp+20h] [rbp-98h]
  __int64 v56; // [rsp+28h] [rbp-90h]
  unsigned __int64 *v57; // [rsp+40h] [rbp-78h]
  _QWORD v58[12]; // [rsp+58h] [rbp-60h] BYREF
  int v59; // [rsp+C0h] [rbp+8h]
  int v60; // [rsp+C8h] [rbp+10h]

  v60 = a2;
  v3 = 0;
  v4 = (unsigned int)a2;
  v5 = (unsigned int)a2;
  v7 = (unsigned int)a2;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    v7 = (unsigned __int64)(unsigned int)a2 >> 4;
  }
  else if ( (__int64 *)a1 == &qword_140389360 && (unsigned int)a2 <= 0x40uLL )
  {
    v8 = MiCheckProcessorPteCache((unsigned int)a2);
    if ( v8 )
      goto LABEL_121;
  }
  if ( (unsigned int)v4 >= 0x200 )
  {
    v9 = MiExpandPtes(a1, v4);
    v8 = v9;
    if ( v9 )
    {
      if ( (__int64 *)a1 == &qword_140389360 && (dword_14040010C & 2) != 0 )
        MiCheckPteReserve(v9, v4);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -(__int64)v7);
      return v8;
    }
    if ( (__int64 *)a1 == &qword_140389360 )
    {
LABEL_13:
      ++**(_DWORD **)(a1 + 32);
      return 0LL;
    }
  }
  v11 = 0LL;
  v59 = 0;
  v56 = 0LL;
  v12 = 0;
  while ( 2 )
  {
    while ( 1 )
    {
      v13 = (unsigned __int64 *)a1;
      v14 = *(_QWORD *)(a1 + 72);
      v57 = (unsigned __int64 *)a1;
      if ( *(_QWORD *)a1 )
        break;
LABEL_103:
      if ( !v11 || v11 == *(_QWORD *)(a1 + 80) )
      {
        if ( (*(_DWORD *)(a1 + 24) & 1) == 0 )
          goto LABEL_111;
        if ( (v12 & 1) != 0 || (v12 |= 1u, v59 = v12, v43 = MiEmptyPteBins(a1, 0LL, a3, 64LL), v11 = v56, v43 != 1) )
        {
          if ( (v12 & 2) != 0
            || (v12 |= 2u, v59 = v12, (unsigned int)MiPteBinsNeedTrimming(a1, a2, a3, 64LL) != 1)
            || (v46 = MiEmptyPteBins(a1, 1LL, v44, v45), v11 = v56, v46 != 1) )
          {
LABEL_111:
            v8 = MiExpandPtes(a1, (unsigned int)v4);
            if ( v8 )
              goto LABEL_120;
            if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (v12 & 4) != 0 )
              goto LABEL_13;
            v12 |= 4u;
            v59 = v12;
            MiEmptyPteBins(a1, 1LL, v47, v48);
            v11 = v56;
          }
        }
      }
    }
    a3 = *(_QWORD *)(a1 + 80);
    v56 = a3;
    if ( a3 )
    {
      v15 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 >= (unsigned __int64)a3 )
      {
        v58[1] = *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)a3 >> 6);
        v58[0] = v15 - a3;
        v13 = v58;
        v57 = v58;
        if ( v14 )
          v14 -= a3;
      }
      else
      {
        v56 = 0LL;
      }
    }
    v16 = *v13;
    v17 = v14;
    v18 = v13[1];
    v55 = *v13;
    if ( v14 >= *v13 )
      v17 = 0LL;
    a2 = v16 - 1;
    if ( !v7 )
    {
      v19 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_99;
    }
    while ( 2 )
    {
      if ( a2 - v17 + 1 < v7 )
      {
        v20 = -1LL;
        goto LABEL_94;
      }
      v21 = a2 - v7 + 1;
      v22 = v18 + 8 * (v21 >> 6);
      a3 = *(_QWORD *)(v18 + 8 * (v17 >> 6)) | ((1LL << (v17 & 0x3F)) - 1);
      v23 = (unsigned __int64 *)(v18 + 8 * (v17 >> 6));
      if ( v7 > 0x7F )
      {
        v24 = v22 + 8;
        if ( (v21 & 0x3F) == 0 )
          v24 = v18 + 8 * ((a2 - v7 + 1) >> 6);
        if ( a3 )
        {
          if ( *++v23 )
            goto LABEL_36;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v26, a3);
          if ( v25 )
            a2 = 64LL;
          else
            a2 = (unsigned int)(63 - v26);
        }
        else
        {
          a2 = 0LL;
        }
LABEL_41:
        a3 = (unsigned int)a2;
        v20 = ((__int64)((__int64)v23 - v18) >> 3 << 6) - (unsigned int)a2;
        if ( v20 > v21 )
          goto LABEL_87;
        a3 = (__int64)&v23[(v7 - (unsigned int)a2) >> 6];
        for ( ++v23; v23 != (unsigned __int64 *)a3; ++v23 )
        {
          if ( *v23 )
            goto LABEL_36;
        }
        a3 = ((_BYTE)v7 - (_BYTE)a2) & 0x3F;
        if ( (((_BYTE)v7 - (_BYTE)a2) & 0x3F) != 0 )
        {
          v25 = !_BitScanForward64(&a2, *v23);
          if ( v25 )
            a2 = 64LL;
          if ( (unsigned int)a2 < (unsigned int)a3 )
          {
LABEL_36:
            while ( (unsigned __int64)v23 <= v24 )
            {
              if ( !*++v23 )
              {
                v25 = !_BitScanReverse64((unsigned __int64 *)&v27, *(v23 - 1));
                if ( v25 )
                  a2 = 64LL;
                else
                  a2 = (unsigned int)(63 - v27);
                goto LABEL_41;
              }
            }
            goto LABEL_87;
          }
        }
        goto LABEL_92;
      }
      if ( v7 < 0x40 )
      {
        if ( v7 > 1 )
        {
          a2 >>= 6;
          v28 = 0LL;
          v29 = (unsigned __int64 *)(v18 + 8 * a2);
          while ( a3 != -1 )
          {
LABEL_57:
            v25 = !_BitScanForward64((unsigned __int64 *)&v30, a3);
            if ( v25 )
              LODWORD(v30) = 64;
            a2 = (unsigned int)(v28 + v30);
            if ( a2 >= v7 )
            {
              v34 = -v28;
LABEL_85:
              v38 = (__int64)((__int64)v23 - v18) >> 3 << 6;
              goto LABEL_86;
            }
            v31 = v7;
            v32 = ~a3;
            while ( 1 )
            {
              a2 = v32 >> (v31 >> 1);
              v32 &= a2;
              if ( !v32 )
                break;
              v31 -= v31 >> 1;
              if ( v31 <= 1 )
              {
                _BitScanForward64(&v33, v32);
                v34 = (unsigned int)v33;
                goto LABEL_85;
              }
            }
            if ( v23 == v29 )
              goto LABEL_87;
            v25 = !_BitScanReverse64((unsigned __int64 *)&v37, a3);
            a3 = v23[1];
            if ( v25 )
            {
              ++v23;
              v28 = 64LL;
            }
            else
            {
              v28 = (unsigned int)(63 - v37);
              ++v23;
            }
          }
          while ( 1 )
          {
            if ( (unsigned __int64)++v23 > v22 )
              goto LABEL_87;
            a3 = *v23;
            if ( *v23 != -1LL )
            {
              v28 = 0LL;
              goto LABEL_57;
            }
          }
        }
        if ( a3 == -1 )
        {
          do
          {
            if ( (unsigned __int64)++v23 > v22 )
              goto LABEL_87;
            a3 = *v23;
          }
          while ( *v23 == -1LL );
        }
        a3 = ~a3;
        _BitScanForward64(&v39, a3);
        v40 = (__int64)((__int64)v23 - v18) >> 3;
        v38 = (unsigned int)v39;
        v34 = v40 << 6;
LABEL_86:
        v20 = v38 + v34;
        if ( v20 > v21 )
          goto LABEL_87;
LABEL_92:
        if ( v20 == -1LL )
          goto LABEL_93;
        break;
      }
      while ( a3 >= 0 )
      {
LABEL_67:
        v25 = !_BitScanReverse64(&a2, a3);
        if ( v25 )
          v35 = 64;
        else
          v35 = 63 - a2;
        a3 = v35;
        v20 = ((((__int64)((__int64)v23 - v18) >> 3) + 1) << 6) - v35;
        if ( v20 > v21 )
          goto LABEL_87;
        a2 = v7 - v35;
        if ( v7 == v35 )
          goto LABEL_92;
        a3 = v23[1];
        ++v23;
        if ( a2 < 0x40 )
          goto LABEL_76;
        if ( !a3 )
        {
          a2 -= 64LL;
          if ( !a2 )
            goto LABEL_92;
          a3 = v23[1];
          ++v23;
LABEL_76:
          v25 = !_BitScanForward64(&v36, a3);
          if ( v25 )
            v36 = 64LL;
          if ( v36 >= a2 )
            goto LABEL_92;
        }
      }
      while ( (unsigned __int64)++v23 <= v22 )
      {
        a3 = *v23;
        if ( (*v23 & 0x8000000000000000uLL) == 0LL )
          goto LABEL_67;
      }
LABEL_87:
      v20 = -1LL;
LABEL_93:
      v16 = v55;
LABEL_94:
      if ( v17 )
      {
        v41 = v7 + v14;
        v17 = 0LL;
        if ( v7 + v14 > v16 )
          v41 = v16;
        a2 = v41 - 1;
        continue;
      }
      break;
    }
    v12 = v59;
    v19 = v20;
    v13 = v57;
LABEL_99:
    if ( v19 == -1LL )
    {
      v11 = v56;
      LODWORD(v4) = v60;
      goto LABEL_103;
    }
    v42 = RtlInterlockedSetClearRunEx(v13, v19, v7);
    v11 = v56;
    if ( !v42 )
    {
      LODWORD(v4) = v60;
      continue;
    }
    break;
  }
  v49 = v19 + v56;
  if ( v13 != v58 )
    v49 = v19;
  *(_QWORD *)(a1 + 72) = v49 + v7;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
    v49 *= 16LL;
  LODWORD(v4) = v60;
  v8 = *(_QWORD *)(a1 + 16) + 8 * v49;
LABEL_120:
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -(__int64)v7);
  v5 = (unsigned int)v4;
LABEL_121:
  if ( (*(_DWORD *)(a1 + 24) & 2) == 0 )
    goto LABEL_134;
  if ( (__int64 *)a1 == &qword_140389360 && (dword_14040010C & 2) != 0 )
    MiCheckPteReserve(v8, v5);
  if ( (unsigned int)v4 > 0x10 )
    goto LABEL_134;
  if ( (_DWORD)v4 )
  {
    v50 = (__int64 *)v8;
    v51 = 0xFFFFF6FB7DBED000uLL;
    v52 = 0xFFFFF6FB7DBED7F8uLL;
    do
    {
      PteShadow = *v50;
      if ( (unsigned __int64)v50 >= v51 && (unsigned __int64)v50 <= v52 )
        PteShadow = MiReadPteShadow(v50, *v50);
      if ( MiGetPteTimeStamp(PteShadow) )
        break;
      ++v3;
      v50 = (__int64 *)(v54 + 8);
    }
    while ( v3 < (unsigned int)v4 );
  }
  if ( v3 != (_DWORD)v4 )
LABEL_134:
    MiFlushTbAsNeeded(v8);
  return v8;
}
