/*
 * XREFs of MiDecommitPages @ 0x1400D2D20
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x14003ACDC (MmStoreDecommitVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1404543B0 (MmStoreAllocateVirtualMemory.c)
 *     MiDecommitRegion @ 0x140499E58 (MiDecommitRegion.c)
 *     NtFreeVirtualMemory @ 0x14051A3B0 (NtFreeVirtualMemory.c)
 * Callees:
 *     MiDecrementCloneBlockReference @ 0x1400036F4 (MiDecrementCloneBlockReference.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x14000D778 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiUnlockWsle @ 0x140017528 (MiUnlockWsle.c)
 *     MiCompressTbFlushList @ 0x1400182F0 (MiCompressTbFlushList.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400224C0 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiRelockWorkingSetExclusive @ 0x1400406A4 (MiRelockWorkingSetExclusive.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140073B74 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiDecrementCombinedPte @ 0x140078BE8 (MiDecrementCombinedPte.c)
 *     MiDeleteTransitionPte @ 0x14007A23C (MiDeleteTransitionPte.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiIncreaseUsedPtesCount @ 0x1400A8338 (MiIncreaseUsedPtesCount.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiVadPureReserve @ 0x1400D2C90 (MiVadPureReserve.c)
 *     MiRemoveWsle @ 0x1400D4A00 (MiRemoveWsle.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x14017D030 (MiReverseSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     MiGetPageFileReservationOffset @ 0x14021A1C8 (MiGetPageFileReservationOffset.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     EtwTraceShouldYieldProcessor @ 0x140253C08 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDecommitPages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        _KPROCESS *a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  __int64 v7; // rsi
  __int64 DemandZeroPte; // rdi
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r11d
  __int64 v12; // rax
  unsigned __int64 v13; // r10
  unsigned int v14; // r8d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 *v18; // r15
  LONG *v19; // rbx
  unsigned __int64 v20; // r13
  char v21; // al
  __int64 CurrentIrql; // rcx
  unsigned int v23; // esi
  signed __int32 v24; // edx
  bool v25; // zf
  signed __int32 v26; // eax
  unsigned __int64 v27; // rbx
  __int64 NextPageTable; // rax
  __int64 v29; // r13
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r11
  unsigned __int64 v36; // rbx
  __int64 UsedPtesHandle; // rax
  __int64 v38; // r9
  _DWORD *v39; // r10
  unsigned __int8 WsleContents; // dl
  unsigned __int64 v41; // rax
  __int64 v42; // r10
  int v43; // r11d
  char v44; // al
  int v45; // esi
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rbx
  char v49; // r10
  unsigned __int64 v50; // rsi
  unsigned __int64 i; // rcx
  unsigned int v52; // r8d
  char v53; // r10
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r9
  __int64 v56; // rax
  unsigned __int64 v57; // rcx
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // r9
  int v61; // eax
  unsigned __int64 v62; // r9
  _QWORD *CloneAddress; // rax
  ULONG_PTR v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // r8
  ULONG_PTR v69; // r10
  BOOL v70; // esi
  unsigned __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rbx
  __int64 v77; // rdx
  unsigned int PageFileReservationOffset; // eax
  __int64 v79; // rdx
  __int16 v80; // ax
  __int64 v81; // r9
  struct _KEVENT *v82; // rsi
  __int64 v83; // r8
  unsigned int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  int v87; // r10d
  int v88; // r11d
  unsigned __int64 v89; // rax
  int v90; // r11d
  LONG *v91; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v93; // ebx
  unsigned int DpcWatchdogCount; // r14d
  __int64 DpcRequestSummary; // r9
  unsigned int DpcTimeCount; // esi
  int v97; // edx
  _KTHREAD *NextThread; // rax
  int v100; // [rsp+30h] [rbp-D0h]
  int v102; // [rsp+40h] [rbp-C0h]
  __int64 v103; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v104; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v105; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v106; // [rsp+60h] [rbp-A0h]
  int v107; // [rsp+68h] [rbp-98h]
  unsigned __int64 v108; // [rsp+70h] [rbp-90h]
  unsigned __int64 v109; // [rsp+78h] [rbp-88h] BYREF
  __int64 v110; // [rsp+80h] [rbp-80h]
  unsigned __int64 v111; // [rsp+88h] [rbp-78h]
  int v112; // [rsp+90h] [rbp-70h] BYREF
  __int64 v113; // [rsp+98h] [rbp-68h]
  int v114; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v115; // [rsp+A4h] [rbp-5Ch]
  __int64 v116; // [rsp+A8h] [rbp-58h]
  __int64 v117; // [rsp+B0h] [rbp-50h]
  _QWORD Base[257]; // [rsp+B8h] [rbp-48h] BYREF

  v7 = (__int64)a3;
  v113 = a4;
  v111 = a2;
  v116 = 256LL;
  v114 = 1;
  v115 = 0;
  v117 = 0LL;
  Base[0] = 0LL;
  v102 = 0;
  DemandZeroPte = MiMakeDemandZeroPte(16LL);
  v12 = *(unsigned int *)(v10 + 52);
  LODWORD(v12) = v12 & 0x7FFFFFFF;
  v13 = 0xFFFFF68000000000uLL;
  if ( (v12 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31)) == 0x7FFFFFFFELL )
  {
    DemandZeroPte = MiMakeDemandZeroPte((*(_DWORD *)(v10 + 48) >> 3) & 0x1F);
LABEL_4:
    v108 = v13
         + 8
         * ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) & 0xFFFFFFFFFLL);
    v14 = 0;
    goto LABEL_6;
  }
  if ( *(int *)(v10 + 52) < 0 )
    goto LABEL_4;
  v108 = v9;
  v102 = MiVadPureReserve(v10);
LABEL_6:
  v15 = v11;
  if ( !a5 )
    v15 = 3;
  v107 = v15;
  v16 = *(unsigned __int16 *)(v7 + 1452);
  v17 = v7 + 1280;
  v18 = (__int64 *)(v13 + ((a1 >> 9) & 0x7FFFFFFFF8LL));
  v100 = v11;
  v19 = &dword_14036D4C0;
  v20 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v110 = v7 + 1280;
  v21 = *(_BYTE *)(v7 + 1472) & 7;
  v104 = *(_QWORD *)(qword_14036C8F8 + 8 * v16);
  if ( v21 != 2 )
    v19 = (LONG *)(v7 + 1480);
  CurrentIrql = KeGetCurrentIrql();
  v106 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v19, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v23 = v14;
    if ( _interlockedbittestandset(v19, 0x1Fu) )
      v23 = ExpWaitForSpinLockExclusiveAndAcquire(v19, CurrentIrql);
    v24 = *v19;
    while ( (v24 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v24 & 0x40000000) == 0 )
      {
        v26 = _InterlockedCompareExchange(v19, v24 | 0x40000000, v24);
        v25 = v24 == v26;
        v24 = v26;
        if ( !v25 )
          continue;
      }
      if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v23);
      v24 = *v19;
    }
    v7 = (__int64)a3;
  }
  v19[1] = 0;
  v27 = v111;
  if ( (unsigned __int64)v18 <= v111 )
  {
    while ( 1 )
    {
      if ( v100 == 1 || ((unsigned __int16)v18 & 0xFFF) == 0 )
      {
        if ( HIDWORD(v116) )
          MiDeletePteList((__int64)&v114, (_KPROCESS *)v7, DemandZeroPte, (__int64)a6);
        if ( v102 )
        {
          NextPageTable = MiGetNextPageTable((unsigned __int64)v18, v27, 0LL, (unsigned __int8)v106, 4, &v112);
          v29 = NextPageTable;
          if ( !NextPageTable )
          {
            a6[3] += ((__int64)(v27 - (_QWORD)v18) >> 3) + 1;
            goto LABEL_168;
          }
          v30 = NextPageTable - (_QWORD)v18;
          v18 = (__int64 *)v29;
          a6[3] += v30 >> 3;
          v20 = v29 << 25 >> 16;
        }
        else
        {
          MiMakeSystemAddressValid((unsigned __int64)v18, 0LL, (*(_DWORD *)(v113 + 48) >> 8) & 0x3F, v106, v107);
        }
        v100 = 0;
      }
      v31 = MI_READ_PTE_LOCK_FREE(v18);
      v105 = v31;
      v36 = v31;
      if ( !v31 )
        break;
      if ( (v31 & 1) != 0 )
      {
        v39 = (_DWORD *)MI_GET_PFN_FROM_PTE(
                          ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                          v32,
                          v33,
                          ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( v20 >= 0xFFFFF68000000000uLL && v20 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          WsleContents = (*v39 >> 2) & 7;
          goto LABEL_49;
        }
        v41 = MI_READ_PTE_LOCK_FREE(v38);
        if ( (v41 & 1) != 0 )
          v44 = HIBYTE(v41) & 0xF ^ (HIBYTE(v41) & 0xF ^ (16 * (v41 >> 60))) & 0x70;
        else
          v44 = 10;
        v45 = v43;
        WsleContents = v44;
        if ( (*(_QWORD *)(v42 + 40) & 0x200000000000000LL) != 0 )
          v45 = 1;
        if ( (v44 & 0xF) == 8 )
        {
          MiUnlockWsle(v17, v20, v42);
          WsleContents = MiGetWsleContents(v46, v20);
        }
        if ( !v45 )
        {
LABEL_49:
          --*(_QWORD *)(v17 + 144);
          if ( v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL )
            --*(_QWORD *)(v17 + 128);
        }
        MiRemoveWsle(v17, v20, WsleContents, 10LL);
        v105 = v36 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        *v18 = v105;
        if ( (unsigned int)MiPteInShadowRange(v18) )
          MiWritePteShadow(v47);
        v48 = 1LL;
        v49 = v115;
        v50 = v20;
        if ( v114 != 1 )
        {
          if ( (v115 & 8) == 0 && v20 >= 0xFFFFF68000000000uLL && v20 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            v49 = v115 | 8;
            LOBYTE(v115) = v115 | 8;
          }
          if ( v114 )
          {
            for ( i = v20; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
            {
              if ( i > 0xFFFFF6FFFFFFFFFFuLL )
                break;
            }
          }
        }
        v52 = HIDWORD(v116);
        if ( HIDWORD(v116) )
        {
          v53 = v49 & 4;
          if ( !v53 )
          {
            v54 = Base[HIDWORD(v116) - 1];
            if ( (v54 & 0xC00) == 0 )
            {
              v55 = Base[HIDWORD(v116) - 1] & 0x3FFLL;
              if ( (v54 & 0xFFFFFFFFFFFFF000uLL) + ((v55 + 1) << 12) == v20 && v55 + 1 >= v55 && v55 + 1 <= 0x3FF )
              {
                ++v117;
                Base[HIDWORD(v116) - 1] = ((unsigned __int16)v54 ^ (unsigned __int16)(v54 + 1)) & 0x3FF ^ v54;
                v52 = HIDWORD(v116);
                goto LABEL_87;
              }
            }
          }
          if ( !v53 )
          {
            v56 = Base[HIDWORD(v116) - 1];
            if ( (v56 & 0xC00) == 0 && (v56 & 0xFFFFFFFFFFFFF000uLL) == v20 + 4096 )
            {
              v57 = Base[HIDWORD(v116) - 1] & 0x3FFLL;
              if ( v57 + 1 >= v57 && v57 + 1 <= 0x3FF )
              {
                ++v117;
                Base[HIDWORD(v116) - 1] = ((unsigned __int16)(v56 - 4096) ^ (unsigned __int16)(v56 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v56 - 4096);
                v52 = HIDWORD(v116);
LABEL_87:
                if ( v52 == (_DWORD)v116 - 1 )
                  MiDeletePteList((__int64)&v114, a3, DemandZeroPte, (__int64)a6);
                goto LABEL_135;
              }
            }
          }
        }
        if ( HIDWORD(v116) < (unsigned int)v116 )
        {
          while ( 1 )
          {
            v58 = 1024LL;
            if ( (unsigned __int64)(v48 - 1) <= 0x3FF )
              v58 = v48;
            v48 -= v58;
            v59 = v50 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v58 - 1) & 0x3FF;
            v50 += v58 << 12;
            Base[v52] = v59;
            v117 += v58;
            v52 = HIDWORD(v116) + 1;
            HIDWORD(v116) = v52;
            if ( v52 == (_DWORD)v116 && (v115 & 4) == 0 )
            {
              qsort(Base, v52, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
              MiCompressTbFlushList((__int64)&v114);
              v52 = HIDWORD(v116);
              if ( HIDWORD(v116) == (_DWORD)v116 )
                break;
            }
            if ( !v48 )
              goto LABEL_87;
          }
          if ( v48 )
          {
            HIBYTE(v115) = 1;
            v117 = HIDWORD(v116);
          }
        }
        else
        {
          HIBYTE(v115) = 1;
        }
        goto LABEL_87;
      }
      if ( (v31 & 0x400) != 0 )
      {
        MiGetPrototypePteDirect(v31, v32, v33, v34);
        if ( MI_PROTO_FORMAT_COMBINED(v36) )
        {
          v61 = MiDecrementCombinedPte(v60);
LABEL_95:
          if ( v61 == 3 )
          {
            ++a6[1];
          }
          else if ( v61 == 5 )
          {
            ++a6[2];
          }
        }
        else if ( !(unsigned int)MiIsPrototypePteVadLookup(v36) )
        {
          CloneAddress = MiLocateCloneAddress(v7, v62);
          if ( CloneAddress )
          {
            v61 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v64, v7);
            goto LABEL_95;
          }
        }
LABEL_99:
        *v18 = DemandZeroPte;
        if ( (unsigned int)MiPteInShadowRange(v18) )
          goto LABEL_100;
        goto LABEL_135;
      }
      if ( (v31 & 0x800) != 0 )
      {
        v66 = v35;
        v103 = v35;
        v67 = MiLockTransitionLeafPage((ULONG_PTR)v18, 0LL);
        v69 = v67;
        if ( !v67 )
          goto LABEL_165;
        v70 = 1;
        if ( !*(_WORD *)(v67 + 32) )
        {
          v71 = *(_QWORD *)(v67 + 40);
          v66 = *(_QWORD *)(v67 + 16);
          v103 = v66;
          v72 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v71 >> 40) & 0x3FF));
          v104 = v72;
          if ( (v66 & 2) != 0 )
            v70 = MI_IS_PTE_IN_WS_SWAP_SET(v72, &v103);
        }
        LOBYTE(v68) = 17;
        if ( (unsigned int)MiDeleteTransitionPte(v18, v69, v68, 0LL) == 3 )
          ++a6[1];
        if ( v66 )
        {
          v75 = v66;
          v76 = v104;
          MiReleasePageFileSpace(v104, v75, v70);
        }
        else
        {
          v76 = v104;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)&a3[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
        v77 = DemandZeroPte;
        if ( !v70 )
        {
          PageFileReservationOffset = MiGetPageFileReservationOffset(
                                        &v103,
                                        *(_QWORD *)(v76 + 8LL * ((unsigned __int16)v103 >> 12) + 5600),
                                        v73,
                                        v74);
          v77 = MiTransferSoftwarePte(DemandZeroPte, v79, PageFileReservationOffset);
        }
        *v18 = v77;
        if ( (unsigned int)MiPteInShadowRange(v18) )
LABEL_100:
          MiWritePteShadow(v65);
      }
      else
      {
        if ( ((v31 >> 5) & 0x1F) == 0x10 )
          ++a6[3];
        v80 = MiReverseSwizzleInvalidPte(v31, v32, v33, v34);
        if ( (v80 & 0x400) != 0 || (v80 & 0x800) != 0 || (v80 & 4) != 0 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          v36 = v105;
        }
        v81 = DemandZeroPte;
        v82 = *(struct _KEVENT **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v17 + 172));
        v104 = (__int64)v82;
        if ( ((v36 >> 1) & 1) != 0 && !MI_IS_PTE_IN_WS_SWAP_SET((__int64)v82, &v105) )
        {
          v84 = MiGetPageFileReservationOffset(
                  &v105,
                  *((_QWORD *)&v82[233].Header.WaitListHead.Flink + ((unsigned __int16)v36 >> 12)),
                  v83,
                  v81);
          v81 = MiTransferSoftwarePte(DemandZeroPte, v85, v84);
        }
        *v18 = v81;
        if ( (unsigned int)MiPteInShadowRange(v18) )
          MiWritePteShadow(v86);
        v109 = v36;
        if ( (v36 & 4) != 0 )
        {
          v89 = MI_READ_PTE_LOCK_FREE(&v109);
          if ( !v90 )
            v89 &= ~2uLL;
        }
        else if ( v88 && v87 )
        {
          v89 = MI_READ_PTE_LOCK_FREE(&v109);
        }
        else
        {
          v89 = 0LL;
        }
        v109 = v89;
        if ( v89 )
          MiReleasePageFileInfo(v82, v89, 0);
      }
LABEL_135:
      if ( ((unsigned __int8)++v18 & 0x78) == 0 )
      {
        v91 = &dword_14036D4C0;
        if ( (*(_BYTE *)(v17 + 192) & 7) != 2 )
          v91 = (LONG *)(v17 + 200);
        if ( (*v91 & 0x40000000) != 0 )
          goto LABEL_160;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v93 = 0;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v97 = 1;
        if ( DpcTimeCount > 7 )
        {
          if ( CurrentPrcb->QuantumEnd )
          {
            v93 = 1;
            goto LABEL_157;
          }
LABEL_152:
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v93 = 5;
          }
          else
          {
            if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
              goto LABEL_156;
            v93 = 6;
          }
          goto LABEL_157;
        }
      }
      else
      {
        v97 = 0;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v93 = 2;
          goto LABEL_157;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v93 = 3;
          goto LABEL_157;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v93 = 4;
          goto LABEL_157;
        }
      }
      if ( DpcWatchdogCount > 7 )
      {
        if ( v97 )
          goto LABEL_152;
LABEL_156:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        KiResetGlobalDpcWatchdogProfiler((__int64)CurrentPrcb);
        _enable();
LABEL_157:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v93, DpcWatchdogCount, DpcTimeCount, DpcRequestSummary);
        v17 = v110;
        if ( !v93 )
          goto LABEL_164;
LABEL_160:
        if ( HIDWORD(v116) )
          MiDeletePteList((__int64)&v114, a3, DemandZeroPte, (__int64)a6);
        v100 = 1;
        MiRelockWorkingSetExclusive(v17, (unsigned __int8)v106);
        goto LABEL_164;
      }
      v17 = v110;
LABEL_164:
      v20 += 4096LL;
LABEL_165:
      v27 = v111;
      if ( (unsigned __int64)v18 > v111 )
        goto LABEL_168;
      v7 = (__int64)a3;
    }
    UsedPtesHandle = MiGetUsedPtesHandle(v20, v32, v33, v34);
    MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
    if ( (unsigned __int64)v18 > v108 )
      ++a6[3];
    goto LABEL_99;
  }
LABEL_168:
  if ( HIDWORD(v116) )
    MiDeletePteList((__int64)&v114, a3, DemandZeroPte, (__int64)a6);
  return MiUnlockWorkingSetExclusive(v17, (unsigned __int8)v106);
}
