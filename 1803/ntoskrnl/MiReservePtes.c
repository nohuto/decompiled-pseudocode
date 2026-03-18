/*
 * XREFs of MiReservePtes @ 0x14010E5B0
 * Callers:
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiReserveLowPrioritySystemPtes @ 0x14003CAA0 (MiReserveLowPrioritySystemPtes.c)
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiCreatePteCopyList @ 0x1400C613C (MiCreatePteCopyList.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 *     MmCreateKernelStack @ 0x14012FD20 (MmCreateKernelStack.c)
 *     MiMapSinglePage @ 0x140138578 (MiMapSinglePage.c)
 *     MiMapContiguousMemory @ 0x14013A054 (MiMapContiguousMemory.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MmCopyMemory @ 0x14015B270 (MmCopyMemory.c)
 *     MiBuildDynamicRegion @ 0x14017677C (MiBuildDynamicRegion.c)
 *     MiReservePageHash @ 0x14017E168 (MiReservePageHash.c)
 *     MmMapMdl @ 0x140256AE0 (MmMapMdl.c)
 *     MiScrubNodeLargePageList @ 0x14026C284 (MiScrubNodeLargePageList.c)
 *     MmInitializeProcessor @ 0x14047BD90 (MmInitializeProcessor.c)
 *     MiRelocateImagePfn @ 0x1404AFB00 (MiRelocateImagePfn.c)
 *     MiRelocateImageAgain @ 0x1404F16CC (MiRelocateImageAgain.c)
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x140512DBC (MiAllocateProcessShadow.c)
 *     MmAllocateMappingAddress @ 0x140572870 (MmAllocateMappingAddress.c)
 *     MiValidateImagePfn @ 0x1405BA580 (MiValidateImagePfn.c)
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     MmAllocateDumpHibernateResources @ 0x140614550 (MmAllocateDumpHibernateResources.c)
 *     MiCreateLargePfnBitMaps @ 0x14064A598 (MiCreateLargePfnBitMaps.c)
 *     MmAllocateNonCachedMemory @ 0x14074B6C0 (MmAllocateNonCachedMemory.c)
 *     MiAddPagesToEnclave @ 0x140750E84 (MiAddPagesToEnclave.c)
 *     MiAllocateEnclaveVad @ 0x1407511B4 (MiAllocateEnclaveVad.c)
 *     MiExpandPartitionIds @ 0x140757314 (MiExpandPartitionIds.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 *     MiInitializeMirroring @ 0x14089C980 (MiInitializeMirroring.c)
 *     MiInitializeNonPagedPool @ 0x14089CAE8 (MiInitializeNonPagedPool.c)
 *     MiInitializeTbFlush @ 0x14089D77C (MiInitializeTbFlush.c)
 *     MiBuildPagedPool @ 0x1408AC498 (MiBuildPagedPool.c)
 *     MiInitializePteInfo @ 0x1408AC9D0 (MiInitializePteInfo.c)
 *     MiInitializeGapFrames @ 0x1408BAAB8 (MiInitializeGapFrames.c)
 *     MiMapDummyPages @ 0x1408C7D9C (MiMapDummyPages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1408E0A50 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiFlushTbAsNeeded @ 0x140025F90 (MiFlushTbAsNeeded.c)
 *     RtlInterlockedSetClearRunEx @ 0x14004A3B0 (RtlInterlockedSetClearRunEx.c)
 *     MiExpandPtes @ 0x14004A560 (MiExpandPtes.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiPteBinsNeedTrimming @ 0x140080E4C (MiPteBinsNeedTrimming.c)
 *     MiEmptyPteBins @ 0x1400DAC70 (MiEmptyPteBins.c)
 *     MiCheckProcessorPteCache @ 0x14010ECE0 (MiCheckProcessorPteCache.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiCheckPteReserve @ 0x1402671EC (MiCheckPteReserve.c)
 */

ULONG_PTR __fastcall MiReservePtes(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // rdi
  ULONG_PTR v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v10; // rcx
  int v11; // esi
  unsigned __int64 *v12; // rbx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r11
  __int64 v24; // r9
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // r10
  unsigned int v27; // edx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 *v31; // r9
  unsigned int v32; // r9d
  __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  bool v35; // sf
  __int64 v36; // rdx
  unsigned int v37; // ecx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  unsigned int v42; // r8d
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // eax
  int v51; // eax
  int v52; // eax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // r10
  unsigned __int64 v55; // r9
  __int64 v56; // rdx
  unsigned __int64 v57; // r8
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r8
  int v62; // r8d
  unsigned __int64 v63; // [rsp+28h] [rbp-90h]
  unsigned __int64 v64; // [rsp+30h] [rbp-88h]
  unsigned __int64 *v65; // [rsp+38h] [rbp-80h]
  _QWORD v66[12]; // [rsp+58h] [rbp-60h] BYREF
  int v67; // [rsp+C0h] [rbp+8h]

  v2 = 0;
  v3 = a2;
  v4 = a2;
  v64 = a2;
  v6 = a2;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    v6 = (unsigned __int64)a2 >> 4;
  }
  else if ( (__int64 *)a1 == &qword_1403CC5E0 && a2 <= 0x40uLL )
  {
    v7 = MiCheckProcessorPteCache(a2);
    if ( v7 )
      goto LABEL_121;
  }
  if ( (unsigned int)v3 >= 0x200 )
  {
    v8 = MiExpandPtes((__int64 *)a1, v3);
    v7 = v8;
    if ( v8 )
    {
      if ( (__int64 *)a1 == &qword_1403CC5E0 && (dword_14044B16C & 2) != 0 )
        MiCheckPteReserve(v8, v3);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v6);
      return v7;
    }
    if ( (__int64 *)a1 == &qword_1403CC5E0 )
    {
LABEL_13:
      ++**(_DWORD **)(a1 + 32);
      return 0LL;
    }
  }
  v10 = 0LL;
  v67 = 0;
  v63 = 0LL;
  v11 = 0;
  while ( 2 )
  {
    while ( 1 )
    {
      v12 = (unsigned __int64 *)a1;
      v13 = *(_QWORD *)(a1 + 64);
      v65 = (unsigned __int64 *)a1;
      if ( *(_QWORD *)a1 )
        break;
LABEL_103:
      if ( !v10 || v10 == *(_QWORD *)(a1 + 72) )
      {
        if ( (*(_DWORD *)(a1 + 24) & 1) == 0 )
          goto LABEL_111;
        if ( (v11 & 1) != 0 || (v11 |= 1u, v67 = v11, v51 = MiEmptyPteBins(a1, 0), v10 = v63, v51 != 1) )
        {
          if ( (v11 & 2) != 0
            || (v11 |= 2u, v67 = v11, !MiPteBinsNeedTrimming(a1))
            || (v52 = MiEmptyPteBins(a1, 1), v10 = v63, v52 != 1) )
          {
LABEL_111:
            v7 = MiExpandPtes((__int64 *)a1, v4);
            if ( v7 )
              goto LABEL_120;
            if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (v11 & 4) != 0 )
              goto LABEL_13;
            v11 |= 4u;
            v67 = v11;
            MiEmptyPteBins(a1, 1);
            v10 = v63;
          }
        }
      }
    }
    v14 = *(_QWORD *)(a1 + 72);
    v63 = v14;
    if ( v14 )
    {
      v15 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 >= v14 )
      {
        v66[1] = *(_QWORD *)(a1 + 8) + 8 * (v14 >> 6);
        v66[0] = v15 - v14;
        v12 = v66;
        v65 = v66;
        if ( v13 )
          v13 -= v14;
      }
      else
      {
        v63 = 0LL;
      }
    }
    v16 = *v12;
    v17 = v13;
    v18 = v12[1];
    if ( v13 >= *v12 )
      v17 = 0LL;
    v19 = v16 - 1;
    if ( !v6 )
    {
      v20 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_99;
    }
    while ( 1 )
    {
      if ( v19 - v17 + 1 < v6 )
      {
        v21 = -1LL;
        goto LABEL_51;
      }
      v22 = v19 - v6 + 1;
      v23 = v18 + 8 * (v22 >> 6);
      v24 = *(_QWORD *)(v18 + 8 * (v17 >> 6)) | ((1LL << (v17 & 0x3F)) - 1);
      v25 = (unsigned __int64 *)(v18 + 8 * (v17 >> 6));
      if ( v6 <= 0x7F )
      {
        if ( v6 >= 0x40 )
        {
          while ( 2 )
          {
            v35 = v24 < 0;
            while ( 1 )
            {
              if ( v35 )
              {
                do
                {
                  if ( (unsigned __int64)++v25 > v23 )
                    goto LABEL_93;
                  v24 = *v25;
                }
                while ( (*v25 & 0x8000000000000000uLL) != 0LL );
              }
              v28 = !_BitScanReverse64((unsigned __int64 *)&v36, v24);
              if ( v28 )
                v37 = 64;
              else
                v37 = 63 - v36;
              v21 = ((((__int64)((__int64)v25 - v18) >> 3) + 1) << 6) - v37;
              if ( v21 > v22 )
                goto LABEL_93;
              v38 = v6 - v37;
              if ( v6 == v37 )
                goto LABEL_49;
              v24 = v25[1];
              ++v25;
              if ( v38 < 0x40 )
                break;
              v35 = v24 < 0;
              if ( !v24 )
              {
                v38 -= 64LL;
                if ( !v38 )
                  goto LABEL_49;
                v24 = v25[1];
                ++v25;
                break;
              }
            }
            v28 = !_BitScanForward64(&v39, v24);
            if ( v28 )
              v39 = 64LL;
            if ( v39 < v38 )
              continue;
            break;
          }
LABEL_49:
          if ( v21 != -1LL )
            break;
          goto LABEL_50;
        }
        if ( v6 <= 1 )
        {
          if ( v24 == -1 )
          {
            while ( (unsigned __int64)++v25 <= v23 )
            {
              v24 = *v25;
              if ( *v25 != -1LL )
                goto LABEL_97;
            }
          }
          else
          {
LABEL_97:
            _BitScanForward64(&v48, ~v24);
            v49 = (__int64)((__int64)v25 - v18) >> 3;
            v47 = (unsigned int)v48;
            v45 = v49 << 6;
LABEL_92:
            v21 = v47 + v45;
            if ( v21 <= v22 )
              goto LABEL_49;
          }
        }
        else
        {
          v40 = 0LL;
          while ( v24 != -1 )
          {
LABEL_79:
            v28 = !_BitScanForward64((unsigned __int64 *)&v41, v24);
            if ( v28 )
              LODWORD(v41) = 64;
            if ( (unsigned int)(v40 + v41) >= v6 )
            {
              v45 = -v40;
LABEL_91:
              v47 = (__int64)((__int64)v25 - v18) >> 3 << 6;
              goto LABEL_92;
            }
            v42 = v6;
            v43 = ~v24;
            while ( 1 )
            {
              v43 &= v43 >> (v42 >> 1);
              if ( !v43 )
                break;
              v42 -= v42 >> 1;
              if ( v42 <= 1 )
              {
                _BitScanForward64(&v44, v43);
                v45 = (unsigned int)v44;
                goto LABEL_91;
              }
            }
            if ( v25 == (unsigned __int64 *)(v18 + 8 * (v19 >> 6)) )
              goto LABEL_93;
            v28 = !_BitScanReverse64((unsigned __int64 *)&v46, v24);
            v24 = v25[1];
            if ( v28 )
            {
              ++v25;
              v40 = 64LL;
            }
            else
            {
              v40 = (unsigned int)(63 - v46);
              ++v25;
            }
          }
          while ( (unsigned __int64)++v25 <= v23 )
          {
            v24 = *v25;
            if ( *v25 != -1LL )
            {
              v40 = 0LL;
              goto LABEL_79;
            }
          }
        }
      }
      else
      {
        v26 = v23 + 8;
        if ( (v22 & 0x3F) == 0 )
          v26 = v18 + 8 * ((v19 - v6 + 1) >> 6);
        if ( v24 )
        {
          if ( *++v25 )
            goto LABEL_36;
          v28 = !_BitScanReverse64((unsigned __int64 *)&v29, v24);
          if ( v28 )
            v27 = 64;
          else
            v27 = 63 - v29;
        }
        else
        {
          v27 = 0;
        }
LABEL_41:
        v21 = ((__int64)((__int64)v25 - v18) >> 3 << 6) - v27;
        if ( v21 <= v22 )
        {
          v31 = &v25[(v6 - v27) >> 6];
          for ( ++v25; v25 != v31; ++v25 )
          {
            if ( *v25 )
              goto LABEL_36;
          }
          v32 = ((_BYTE)v6 - (_BYTE)v27) & 0x3F;
          if ( (((_BYTE)v6 - (_BYTE)v27) & 0x3F) == 0 )
            goto LABEL_49;
          v28 = !_BitScanForward64((unsigned __int64 *)&v33, *v25);
          if ( v28 )
            LODWORD(v33) = 64;
          if ( (unsigned int)v33 >= v32 )
            goto LABEL_49;
LABEL_36:
          while ( (unsigned __int64)v25 <= v26 )
          {
            if ( !*++v25 )
            {
              v28 = !_BitScanReverse64((unsigned __int64 *)&v30, *(v25 - 1));
              if ( v28 )
                v27 = 64;
              else
                v27 = 63 - v30;
              goto LABEL_41;
            }
          }
        }
      }
LABEL_93:
      v21 = -1LL;
LABEL_50:
      v16 = *v12;
LABEL_51:
      if ( !v17 )
        break;
      v34 = v6 + v13;
      v17 = 0LL;
      if ( v6 + v13 > v16 )
        v34 = v16;
      v19 = v34 - 1;
    }
    v11 = v67;
    v20 = v21;
    v12 = v65;
LABEL_99:
    if ( v20 == -1LL )
    {
      v10 = v63;
      v4 = v64;
      goto LABEL_103;
    }
    v50 = RtlInterlockedSetClearRunEx((__int64)v12, v20, v6);
    v10 = v63;
    if ( !v50 )
    {
      v4 = v64;
      continue;
    }
    break;
  }
  v53 = v20 + v63;
  if ( v12 != v66 )
    v53 = v20;
  *(_QWORD *)(a1 + 64) = v53 + v6;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
    v53 *= 16LL;
  v4 = v64;
  v7 = *(_QWORD *)(a1 + 16) + 8 * v53;
LABEL_120:
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v6);
  LODWORD(v3) = a2;
LABEL_121:
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    if ( (__int64 *)a1 == &qword_1403CC5E0 && (dword_14044B16C & 2) != 0 )
      MiCheckPteReserve(v7, v4);
    if ( (unsigned int)v3 > 0x10 )
      goto LABEL_142;
    if ( (_DWORD)v3 )
    {
      v54 = 0xFFFFF6FB7DBED000uLL;
      v55 = 0xFFFFF6FB7DBED7F8uLL;
      do
      {
        v56 = *(_QWORD *)(v7 + 8LL * v2);
        v57 = v7 + 8LL * v2;
        if ( v57 >= v54
          && v57 <= v55
          && (unsigned int)MiPteHasShadow()
          && (v56 & 1) != 0
          && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
        {
          v59 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v59 )
          {
            v60 = *(_QWORD *)(v59 + 8 * ((v58 >> 3) & 0x1FF));
            v61 = v56 | 0x20;
            if ( (v60 & 0x20) == 0 )
              v61 = v56;
            v56 = v61;
            if ( (v60 & 0x42) != 0 )
              v56 = v61 | 0x42;
          }
        }
        if ( MiGetPteTimeStamp(v56) )
          break;
        ++v2;
      }
      while ( v2 < (unsigned int)v3 );
    }
    if ( v2 != (_DWORD)v3 )
    {
LABEL_142:
      v62 = 0;
      goto LABEL_144;
    }
  }
  else
  {
    v62 = 2;
LABEL_144:
    MiFlushTbAsNeeded(v7, v4, v62, 0);
  }
  return v7;
}
