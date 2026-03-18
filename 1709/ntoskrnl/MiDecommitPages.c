/*
 * XREFs of MiDecommitPages @ 0x140053C40
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x14022D870 (MmStoreDecommitVirtualMemory.c)
 *     MiDecommitRegion @ 0x1404952E0 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406EA930 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiVadPureReserve @ 0x14003DDE0 (MiVadPureReserve.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiDeletePteList @ 0x14004D590 (MiDeletePteList.c)
 *     MiRemoveWsle @ 0x140055F20 (MiRemoveWsle.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     MiIncreaseUsedPtesCount @ 0x1400666F8 (MiIncreaseUsedPtesCount.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400E3424 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiDecrementCloneBlockReference @ 0x1400E4E0C (MiDecrementCloneBlockReference.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiDecrementCombinedPte @ 0x1400E5700 (MiDecrementCombinedPte.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiUnlockWsle @ 0x14010C8E0 (MiUnlockWsle.c)
 *     MiCompressTbFlushList @ 0x140112EA0 (MiCompressTbFlushList.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14011B680 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14011D054 (MI_PROTO_FORMAT_COMBINED.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     MiPteHasShadow @ 0x14017C178 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x14017C8D0 (MiReverseSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiGetPageFileReservationOffset @ 0x14022647C (MiGetPageFileReservationOffset.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     EtwTraceShouldYieldProcessor @ 0x14027B8F8 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDecommitPages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *v6; // r15
  __int64 DemandZeroPte; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // r11
  int v13; // eax
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  LONG *v16; // rbx
  unsigned __int64 v17; // r12
  char v18; // al
  __int64 v19; // rdx
  __int64 DpcRequestSummary; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rbx
  __int64 NextPageTable; // rax
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  unsigned __int64 PteShadow; // rbx
  __int64 UsedPtesHandle; // rax
  unsigned int v28; // ebx
  unsigned __int64 *v29; // r15
  _BYTE *v30; // rax
  unsigned __int64 v31; // r10
  _BYTE *v32; // r9
  unsigned __int64 v33; // r11
  int v34; // r12d
  unsigned __int8 WsleContents; // r11
  unsigned __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rcx
  unsigned __int64 v39; // r14
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  bool v42; // zf
  __int64 *v43; // r9
  __int64 v44; // rax
  unsigned __int64 *v45; // r11
  __int64 v46; // r10
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int8 v49; // al
  char v50; // cl
  int v51; // edx
  __int64 v52; // r14
  char v53; // r11
  unsigned __int64 v54; // r15
  unsigned __int64 i; // rcx
  unsigned int v56; // r8d
  char v57; // r11
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // rdx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rbx
  __int64 v64; // r9
  int v65; // eax
  __int64 v66; // r8
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v68; // rdx
  __int64 v69; // rbx
  __int64 v70; // rax
  ULONG_PTR v71; // r10
  BOOL v72; // r14d
  unsigned __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  unsigned int v76; // eax
  __int64 v77; // rdx
  __int16 v78; // ax
  int v79; // r14d
  __int64 v80; // r10
  __int64 v81; // r11
  unsigned int PageFileReservationOffset; // eax
  __int64 v83; // rdx
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  LONG *v86; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // r14d
  unsigned int DpcTimeCount; // r15d
  _KTHREAD *NextThread; // rax
  __int64 v92; // [rsp+20h] [rbp-E0h]
  __int64 v93; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v94; // [rsp+38h] [rbp-C8h]
  int v95; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v96; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v97; // [rsp+50h] [rbp-B0h]
  int v98; // [rsp+58h] [rbp-A8h]
  __int64 v99; // [rsp+60h] [rbp-A0h]
  __int64 v100; // [rsp+68h] [rbp-98h] BYREF
  __int64 CurrentIrql; // [rsp+70h] [rbp-90h]
  int v102; // [rsp+78h] [rbp-88h]
  unsigned __int64 v103; // [rsp+80h] [rbp-80h]
  unsigned __int64 v104; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v105; // [rsp+90h] [rbp-70h]
  unsigned __int64 v106; // [rsp+98h] [rbp-68h]
  int v107; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v108; // [rsp+A8h] [rbp-58h]
  __int64 v109; // [rsp+B0h] [rbp-50h] BYREF
  int v110; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v111; // [rsp+C4h] [rbp-3Ch]
  __int64 v112; // [rsp+C8h] [rbp-38h]
  __int64 v113; // [rsp+D0h] [rbp-30h]
  _QWORD Base[257]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v115[4]; // [rsp+8E0h] [rbp+7E0h] BYREF

  v6 = a6;
  v108 = a4;
  v97 = a3;
  v106 = a2;
  v105 = a6;
  v112 = 256LL;
  v110 = 1;
  v111 = 0;
  v113 = 0LL;
  Base[0] = 0LL;
  v98 = 0;
  DemandZeroPte = MiMakeDemandZeroPte(16LL);
  v11 = *(unsigned int *)(v10 + 52);
  LODWORD(v11) = v11 & 0x7FFFFFFF;
  v12 = 0xFFFFF68000000000uLL;
  if ( (v11 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31)) == 0x7FFFFFFFELL )
  {
    DemandZeroPte = MiMakeDemandZeroPte((*(_DWORD *)(v10 + 48) >> 3) & 0x1F);
  }
  else if ( *(int *)(v10 + 52) >= 0 )
  {
    v103 = 0LL;
    v98 = MiVadPureReserve(v10);
    goto LABEL_6;
  }
  v103 = v12
       + 8 * ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) & 0xFFFFFFFFFLL);
LABEL_6:
  v13 = 3;
  if ( a5 )
    v13 = 1;
  v102 = v13;
  v14 = v9 + 1280;
  v15 = v12 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v95 = 1;
  v16 = &dword_140389780;
  v17 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v93 = v9 + 1280;
  v94 = v17;
  v18 = *(_BYTE *)(v9 + 1472) & 7;
  v99 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v9 + 1452));
  if ( v18 != 2 )
    v16 = (LONG *)(v9 + 1480);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16, (unsigned __int8)CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v16, (unsigned __int8)CurrentIrql);
  v16[1] = 0;
  while ( 1 )
  {
    v22 = v106;
    if ( v15 > v106 )
      break;
    if ( v95 == 1 || (v15 & 0xFFF) == 0 )
    {
      if ( HIDWORD(v112) )
        MiDeletePteList((__int64)&v110, v97, DemandZeroPte, (__int64)v6);
      if ( v98 )
      {
        NextPageTable = MiGetNextPageTable(v15, v22, 0LL, CurrentIrql, 4u, &v107);
        v24 = NextPageTable;
        if ( !NextPageTable )
        {
          v6[3] += ((__int64)(v22 - v15) >> 3) + 1;
          break;
        }
        v25 = NextPageTable - v15;
        v15 = v24;
        v6[3] += v25 >> 3;
        v17 = (__int64)(v24 << 25) >> 16;
        v94 = v17;
      }
      else
      {
        MiMakeSystemAddressValid(v15, 0LL, (*(_DWORD *)(v108 + 48) >> 8) & 0x3F, CurrentIrql, v102);
      }
      v95 = 0;
    }
    PteShadow = *(_QWORD *)v15;
    if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v15, *(_QWORD *)v15);
    v104 = PteShadow;
    if ( !PteShadow )
    {
      UsedPtesHandle = MiGetUsedPtesHandle(v17);
      v28 = 1;
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      if ( v15 > v103 )
        ++v6[3];
      *(_QWORD *)v15 = DemandZeroPte;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v15, DemandZeroPte);
      goto LABEL_178;
    }
    if ( (PteShadow & 1) != 0 )
    {
      v29 = (unsigned __int64 *)(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v30 = (_BYTE *)MI_GET_PFN_FROM_PTE(v29, v19, DpcRequestSummary, v21);
      v32 = v30;
      if ( v17 < v33 || v17 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v36 = *v29;
        v34 = 1;
        if ( (unsigned __int64)v29 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v29 <= v31 )
          v36 = MiReadPteShadow(v29, *v29);
        if ( (v36 & 1) != 0 )
          WsleContents = HIBYTE(v36) & 0xF | (16 * ((v36 >> 60) & 7));
        else
          WsleContents = 10;
        v37 = (*((_QWORD *)v32 + 5) >> 57) & 1LL;
        if ( (WsleContents & 0xF) == 8 )
        {
          MiUnlockWsle(v93, v94, v32);
          WsleContents = MiGetWsleContents(v38, v94);
        }
        if ( (_DWORD)v37 )
        {
          v39 = v94;
          goto LABEL_51;
        }
        v14 = v93;
      }
      else
      {
        v34 = 0;
        WsleContents = (*v30 >> 1) & 7;
      }
      --*(_QWORD *)(v14 + 144);
      v39 = v94;
      if ( v94 < 0xFFFFF68000000000uLL || v94 > 0xFFFFF6FFFFFFFFFFuLL )
        --*(_QWORD *)(v93 + 128);
LABEL_51:
      v40 = *v29;
      v41 = 0xFFFFF6FB7DBED000uLL;
      if ( (unsigned __int64)v29 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v29 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v40) )
      {
        LOBYTE(v40) = v40 | 0x20;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        LOBYTE(v40) = 32;
      }
      else if ( (MiFlags & 0x2000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v40 & 0x20) != 0 )
      {
        *v29 = 0LL;
        if ( (unsigned __int64)v29 >= v41 && (unsigned __int64)v29 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v29, 0LL);
      }
      else
      {
        MI_INTERLOCKED_EXCHANGE_PTE(v29);
      }
      MiRemoveWsle(v93, v39, WsleContents, 10LL, v92);
      v42 = v34 == 0;
      v17 = v94;
      if ( !v42 )
      {
        v43 = (__int64 *)(((v94 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
        v44 = *v43;
        if ( (unsigned __int64)v43 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v43 <= 0xFFFFF6FB7DBED7F8uLL )
          v44 = MiReadPteShadow(((v94 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, *v43);
        v109 = v44;
        v45 = (unsigned __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v109) - 0x58000000000LL);
        if ( ((*(_DWORD *)v45 >> 4) & 0x3FF) == 0 )
        {
          v46 = 0LL;
          v21 = (__int64)(v21 << 25) >> 16;
          memset(v115, 0, sizeof(v115));
          do
          {
            v47 = *(_QWORD *)v21;
            v48 = 0xFFFFF6FB7DBED000uLL;
            if ( v21 >= 0xFFFFF6FB7DBED000uLL )
            {
              v48 = 0xFFFFF6FB7DBED7F8uLL;
              if ( v21 <= 0xFFFFF6FB7DBED7F8uLL )
                LOBYTE(v47) = MiReadPteShadow(v21, *(_QWORD *)v21);
            }
            if ( (v47 & 1) != 0 )
            {
              v49 = MiGetWsleContents(v48, (__int64)((v21 << 25) - v46) >> 16) & 0xF;
              if ( v49 != 10 && v49 != 9 && v49 != 8 )
                ++*((_DWORD *)v115 + v49);
            }
            v21 += 8LL;
          }
          while ( (v21 & 0xFFF) != 0 );
          v50 = 8;
          while ( 1 )
          {
            v51 = *((_DWORD *)v115 + (unsigned __int8)--v50);
            if ( v51 )
              break;
            if ( !v50 )
              goto LABEL_84;
          }
          *v45 = *v45 & 0xFFFFFFFFFFFE000FuLL | (16 * (v51 & 0x3FF | ((unsigned __int64)(v50 & 7) << 10)));
        }
      }
LABEL_84:
      v52 = 1LL;
      v53 = v111;
      v54 = v94;
      if ( v110 != 1 )
      {
        if ( (v111 & 8) == 0 && v94 >= 0xFFFFF68000000000uLL && v94 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v53 = v111 | 8;
          LOBYTE(v111) = v111 | 8;
        }
        if ( v110 )
        {
          for ( i = v94; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
          {
            if ( i > 0xFFFFF6FFFFFFFFFFuLL )
              break;
          }
        }
      }
      v56 = HIDWORD(v112);
      if ( !HIDWORD(v112) )
      {
LABEL_106:
        if ( HIDWORD(v112) < (unsigned int)v112 )
        {
          while ( 1 )
          {
            v61 = 1024LL;
            if ( (unsigned __int64)(v52 - 1) <= 0x3FF )
              v61 = v52;
            v52 -= v61;
            v62 = v54 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v61 - 1) & 0x3FF;
            v54 += v61 << 12;
            Base[v56] = v62;
            v113 += v61;
            v56 = HIDWORD(v112) + 1;
            HIDWORD(v112) = v56;
            if ( v56 == (_DWORD)v112 && (v111 & 4) == 0 )
            {
              qsort(Base, v56, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(&v110);
              v56 = HIDWORD(v112);
              if ( HIDWORD(v112) == (_DWORD)v112 )
                break;
            }
            if ( !v52 )
              goto LABEL_117;
          }
          if ( v52 )
          {
            HIBYTE(v111) = 1;
            v113 = HIDWORD(v112);
          }
        }
        else
        {
          HIBYTE(v111) = 1;
        }
        goto LABEL_117;
      }
      v57 = v53 & 4;
      if ( v57
        || (v58 = Base[HIDWORD(v112) - 1], (v58 & 0xC00) != 0)
        || (v21 = Base[HIDWORD(v112) - 1] & 0x3FFLL, (v58 & 0xFFFFFFFFFFFFF000uLL) + ((v21 + 1) << 12) != v94)
        || v21 + 1 < v21
        || v21 + 1 > 0x3FF )
      {
        if ( v57 )
          goto LABEL_106;
        v21 = (unsigned __int64)&Base[HIDWORD(v112) - 1];
        v59 = *(_QWORD *)v21;
        if ( (*(_QWORD *)v21 & 0xC00LL) != 0 )
          goto LABEL_106;
        if ( (v59 & 0xFFFFFFFFFFFFF000uLL) != v94 + 4096 )
          goto LABEL_106;
        v60 = *(_QWORD *)v21 & 0x3FFLL;
        if ( v60 + 1 < v60 || v60 + 1 > 0x3FF )
          goto LABEL_106;
        ++v113;
        *(_QWORD *)v21 = ((unsigned __int16)(v59 - 4096) ^ (unsigned __int16)(v59 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v59 - 4096);
      }
      else
      {
        ++v113;
        Base[HIDWORD(v112) - 1] = ((unsigned __int16)v58 ^ (unsigned __int16)(v58 + 1)) & 0x3FF ^ v58;
      }
LABEL_117:
      v63 = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v104 = v63;
      *(_QWORD *)v15 = v63;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v15, v63);
      if ( HIDWORD(v112) == (_DWORD)v112 - 1 )
        MiDeletePteList((__int64)&v110, v97, DemandZeroPte, (__int64)v105);
LABEL_176:
      v14 = v93;
LABEL_177:
      v28 = 1;
LABEL_178:
      v15 += 8LL;
      if ( (v15 & 0x78) != 0 )
        goto LABEL_182;
      v86 = &dword_140389780;
      if ( (*(_BYTE *)(v14 + 192) & 7) != 2 )
        v86 = (LONG *)(v14 + 200);
      if ( (*v86 & 0x40000000) != 0 )
      {
LABEL_203:
        if ( HIDWORD(v112) )
          MiDeletePteList((__int64)&v110, v97, DemandZeroPte, (__int64)v105);
        v95 = 1;
        MiRelockWorkingSetExclusive(v14, (unsigned __int8)CurrentIrql);
        v6 = v105;
        v17 += 4096LL;
        v94 = v17;
      }
      else
      {
LABEL_182:
        CurrentPrcb = KeGetCurrentPrcb();
        DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
        DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
        DpcTimeCount = CurrentPrcb->DpcTimeCount;
        if ( (DpcRequestSummary & 1) == 0 )
        {
          v19 = 0LL;
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v28 = 2;
            goto LABEL_200;
          }
          if ( CurrentPrcb->QuantumEnd )
          {
            v28 = 3;
            goto LABEL_200;
          }
          NextThread = CurrentPrcb->NextThread;
          if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
          {
            v28 = 4;
            goto LABEL_200;
          }
LABEL_193:
          if ( DpcWatchdogCount <= 7 )
          {
            v14 = v93;
            goto LABEL_207;
          }
          if ( (_DWORD)v19 )
          {
LABEL_195:
            if ( (DpcRequestSummary & 0x1E) != 0 )
            {
              v28 = 5;
              goto LABEL_200;
            }
            if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
            {
              v28 = 6;
              goto LABEL_200;
            }
          }
          _disable();
          CurrentPrcb->DpcWatchdogCount = 0;
          CurrentPrcb->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler();
          _enable();
          v28 = 0;
          goto LABEL_200;
        }
        v19 = 1LL;
        if ( DpcTimeCount <= 7 )
          goto LABEL_193;
        if ( !CurrentPrcb->QuantumEnd )
          goto LABEL_195;
LABEL_200:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v28, DpcWatchdogCount, DpcTimeCount);
        v14 = v93;
        if ( v28 )
          goto LABEL_203;
LABEL_207:
        v6 = v105;
        v17 += 4096LL;
        v94 = v17;
      }
    }
    else
    {
      if ( (PteShadow & 0x400) != 0 )
      {
        MiGetPrototypePteDirect(PteShadow);
        if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(PteShadow) )
        {
          v65 = MiDecrementCombinedPte(v14, v64);
LABEL_128:
          if ( v65 == 3 )
          {
            ++v6[1];
          }
          else if ( v65 == 5 )
          {
            ++v6[2];
          }
        }
        else if ( !(unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
        {
          CloneAddress = MiLocateCloneAddress(v97, v21, v66, v21);
          if ( CloneAddress )
          {
            v65 = MiDecrementCloneBlockReference(CloneAddress, v68);
            goto LABEL_128;
          }
        }
        *(_QWORD *)v15 = DemandZeroPte;
        if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v15, DemandZeroPte);
        goto LABEL_177;
      }
      if ( (PteShadow & 0x800) == 0 )
      {
        if ( ((PteShadow >> 5) & 0x1F) == 0x10 )
          ++v6[3];
        v78 = MiReverseSwizzleInvalidPte(PteShadow, v19, DpcRequestSummary);
        if ( (v78 & 0x400) != 0 || (v78 & 0x800) != 0 || (v78 & 4) != 0 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v97 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        v79 = 1;
        v21 = DemandZeroPte;
        v80 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v93 + 172));
        v99 = v80;
        v81 = (PteShadow >> 1) & 1;
        if ( ((PteShadow >> 1) & 1) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v80, &v104) )
        {
          v79 = 0;
          PageFileReservationOffset = MiGetPageFileReservationOffset(&v104);
          v84 = MiTransferSoftwarePte(DemandZeroPte, v83, PageFileReservationOffset, 2LL);
          v80 = v99;
          v21 = v84;
        }
        *(_QWORD *)v15 = v21;
        if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v15, v21);
        v96 = PteShadow;
        if ( (PteShadow & 4) != 0 )
        {
          if ( (unsigned __int64)&v96 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v96 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(&v96, PteShadow);
          v85 = PteShadow & 0xFFFFFFFFFFFFFFFDuLL;
          if ( v79 )
            v85 = PteShadow;
        }
        else if ( v79 && (_DWORD)v81 )
        {
          v85 = PteShadow;
          if ( (unsigned __int64)&v96 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v96 <= 0xFFFFF6FB7DBED7F8uLL )
            v85 = MiReadPteShadow(&v96, PteShadow);
        }
        else
        {
          v85 = 0LL;
        }
        v96 = v85;
        if ( v85 )
          MiReleasePageFileInfo(v80, v85, 0LL);
        goto LABEL_176;
      }
      v69 = 0LL;
      v100 = 0LL;
      v70 = MiLockTransitionLeafPage(v15);
      v71 = v70;
      if ( v70 )
      {
        v72 = 1;
        if ( !*(_WORD *)(v70 + 32) )
        {
          v73 = *(_QWORD *)(v70 + 40);
          v69 = *(_QWORD *)(v70 + 16);
          v100 = v69;
          v74 = *(_QWORD *)(qword_140388AF0 + 8 * ((v73 >> 40) & 0x3FF));
          v99 = v74;
          if ( (v69 & 2) != 0 )
            v72 = MI_IS_PTE_IN_WS_SWAP_SET(v74, &v100) != 0;
        }
        if ( (unsigned int)MiDeleteTransitionPte((ULONG_PTR *)v15, v71, 0x11u, 0) == 3 )
          ++v6[1];
        if ( v69 )
          MiReleasePageFileSpace(v99, v69, v72);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v97 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        v75 = DemandZeroPte;
        if ( !v72 )
        {
          v76 = MiGetPageFileReservationOffset(&v100);
          v75 = MiTransferSoftwarePte(DemandZeroPte, v77, v76, 2LL);
        }
        *(_QWORD *)v15 = v75;
        if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v15, v75);
        goto LABEL_176;
      }
    }
  }
  if ( HIDWORD(v112) )
    MiDeletePteList((__int64)&v110, v97, DemandZeroPte, (__int64)v6);
  return MiUnlockWorkingSetExclusive(v14, (unsigned __int8)CurrentIrql);
}
