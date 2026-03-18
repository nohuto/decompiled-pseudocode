/*
 * XREFs of MiReservePtes @ 0x1400F7CA0
 * Callers:
 *     MiMapSinglePage @ 0x140025508 (MiMapSinglePage.c)
 *     MiCreatePteCopyList @ 0x14002A77C (MiCreatePteCopyList.c)
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiZeroInParallelWorker @ 0x14007CF90 (MiZeroInParallelWorker.c)
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MmCreateKernelStack @ 0x14010FBC0 (MmCreateKernelStack.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 *     MiBuildReservationCluster @ 0x140139AAC (MiBuildReservationCluster.c)
 *     MiCreateZeroThreadContext @ 0x14015892C (MiCreateZeroThreadContext.c)
 *     MiReservePageHash @ 0x140159990 (MiReservePageHash.c)
 *     MiBuildDynamicRegion @ 0x14015A518 (MiBuildDynamicRegion.c)
 *     MmCopyMemory @ 0x140210B00 (MmCopyMemory.c)
 *     MiScrubNodeLargePageList @ 0x140224CA4 (MiScrubNodeLargePageList.c)
 *     MiZeroAndConvertLargePage @ 0x140225624 (MiZeroAndConvertLargePage.c)
 *     MmInitializeProcessor @ 0x140410F84 (MmInitializeProcessor.c)
 *     MiAllocateProcessShadow @ 0x14041D3DC (MiAllocateProcessShadow.c)
 *     MiValidateImagePfn @ 0x1404234F4 (MiValidateImagePfn.c)
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 *     MiRelocateImageAgain @ 0x140511290 (MiRelocateImageAgain.c)
 *     MiRelocateImagePfn @ 0x140518C20 (MiRelocateImagePfn.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     MmAllocateMappingAddress @ 0x1405728D0 (MmAllocateMappingAddress.c)
 *     MmAllocateDumpHibernateResources @ 0x14057D51C (MmAllocateDumpHibernateResources.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     MiCreateLargePfnBitMaps @ 0x1405BA7C0 (MiCreateLargePfnBitMaps.c)
 *     MmAllocateNonCachedMemory @ 0x1406B4790 (MmAllocateNonCachedMemory.c)
 *     MiAddPagesToEnclave @ 0x1406BA74C (MiAddPagesToEnclave.c)
 *     MiAllocateEnclaveVad @ 0x1406BA9FC (MiAllocateEnclaveVad.c)
 *     MiExpandPartitionIds @ 0x1406BCBCC (MiExpandPartitionIds.c)
 *     MiInitializeTbFlush @ 0x140802CC8 (MiInitializeTbFlush.c)
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 *     MiInitializeMirroring @ 0x140803C7C (MiInitializeMirroring.c)
 *     MiInitializeNonPagedPool @ 0x140803DE4 (MiInitializeNonPagedPool.c)
 *     MiMapDummyPages @ 0x140813A24 (MiMapDummyPages.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 *     MiBuildPagedPool @ 0x14081450C (MiBuildPagedPool.c)
 *     MiInitializeGapFrames @ 0x1408165A8 (MiInitializeGapFrames.c)
 *     MiInitializePteInfo @ 0x140824BAC (MiInitializePteInfo.c)
 *     MiInitializeKernelCfg @ 0x14082694C (MiInitializeKernelCfg.c)
 * Callees:
 *     MiEmptyPteBins @ 0x1400844C4 (MiEmptyPteBins.c)
 *     MiPteBinsNeedTrimming @ 0x140084B90 (MiPteBinsNeedTrimming.c)
 *     MiCheckProcessorPteCache @ 0x1400F7580 (MiCheckProcessorPteCache.c)
 *     RtlInterlockedSetClearRunEx @ 0x1400F9880 (RtlInterlockedSetClearRunEx.c)
 *     MiFlushTbAsNeeded @ 0x1400F9A20 (MiFlushTbAsNeeded.c)
 *     MiExpandPtes @ 0x14012793C (MiExpandPtes.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckPteReserve @ 0x1402208DC (MiCheckPteReserve.c)
 */

ULONG_PTR __fastcall MiReservePtes(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  ULONG_PTR v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v10; // rcx
  int v11; // edi
  unsigned __int64 *v12; // rbx
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r11
  __int64 v21; // r9
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // r10
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int64 *v27; // r9
  unsigned int v28; // r9d
  unsigned __int64 v29; // rdx
  bool v30; // sf
  unsigned int v31; // ecx
  unsigned __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 *v34; // rbx
  __int64 v35; // rcx
  unsigned int v36; // r8d
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // eax
  int v45; // eax
  int v46; // eax
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // [rsp+20h] [rbp-98h]
  unsigned __int64 v50; // [rsp+28h] [rbp-90h]
  unsigned __int64 *v51; // [rsp+40h] [rbp-78h]
  _QWORD v52[12]; // [rsp+58h] [rbp-60h] BYREF
  int v53; // [rsp+C0h] [rbp+8h]
  int v54; // [rsp+C8h] [rbp+10h]

  v54 = a2;
  v3 = 0;
  v4 = (unsigned int)a2;
  v5 = (unsigned int)a2;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    v5 = (unsigned __int64)(unsigned int)a2 >> 4;
  }
  else if ( (__int64 *)a1 == &qword_14036D0A0 && (unsigned int)a2 <= 0x40uLL )
  {
    v7 = MiCheckProcessorPteCache((unsigned int)a2);
    if ( v7 )
      goto LABEL_121;
  }
  if ( (unsigned int)v4 >= 0x200 )
  {
    v8 = MiExpandPtes(a1, v4);
    v7 = v8;
    if ( v8 )
    {
      if ( (__int64 *)a1 == &qword_14036D0A0 && (dword_1403E310C & 2) != 0 )
        MiCheckPteReserve(v8, v4);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -(__int64)v5);
      return v7;
    }
    if ( (__int64 *)a1 == &qword_14036D0A0 )
    {
LABEL_13:
      ++**(_DWORD **)(a1 + 32);
      return 0LL;
    }
  }
  v10 = 0LL;
  v53 = 0;
  v50 = 0LL;
  v11 = 0;
  while ( 2 )
  {
    while ( 1 )
    {
      v12 = (unsigned __int64 *)a1;
      v13 = *(_QWORD *)(a1 + 72);
      v51 = (unsigned __int64 *)a1;
      if ( *(_QWORD *)a1 )
        break;
LABEL_103:
      if ( !v10 || v10 == *(_QWORD *)(a1 + 80) )
      {
        if ( (*(_DWORD *)(a1 + 24) & 1) == 0 )
          goto LABEL_111;
        if ( (v11 & 1) != 0 || (v11 |= 1u, v53 = v11, v45 = MiEmptyPteBins(a1, 0), v10 = v50, v45 != 1) )
        {
          if ( (v11 & 2) != 0
            || (v11 |= 2u, v53 = v11, !MiPteBinsNeedTrimming(a1, a2, a3))
            || (v46 = MiEmptyPteBins(a1, 1), v10 = v50, v46 != 1) )
          {
LABEL_111:
            v7 = MiExpandPtes(a1, (unsigned int)v4);
            if ( v7 )
              goto LABEL_120;
            if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || (v11 & 4) != 0 )
              goto LABEL_13;
            v11 |= 4u;
            v53 = v11;
            MiEmptyPteBins(a1, 1);
            v10 = v50;
          }
        }
      }
    }
    a3 = *(_QWORD *)(a1 + 80);
    v50 = a3;
    if ( a3 )
    {
      v14 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 >= a3 )
      {
        v52[1] = *(_QWORD *)(a1 + 8) + 8 * (a3 >> 6);
        v52[0] = v14 - a3;
        v12 = v52;
        v51 = v52;
        if ( v13 )
          v13 -= a3;
      }
      else
      {
        v50 = 0LL;
      }
    }
    v15 = *v12;
    v16 = v13;
    v17 = v12[1];
    v49 = *v12;
    if ( v13 >= *v12 )
      v16 = 0LL;
    a2 = v15 - 1;
    if ( !v5 )
    {
      v18 = v16 & 0xFFFFFFFFFFFFFFF8uLL;
      goto LABEL_99;
    }
    while ( 1 )
    {
      if ( a2 - v16 + 1 < v5 )
      {
        a3 = -1LL;
        goto LABEL_51;
      }
      v19 = a2 - v5 + 1;
      v20 = v17 + 8 * (v19 >> 6);
      v21 = *(_QWORD *)(v17 + 8 * (v16 >> 6)) | ((1LL << (v16 & 0x3F)) - 1);
      v22 = (unsigned __int64 *)(v17 + 8 * (v16 >> 6));
      if ( v5 <= 0x7F )
      {
        if ( v5 >= 0x40 )
        {
          while ( 2 )
          {
            v30 = v21 < 0;
            while ( 1 )
            {
              if ( v30 )
              {
                do
                {
                  if ( (unsigned __int64)++v22 > v20 )
                    goto LABEL_93;
                  v21 = *v22;
                }
                while ( (*v22 & 0x8000000000000000uLL) != 0LL );
              }
              v24 = !_BitScanReverse64(&a2, v21);
              if ( v24 )
                v31 = 64;
              else
                v31 = 63 - a2;
              a3 = ((((__int64)((__int64)v22 - v17) >> 3) + 1) << 6) - v31;
              if ( a3 > v19 )
                goto LABEL_93;
              a2 = v5 - v31;
              if ( v5 == v31 )
                goto LABEL_49;
              v21 = v22[1];
              ++v22;
              if ( a2 < 0x40 )
                break;
              v30 = v21 < 0;
              if ( !v21 )
              {
                a2 -= 64LL;
                if ( !a2 )
                  goto LABEL_49;
                v21 = v22[1];
                ++v22;
                break;
              }
            }
            v24 = !_BitScanForward64(&v32, v21);
            if ( v24 )
              v32 = 64LL;
            if ( v32 < a2 )
              continue;
            break;
          }
LABEL_49:
          if ( a3 != -1LL )
            break;
          goto LABEL_50;
        }
        if ( v5 <= 1 )
        {
          if ( v21 == -1 )
          {
            while ( (unsigned __int64)++v22 <= v20 )
            {
              v21 = *v22;
              if ( *v22 != -1LL )
                goto LABEL_97;
            }
          }
          else
          {
LABEL_97:
            _BitScanForward64(&v42, ~v21);
            v43 = (__int64)((__int64)v22 - v17) >> 3;
            v41 = (unsigned int)v42;
            v39 = v43 << 6;
LABEL_92:
            a3 = v41 + v39;
            if ( a3 <= v19 )
              goto LABEL_49;
          }
        }
        else
        {
          a2 >>= 6;
          v33 = 0LL;
          v34 = (unsigned __int64 *)(v17 + 8 * a2);
          while ( v21 != -1 )
          {
LABEL_79:
            v24 = !_BitScanForward64((unsigned __int64 *)&v35, v21);
            if ( v24 )
              LODWORD(v35) = 64;
            a2 = (unsigned int)(v33 + v35);
            if ( a2 >= v5 )
            {
              v39 = -v33;
LABEL_91:
              v41 = (__int64)((__int64)v22 - v17) >> 3 << 6;
              goto LABEL_92;
            }
            v36 = v5;
            v37 = ~v21;
            while ( 1 )
            {
              a2 = v37 >> (v36 >> 1);
              v37 &= a2;
              if ( !v37 )
                break;
              v36 -= v36 >> 1;
              if ( v36 <= 1 )
              {
                _BitScanForward64(&v38, v37);
                v39 = (unsigned int)v38;
                goto LABEL_91;
              }
            }
            if ( v22 == v34 )
              goto LABEL_93;
            v24 = !_BitScanReverse64((unsigned __int64 *)&v40, v21);
            v21 = v22[1];
            if ( v24 )
            {
              ++v22;
              v33 = 64LL;
            }
            else
            {
              v33 = (unsigned int)(63 - v40);
              ++v22;
            }
          }
          while ( (unsigned __int64)++v22 <= v20 )
          {
            v21 = *v22;
            if ( *v22 != -1LL )
            {
              v33 = 0LL;
              goto LABEL_79;
            }
          }
        }
      }
      else
      {
        v23 = v20 + 8;
        if ( (v19 & 0x3F) == 0 )
          v23 = v17 + 8 * ((a2 - v5 + 1) >> 6);
        if ( v21 )
        {
          if ( *++v22 )
            goto LABEL_36;
          v24 = !_BitScanReverse64((unsigned __int64 *)&v25, v21);
          if ( v24 )
            a2 = 64LL;
          else
            a2 = (unsigned int)(63 - v25);
        }
        else
        {
          a2 = 0LL;
        }
LABEL_41:
        a3 = ((__int64)((__int64)v22 - v17) >> 3 << 6) - (unsigned int)a2;
        if ( a3 <= v19 )
        {
          v27 = &v22[(v5 - (unsigned int)a2) >> 6];
          for ( ++v22; v22 != v27; ++v22 )
          {
            if ( *v22 )
              goto LABEL_36;
          }
          v28 = ((_BYTE)v5 - (_BYTE)a2) & 0x3F;
          if ( (((_BYTE)v5 - (_BYTE)a2) & 0x3F) == 0 )
            goto LABEL_49;
          v24 = !_BitScanForward64(&a2, *v22);
          if ( v24 )
            a2 = 64LL;
          if ( (unsigned int)a2 >= v28 )
            goto LABEL_49;
LABEL_36:
          while ( (unsigned __int64)v22 <= v23 )
          {
            if ( !*++v22 )
            {
              v24 = !_BitScanReverse64((unsigned __int64 *)&v26, *(v22 - 1));
              if ( v24 )
                a2 = 64LL;
              else
                a2 = (unsigned int)(63 - v26);
              goto LABEL_41;
            }
          }
        }
      }
LABEL_93:
      a3 = -1LL;
LABEL_50:
      v15 = v49;
LABEL_51:
      if ( !v16 )
        break;
      v29 = v5 + v13;
      v16 = 0LL;
      if ( v5 + v13 > v15 )
        v29 = v15;
      a2 = v29 - 1;
    }
    v11 = v53;
    v18 = a3;
    v12 = v51;
LABEL_99:
    if ( v18 == -1LL )
    {
      v10 = v50;
      LODWORD(v4) = v54;
      goto LABEL_103;
    }
    v44 = RtlInterlockedSetClearRunEx(v12, v18, v5);
    v10 = v50;
    if ( !v44 )
    {
      LODWORD(v4) = v54;
      continue;
    }
    break;
  }
  v47 = v18 + v50;
  if ( v12 != v52 )
    v47 = v18;
  *(_QWORD *)(a1 + 72) = v47 + v5;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
    v47 *= 16LL;
  LODWORD(v4) = v54;
  v7 = *(_QWORD *)(a1 + 16) + 8 * v47;
LABEL_120:
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -(__int64)v5);
LABEL_121:
  if ( (*(_DWORD *)(a1 + 24) & 2) == 0 )
    goto LABEL_130;
  if ( (__int64 *)a1 == &qword_14036D0A0 && (dword_1403E310C & 2) != 0 )
    MiCheckPteReserve(v7, (unsigned int)v4);
  if ( (unsigned int)v4 > 0x10 )
    goto LABEL_130;
  if ( (_DWORD)v4 )
  {
    do
    {
      v48 = MI_READ_PTE_LOCK_FREE(v7 + 8LL * v3);
      if ( MiGetPteTimeStamp(v48) )
        break;
      ++v3;
    }
    while ( v3 < (unsigned int)v4 );
  }
  if ( v3 != (_DWORD)v4 )
LABEL_130:
    MiFlushTbAsNeeded(v7);
  return v7;
}
