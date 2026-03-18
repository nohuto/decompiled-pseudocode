/*
 * XREFs of MmUnmapViewInSystemCache @ 0x140018AE0
 * Callers:
 *     CcUnmapVacb @ 0x140593090 (CcUnmapVacb.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002E730 (MiDecrementAndInsertStandbyPages.c)
 *     MiUnlockWsle @ 0x14004EB38 (MiUnlockWsle.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiCompressTbFlushList @ 0x1400B06D0 (MiCompressTbFlushList.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1400BB318 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiLockSetPfnPriority @ 0x1400BB5D8 (MiLockSetPfnPriority.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiReleaseSystemCacheView @ 0x1400DD1D0 (MiReleaseSystemCacheView.c)
 *     MiManageSubsectionView @ 0x1400DDC40 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x1400DDF40 (MiGetSystemCacheReverseMap.c)
 *     MiRemoveWsleList @ 0x1400E1950 (MiRemoveWsleList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveViewsFromSection @ 0x1400E503C (MiRemoveViewsFromSection.c)
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiRebuildPageTableLeafAges @ 0x140125A40 (MiRebuildPageTableLeafAges.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401A6474 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiMakeLinkedListPte @ 0x1401A65E4 (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x1401A6800 (MiUpdateLinkedListInPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v4; // r15
  unsigned __int64 v5; // r14
  __int64 v6; // rdi
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rbx
  ULONG_PTR SystemCacheReverseMap; // rcx
  ULONG_PTR v11; // rax
  unsigned int *MmInternal; // rbx
  __int64 v13; // rdx
  _BYTE *v14; // rcx
  ULONG_PTR v15; // r13
  size_t v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rdi
  ULONG_PTR v19; // rsi
  char v20; // cl
  unsigned int v21; // r10d
  char v22; // r9
  __int64 v23; // r11
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r10
  unsigned __int64 Process; // rcx
  __int64 v36; // rdi
  __int64 v37; // r9
  __int64 *v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  char v43; // r8^7
  __int64 v44; // rsi
  char v45; // al
  unsigned __int64 *v46; // r8
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r8
  char WsleContents; // r11
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  _BYTE *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rbx
  __int64 v62; // rax
  ULONG_PTR v63; // rsi
  char v64; // r13
  __int64 v65; // rdx
  __int64 v66; // r8
  int v67; // edi
  __int64 v68; // r15
  unsigned int v69; // ebp
  __int64 v70; // r14
  __int64 v71; // r12
  ULONG_PTR v72; // r9
  __int64 v73; // rbx
  __int64 v74; // rsi
  __int64 v75; // r8
  volatile signed __int64 *v76; // rdi
  __int64 v77; // rax
  unsigned __int8 CurrentIrql; // r14
  ULONG_PTR v79; // rbp
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rsi
  ULONG_PTR v83; // rbx
  __int64 v84; // rbp
  unsigned __int64 v85; // r13
  __int64 v86; // rax
  unsigned __int64 v87; // rcx
  __int64 LinkedListPte; // rax
  unsigned __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // r10
  __int64 v92; // r11
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r10
  __int64 v96; // rdx
  __int64 v97; // r11
  __int64 result; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r11
  signed __int32 v102[8]; // [rsp+0h] [rbp-108h] BYREF
  int v103; // [rsp+30h] [rbp-D8h]
  int v104; // [rsp+34h] [rbp-D4h]
  __int64 v105; // [rsp+38h] [rbp-D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C8h]
  unsigned int v107; // [rsp+48h] [rbp-C0h]
  int v108; // [rsp+4Ch] [rbp-BCh]
  __int64 updated; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v110; // [rsp+58h] [rbp-B0h]
  ULONG_PTR v111; // [rsp+60h] [rbp-A8h]
  ULONG_PTR v112; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v113; // [rsp+70h] [rbp-98h]
  unsigned __int64 PrototypePteDirect; // [rsp+78h] [rbp-90h]
  _BYTE *v115; // [rsp+80h] [rbp-88h]
  __int64 v116; // [rsp+88h] [rbp-80h]
  unsigned __int64 v117; // [rsp+90h] [rbp-78h]
  __int64 v118; // [rsp+98h] [rbp-70h]
  __int64 v119; // [rsp+A0h] [rbp-68h]
  __int64 v120; // [rsp+A8h] [rbp-60h]
  __int64 v121; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v122; // [rsp+B8h] [rbp-50h]
  ULONG_PTR BugCheckParameter3a; // [rsp+110h] [rbp+8h]
  int v126; // [rsp+128h] [rbp+20h]

  BugCheckParameter3a = BugCheckParameter3;
  v126 = a3 & 1;
  v4 = BugCheckParameter3;
  v5 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v122 = v5;
  v117 = v5 + 512;
  v120 = 48 * MiGetContainingPageTable(v5) - 0x58000000000LL;
  v6 = MiSectionControlArea(BugCheckParameter4);
  v121 = v6;
  v104 = 0;
  v7 = 0;
  v8 = *(_WORD *)(v6 + 60) & 0x3FF;
  v113 = *(_QWORD *)(v6 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v103 = 0;
  v108 = 0;
  PrototypePteDirect = 0LL;
  v116 = *(_QWORD *)(qword_1403CBD88 + 8 * v8);
  v107 = 2;
  v9 = v116 + 7168;
  v105 = v116 + 7168;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v4, v8);
  v111 = SystemCacheReverseMap;
  v11 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v112 = v11;
  if ( v11 )
  {
    if ( (v11 & 1) != 0 )
    {
      v11 &= ~1uLL;
      v107 = 4;
      v112 = v11;
      *(_QWORD *)(SystemCacheReverseMap + 24) = v11;
    }
    if ( *(_QWORD *)v11 != v6 )
      KeBugCheckEx(0x1Au, 0x782uLL, SystemCacheReverseMap, v4, BugCheckParameter4);
  }
  v118 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LOBYTE(v119) = MiLockWorkingSetShared(v9);
  MiLockPageTableInternal(v9, v118, 0LL);
  MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
  v13 = *(_QWORD *)MmInternal;
  *(_DWORD *)(v13 + 8) = MmInternal[6];
  *(_DWORD *)(v13 + 12) = 0;
  *(_DWORD *)v13 = 0;
  *(_WORD *)(v13 + 4) = 0;
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_QWORD *)(v13 + 24) = 0LL;
  v14 = (_BYTE *)*((_QWORD *)MmInternal + 2);
  v15 = *((_QWORD *)MmInternal + 1);
  v16 = 8LL * MmInternal[6];
  BugCheckParameter2 = v15;
  v115 = v14;
  memset(v14, 0, v16);
  v17 = *(_QWORD *)MmInternal;
  v110 = 0LL;
  *(_BYTE *)(v17 + 4) |= 4u;
  while ( 1 )
  {
    v18 = 1LL;
    v19 = v4;
    if ( *(_DWORD *)v17 != 1 )
    {
      v20 = *(_BYTE *)(v17 + 4);
      if ( (v20 & 8) == 0 && v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_BYTE *)(v17 + 4) = v20 | 8;
    }
    v21 = *(_DWORD *)(v17 + 12);
    if ( !v21 )
      goto LABEL_24;
    v22 = *(_BYTE *)(v17 + 4) & 4;
    if ( !v22 )
    {
      v23 = v17 + 8LL * (v21 - 1);
      v24 = *(_QWORD *)(v23 + 24);
      if ( (v24 & 0xC00) == 0 )
      {
        v25 = *(_QWORD *)(v23 + 24) & 0x3FFLL;
        if ( (v24 & 0xFFFFFFFFFFFFF000uLL) + ((v25 + 1) << 12) == v4 && v25 + 1 >= v25 && v25 + 1 <= 0x3FF )
        {
          ++*(_QWORD *)(v17 + 16);
          *(_QWORD *)(v23 + 24) = v24 ^ ((unsigned __int16)v24 ^ (unsigned __int16)(v24 + 1)) & 0x3FF;
          goto LABEL_35;
        }
      }
    }
    if ( v22
      || (v26 = v17 + 8LL * (v21 - 1), v27 = *(_QWORD *)(v26 + 24), (v27 & 0xC00) != 0)
      || (v27 & 0xFFFFFFFFFFFFF000uLL) != v4 + 4096
      || (v28 = *(_QWORD *)(v26 + 24) & 0x3FFLL, v28 + 1 < v28)
      || v28 + 1 > 0x3FF )
    {
LABEL_24:
      if ( v21 < *(_DWORD *)(v17 + 8) )
      {
        while ( 1 )
        {
          v29 = 1024LL;
          if ( (unsigned __int64)(v18 - 1) <= 0x3FF )
            v29 = v18;
          v18 -= v29;
          v30 = v19 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v29 - 1) & 0x3FF;
          v19 += v29 << 12;
          *(_QWORD *)(v17 + 8LL * (unsigned int)(*(_DWORD *)(v17 + 12))++ + 24) = v30;
          v31 = *(_DWORD *)(v17 + 12);
          *(_QWORD *)(v17 + 16) += v29;
          if ( v31 == *(_DWORD *)(v17 + 8) && (*(_BYTE *)(v17 + 4) & 4) == 0 )
          {
            qsort((void *)(v17 + 24), v31, 8uLL, MiTbFlushSort);
            MiCompressTbFlushList(v17);
            v32 = *(unsigned int *)(v17 + 12);
            if ( (_DWORD)v32 == *(_DWORD *)(v17 + 8) )
              break;
          }
          if ( !v18 )
            goto LABEL_35;
        }
        if ( v18 )
        {
          *(_BYTE *)(v17 + 5) = 1;
          *(_QWORD *)(v17 + 16) = v32;
        }
      }
      else
      {
        *(_BYTE *)(v17 + 5) = 1;
      }
    }
    else
    {
      ++*(_QWORD *)(v17 + 16);
      *(_QWORD *)(v26 + 24) = (v27 - 4096) ^ ((unsigned __int16)(v27 - 4096) ^ (unsigned __int16)(v27 - 4096 + 1)) & 0x3FF;
    }
LABEL_35:
    v33 = MI_READ_PTE_LOCK_FREE(v5);
    v34 = v110;
    updated = v33;
    *(_QWORD *)(v15 + 8 * v110) = v33;
    if ( (v33 & 1) == 0 )
      break;
    v36 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&updated) - 0x58000000000LL;
    if ( !dword_1403CBF28 )
      goto LABEL_53;
    Process = (__int64)(v5 << 25) >> 16;
    if ( Process >= 0xFFFFF68000000000uLL && Process <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_51;
    Process >>= 9;
    v38 = (__int64 *)((Process & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v39 = *v38;
    if ( (unsigned __int64)v38 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v38 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(Process, v39, v38, v37)
      && (v39 & 1) != 0
      && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      v41 = *(_QWORD *)(Process + 1544);
      if ( v41 )
      {
        v42 = *(_QWORD *)(v41 + 8 * ((v40 >> 3) & 0x1FF));
        v43 = HIBYTE(v39);
        Process = (unsigned __int8)v42;
        LOBYTE(Process) = v42 & 0x20;
        if ( (v42 & 0x20) == 0 )
          v43 = HIBYTE(v39);
        HIBYTE(v39) = v43;
        if ( (v42 & 0x42) != 0 )
          HIBYTE(v39) = v43;
      }
    }
    if ( (HIBYTE(v39) & 0xF) == 7 )
    {
LABEL_53:
      v44 = v105;
    }
    else
    {
LABEL_51:
      v44 = v105;
      if ( (*(_BYTE *)v5 & 0x20) != 0 )
        MiLogPageAccess(v105, v5);
    }
    if ( v126 )
    {
      Process = 0x3FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)(v36 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v45 = *(_BYTE *)(v36 + 35);
        if ( ((v45 & 8) != 0 || (v45 & 7u) > 2) && (unsigned int)MiGetPfnPriority(v36) <= 5 )
          MiLockSetPfnPriority(Process, 2LL);
      }
    }
    v46 = (unsigned __int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v47 = 0xFFFFF6FB7DBED000uLL;
    v48 = *v46;
    if ( (unsigned __int64)v46 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v46 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(Process, v48, v46, 0xFFFFF6FB7DBED000uLL)
      && (v48 & 1) != 0
      && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
    {
      v50 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v50 )
      {
        v51 = *(_QWORD *)(v50 + 8 * ((v49 >> 3) & 0x1FF));
        v52 = v48 | 0x20;
        if ( (v51 & 0x20) == 0 )
          v52 = v48;
        v48 = v52;
        if ( (v51 & 0x42) != 0 )
          v48 = v52 | 0x42;
      }
    }
    WsleContents = HIBYTE(v48) & 0xF | (16 * ((v48 >> 60) & 7));
    if ( (HIBYTE(v48) & 0xF) == 8 )
    {
      MiUnlockWsle(v44, v4, v36);
      WsleContents = MiGetWsleContents(v54, v4);
      v47 = 0xFFFFF6FB7DBED000uLL;
    }
    v55 = ZeroPte;
    v56 = *(_QWORD *)v5;
    if ( v5 >= v47
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v56, ZeroPte, v47) )
    {
      LOBYTE(v56) = v56 | 0x20;
    }
    if ( (MiFlags & 0x800) != 0 )
    {
      LOBYTE(v56) = 32;
    }
    else if ( (MiFlags & 0x4000000) != 0 )
    {
      _mm_lfence();
    }
    if ( (v56 & 0x20) != 0 )
    {
      *(_QWORD *)v5 = v55;
      if ( v5 >= v47 && v5 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v5, v55);
    }
    else if ( (MI_INTERLOCKED_EXCHANGE_PTE(v5, v55) & 0x20) == 0 )
    {
      goto LABEL_88;
    }
    v108 = 1;
LABEL_88:
    v34 = v110;
    v57 = v115;
    v115[8 * v110] = WsleContents;
    v57[8 * v34 + 1] = 1;
    if ( v113 )
      PrototypePteDirect = *(_QWORD *)(v36 + 8) | 0x8000000000000000uLL;
    v7 = v104 + 1;
LABEL_97:
    ++v104;
    v4 += 4096LL;
    v110 = v34 + 1;
    v5 += 8LL;
    BugCheckParameter3a = v4;
    if ( v5 >= v117 )
      goto LABEL_101;
  }
  if ( (v33 & 0x400) != 0 )
  {
    if ( v113 )
      PrototypePteDirect = MiGetPrototypePteDirect(v33);
    *(_QWORD *)v5 = ZeroPte;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v5, ZeroPte);
    goto LABEL_97;
  }
  *(_QWORD *)v5 = ZeroPte;
  if ( MiPteInShadowRange(v5) )
    MiWritePteShadow(v59, v58);
LABEL_101:
  if ( v7 )
  {
    v60 = v17;
    v61 = v105;
    v62 = MiRemoveWsleList(v105, v60, v115, v7);
    if ( v62 )
      MiRebuildPageTableLeafAges(0LL, v62 << 25 >> 16 << 25 >> 16);
  }
  else
  {
    v61 = v105;
  }
  v63 = v111;
  if ( *(_QWORD *)(v111 + 16) )
  {
    *(_QWORD *)(v111 + 16) = 0LL;
    v64 = 1;
  }
  else
  {
    v64 = 0;
  }
  MiUnlockPageTableInternal(v61, v118);
  LOBYTE(v65) = 2;
  MiUnlockWorkingSetShared(v61, v65);
  _InterlockedOr(v102, 0);
  v67 = KiTbFlushTimeStamp;
  v68 = 0LL;
  v69 = 0;
  LODWORD(v105) = KiTbFlushTimeStamp;
  v70 = 0LL;
  v71 = v104;
  if ( v104 > 0 )
  {
    v72 = BugCheckParameter2;
    while ( (*(_BYTE *)(v72 + 8 * v70) & 1) == 0 )
    {
LABEL_120:
      ++v103;
      if ( ++v70 >= v71 )
      {
        if ( v69 )
        {
          LOBYTE(v66) = 2;
          MiDecrementAndInsertStandbyPages(v72, v69, v66);
        }
        v63 = v111;
        v67 = v105;
        goto LABEL_124;
      }
    }
    ++v68;
    v73 = 0LL;
    v74 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v72 + 8LL * v103) - 0x58000000000LL;
    v76 = (volatile signed __int64 *)(v74 + 24);
    if ( !v69 )
    {
      MiLockPageAtDpcInline(v74);
      v72 = BugCheckParameter2;
      goto LABEL_113;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v76, 0x3FuLL) )
    {
      LOBYTE(v75) = 2;
      MiDecrementAndInsertStandbyPages(v72, v69, v75);
      --v103;
      --v70;
      --v68;
      v69 = 0;
    }
    else
    {
LABEL_113:
      if ( (*(_BYTE *)(v72 + 8 * v70) & 0x42) != 0 )
      {
        v77 = MiCaptureDirtyBitToPfn(v74);
        v72 = BugCheckParameter2;
        v73 = v77;
      }
      else
      {
        v76 = (volatile signed __int64 *)(v74 + 24);
        v66 = 0x3FFFFFFFFFFFFFFFLL;
        if ( (*(_QWORD *)(v74 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        {
          v76 = (volatile signed __int64 *)(v74 + 24);
          if ( *(_WORD *)(v74 + 32) == 1 )
          {
            v76 = (volatile signed __int64 *)(v74 + 24);
            if ( (*(_QWORD *)(v74 + 24) & 0x4000000000000000LL) == 0 )
            {
              v76 = (volatile signed __int64 *)(v74 + 24);
              if ( (*(_BYTE *)(v74 + 35) & 0x40) == 0 )
              {
                v76 = (volatile signed __int64 *)(v74 + 24);
                if ( (*(_BYTE *)(v74 + 34) & 0x10) == 0 )
                {
                  v81 = v69++;
                  *(_QWORD *)(v72 + 8 * v81) = v74;
                  goto LABEL_120;
                }
              }
            }
          }
        }
      }
      if ( v69 )
      {
        LOBYTE(v66) = 17;
        MiDecrementAndInsertStandbyPages(v72, v69, v66);
        v69 = 0;
      }
      MiDecrementShareCount(v74);
      _InterlockedAnd64(v76, 0x7FFFFFFFFFFFFFFFuLL);
      if ( v73 )
        MiReleasePageFileInfo(v116, v73, 0LL);
    }
    v72 = BugCheckParameter2;
    goto LABEL_120;
  }
LABEL_124:
  CurrentIrql = v119;
  __writecr8((unsigned __int8)v119);
  v79 = v112;
  if ( v64 == 1 )
    MiManageSubsectionView(v112, v63, v107);
  if ( v68 )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
    v80 = v120;
    MiLockPageAtDpcInline(v120);
    *(_QWORD *)(v80 + 24) ^= (*(_QWORD *)(v80 + 24) ^ (*(_QWORD *)(v80 + 24) - v68)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v80 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  v82 = 0LL;
  v83 = 0LL;
  if ( v113 )
    v83 = v79;
  v84 = v121;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v121 + 72));
  if ( v83 )
  {
    v85 = PrototypePteDirect;
    while ( 1 )
    {
      v86 = MiRemoveViewsFromSection(v83);
      v87 = *(_QWORD *)(v83 + 8);
      v82 += v86;
      if ( v85 >= v87 && v85 < v87 + 8LL * *(unsigned int *)(v83 + 44) )
        break;
      v83 = *(_QWORD *)(v83 + 16);
      if ( !v83 )
        KeBugCheckEx(0x1Au, 0x783uLL, BugCheckParameter2, BugCheckParameter3a, BugCheckParameter4);
    }
  }
  --*(_QWORD *)(v84 + 40);
  --*(_DWORD *)(v84 + 88);
  MiCheckControlArea(v84, CurrentIrql);
  if ( v82 )
    MiReturnCrossPartitionSectionCharges(v116, 1LL, v82);
  LinkedListPte = MiMakeLinkedListPte(v67 & 0xFFFFF);
  v89 = v122 + 16;
  updated = LinkedListPte;
  *(_QWORD *)(v122 + 16) = LinkedListPte;
  if ( MiPteInShadowRange(v89) )
    MiWritePteShadow(v90, v91);
  *(_QWORD *)(v92 + 8) = ZeroPte;
  if ( MiPteInShadowRange(v92 + 8) )
    MiWritePteShadow(v94, v93);
  if ( v108 == 1 )
    v96 = 2LL;
  else
    v96 = 0LL;
  updated = MiUpdateLinkedListInPte(v95, v96);
  *(_QWORD *)(v97 + 24) = updated;
  result = MiPteInShadowRange(v97 + 24);
  if ( (_DWORD)result )
    result = MiWritePteShadow(v100, v99);
  if ( (a3 & 2) == 0 )
    return MiReleaseSystemCacheView(v101);
  return result;
}
