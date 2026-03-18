/*
 * XREFs of MmUnmapViewInSystemCache @ 0x140053130
 * Callers:
 *     CcUnmapVacb @ 0x14056F9B0 (CcUnmapVacb.c)
 * Callees:
 *     MI_WSLE_LOG_ACCESS @ 0x140011210 (MI_WSLE_LOG_ACCESS.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiRemoveWsle @ 0x140055F20 (MiRemoveWsle.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MiRemoveViewsFromSection @ 0x1400A23B4 (MiRemoveViewsFromSection.c)
 *     MiManageSubsectionView @ 0x1400A3110 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A3490 (MiGetSystemCacheReverseMap.c)
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400EACA4 (MiUpdateWorkingSetPrivateSize.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140102A40 (MiDecrementAndInsertStandbyPages.c)
 *     MiUnlockWsle @ 0x14010C8E0 (MiUnlockWsle.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14017C178 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiMakeLinkedListPte @ 0x14017C790 (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x14017C9D8 (MiUpdateLinkedListInPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, int a3)
{
  int v3; // r12d
  ULONG_PTR v5; // r13
  __int64 *v6; // r14
  int v7; // r15d
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  ULONG_PTR SystemCacheReverseMap; // rbp
  __int64 v12; // r11
  ULONG_PTR v13; // rax
  LONG *SharedVm; // rbx
  KIRQL v15; // al
  unsigned __int64 v16; // r11
  _QWORD *v17; // r10
  __int64 PteShadow; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r15
  __int64 v23; // rcx
  int v24; // r12d
  unsigned __int64 *v25; // rsi
  __int64 v26; // r9
  ULONG_PTR v27; // r10
  int v28; // ebp
  unsigned __int64 v29; // rax
  unsigned __int8 WsleContents; // r11
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rbx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  __int64 *v36; // r9
  __int64 v37; // rax
  __int64 v38; // r9
  unsigned __int64 *v39; // r11
  __int64 v40; // r10
  unsigned __int64 v41; // r9
  __int64 v42; // rax
  __int64 *v43; // r8
  __int64 v44; // rax
  unsigned __int8 v45; // al
  char v46; // cl
  int v47; // edx
  int v48; // eax
  ULONG_PTR v49; // rbp
  __int64 v50; // rbx
  KIRQL v51; // r14
  LONG *v52; // rax
  __int64 v53; // r13
  __int64 v54; // r15
  unsigned int v55; // ebp
  unsigned __int8 CurrentIrql; // r12
  __int64 v57; // r14
  int v58; // ecx
  __int64 v59; // rbx
  __int64 v60; // rsi
  __int64 v61; // r8
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // r14
  ULONG_PTR v65; // rbx
  __int64 v66; // rsi
  unsigned __int64 v67; // rbp
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 LinkedListPte; // rax
  __int64 *v72; // r11
  __int64 v73; // r10
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 result; // rax
  __int64 v78; // r11
  signed __int32 v79[8]; // [rsp+0h] [rbp-328h] BYREF
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-308h]
  KIRQL v81; // [rsp+30h] [rbp-2F8h]
  int v82; // [rsp+34h] [rbp-2F4h]
  int v83; // [rsp+38h] [rbp-2F0h]
  int v84; // [rsp+3Ch] [rbp-2ECh]
  int v85; // [rsp+40h] [rbp-2E8h]
  unsigned int v86; // [rsp+44h] [rbp-2E4h]
  __int64 v87; // [rsp+48h] [rbp-2E0h]
  ULONG_PTR BugCheckParameter3a; // [rsp+50h] [rbp-2D8h]
  unsigned __int64 v89; // [rsp+58h] [rbp-2D0h]
  __int64 v90; // [rsp+60h] [rbp-2C8h] BYREF
  int v91; // [rsp+68h] [rbp-2C0h]
  ULONG_PTR v92; // [rsp+70h] [rbp-2B8h]
  unsigned __int64 PrototypePteDirect; // [rsp+78h] [rbp-2B0h]
  __int64 v94; // [rsp+80h] [rbp-2A8h] BYREF
  __int64 *v95; // [rsp+88h] [rbp-2A0h]
  ULONG_PTR v96; // [rsp+90h] [rbp-298h]
  __int64 v97; // [rsp+98h] [rbp-290h]
  __int64 v98; // [rsp+A0h] [rbp-288h]
  ULONG_PTR v99; // [rsp+A8h] [rbp-280h]
  __int64 *v100; // [rsp+B0h] [rbp-278h]
  ULONG_PTR v101[5]; // [rsp+B8h] [rbp-270h] BYREF
  ULONG_PTR BugCheckParameter2[64]; // [rsp+E0h] [rbp-248h] BYREF
  void *retaddr; // [rsp+328h] [rbp+0h]

  v91 = a3;
  v99 = BugCheckParameter4;
  v3 = a3 & 1;
  v5 = BugCheckParameter3;
  v85 = v3;
  v6 = (__int64 *)(((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v100 = v6;
  v95 = v6 + 64;
  v97 = 48 * MiGetContainingPageTable(v6) - 0x58000000000LL;
  v98 = MiSectionControlArea(BugCheckParameter4);
  v7 = 0;
  v83 = 0;
  v8 = *(_QWORD *)(v98 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v82 = 0;
  v9 = *(_WORD *)(v98 + 60) & 0x3FF;
  v89 = v8;
  v84 = 0;
  PrototypePteDirect = 0LL;
  v86 = 2;
  v87 = *(_QWORD *)(qword_140388AF0 + 8 * v9);
  v10 = v87 + 6080;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v5);
  v96 = SystemCacheReverseMap;
  v13 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v92 = v13;
  if ( v13 )
  {
    if ( (v13 & 1) != 0 )
    {
      v13 &= ~1uLL;
      v86 = 4;
      v92 = v13;
      *(_QWORD *)(SystemCacheReverseMap + 24) = v13;
    }
    if ( *(_QWORD *)v13 != v12 )
      KeBugCheckEx(0x1Au, 0x782uLL, SystemCacheReverseMap, v5, BugCheckParameter4);
  }
  SharedVm = MiGetSharedVm(v10);
  v15 = ExAcquireSpinLockExclusive(SharedVm);
  v16 = v89;
  v17 = BugCheckParameter2;
  SharedVm[1] = 0;
  BugCheckParameter3a = (ULONG_PTR)BugCheckParameter2;
  v81 = v15;
  do
  {
    PteShadow = *v6;
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v6, *v6);
    v90 = PteShadow;
    *v17 = PteShadow;
    if ( (PteShadow & 1) != 0 )
    {
      v22 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v90) - 0x58000000000LL;
      if ( dword_140388C68 )
      {
        MI_WSLE_LOG_ACCESS(v10, v6);
        v21 = 0x3FFFFFFFFFFFFFFFLL;
      }
      if ( v3 && (v21 & *(_QWORD *)(v22 + 24)) == 1 && (unsigned int)MiGetPfnPriority(v22) - 3 <= 2 )
      {
        MiLockPageAtDpcInline(v23);
        *(_BYTE *)(v22 + 35) = *(_BYTE *)(v22 + 35) & 0xF8 | 2;
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v24 = 0;
      v25 = (unsigned __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v26 = MI_GET_PFN_FROM_PTE(v25, v19, v20, v21);
      if ( v5 < v27 || v5 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v29 = *v25;
        v28 = 1;
        if ( (unsigned __int64)v25 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v25 <= 0xFFFFF6FB7DBED7F8uLL )
          v29 = MiReadPteShadow(v25, *v25);
        if ( (v29 & 1) != 0 )
          WsleContents = HIBYTE(v29) & 0xF | (16 * ((v29 >> 60) & 7));
        else
          WsleContents = 10;
        v31 = (*(_QWORD *)(v26 + 40) >> 57) & 1LL;
        if ( (WsleContents & 0xF) == 8 )
        {
          MiUnlockWsle(v87 + 6080, v5, v26);
          WsleContents = MiGetWsleContents(v32, v5);
        }
        if ( (_DWORD)v31 )
        {
          v33 = v87;
          goto LABEL_30;
        }
      }
      else
      {
        v28 = 0;
      }
      v33 = v87;
      MiUpdateWorkingSetPrivateSize(v87 + 6080, v5, -1LL, v26);
LABEL_30:
      v34 = *v25;
      v35 = 0xFFFFF6FB7DBED000uLL;
      if ( (unsigned __int64)v25 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v25 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v34) )
      {
        LOBYTE(v34) = v34 | 0x20;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        LOBYTE(v34) = 32;
      }
      else if ( (MiFlags & 0x2000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v34 & 0x20) != 0 )
      {
        *v25 = 0LL;
        if ( (unsigned __int64)v25 >= v35 && (unsigned __int64)v25 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v25, 0LL);
      }
      else if ( (MI_INTERLOCKED_EXCHANGE_PTE(v25) & 0x20) == 0 )
      {
        goto LABEL_45;
      }
      v24 = 1;
LABEL_45:
      v10 = v33 + 6080;
      MiRemoveWsle(v33 + 6080, v5, WsleContents, 10LL, BugCheckParameter4a);
      if ( v28 )
      {
        v36 = (__int64 *)(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
        v37 = *v36;
        if ( (unsigned __int64)v36 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v36 <= 0xFFFFF6FB7DBED7F8uLL )
          v37 = MiReadPteShadow(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, *v36);
        v94 = v37;
        v39 = (unsigned __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v94) - 0x58000000000LL);
        if ( ((*(_DWORD *)v39 >> 4) & 0x3FF) == 0 )
        {
          v40 = 0LL;
          v41 = v38 << 25 >> 16;
          memset(v101, 0, 32);
          do
          {
            v42 = *(_QWORD *)v41;
            if ( v41 >= 0xFFFFF6FB7DBED000uLL && v41 <= 0xFFFFF6FB7DBED7F8uLL )
              LOBYTE(v42) = MiReadPteShadow(v41, *(_QWORD *)v41);
            if ( (v42 & 1) != 0 )
            {
              v43 = (__int64 *)(((((__int64)((v41 << 25) - v40) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
              v44 = *v43;
              if ( (unsigned __int64)v43 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v43 <= 0xFFFFF6FB7DBED7F8uLL )
                v44 = MiReadPteShadow(v43, *v43);
              if ( (v44 & 1) != 0 )
                v45 = HIBYTE(v44) & 0xF;
              else
                v45 = 10;
              if ( (unsigned __int8)(v45 - 8) > 2u )
                ++*((_DWORD *)v101 + v45);
            }
            v41 += 8LL;
          }
          while ( (v41 & 0xFFF) != 0 );
          v46 = 8;
          while ( 1 )
          {
            v47 = *((_DWORD *)v101 + (unsigned __int8)--v46);
            if ( v47 )
              break;
            if ( !v46 )
              goto LABEL_69;
          }
          *v39 = *v39 & 0xFFFFFFFFFFFE000FuLL | (16 * (v47 & 0x3FF | ((unsigned __int64)(v46 & 7) << 10)));
        }
      }
LABEL_69:
      v48 = v84 + 1;
      if ( !v24 )
        v48 = v84;
      v84 = v48;
      if ( v89 )
        PrototypePteDirect = *(_QWORD *)(v22 + 8) | 0x8000000000000000uLL;
      v17 = (_QWORD *)BugCheckParameter3a;
      v7 = v83;
      v3 = v85;
      v16 = v89;
      goto LABEL_77;
    }
    if ( (PteShadow & 0x400) == 0 )
      break;
    if ( v16 )
      PrototypePteDirect = MiGetPrototypePteDirect(PteShadow);
LABEL_77:
    *v6 = 0LL;
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v6, 0LL);
    ++v7;
    ++v17;
    ++v6;
    v83 = v7;
    v5 += 4096LL;
    BugCheckParameter3a = (ULONG_PTR)v17;
  }
  while ( v6 < v95 );
  v49 = v96;
  BugCheckParameter3a = v5;
  v50 = *(_QWORD *)(v96 + 16);
  if ( v50 )
    *(_QWORD *)(v96 + 16) = 0LL;
  v51 = v81;
  MiPreUnlockWorkingSetExclusive(v10, v81);
  v52 = MiGetSharedVm(v10);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v52, retaddr);
  else
    *v52 = 0;
  __writecr8(v51);
  if ( v50 )
    MiManageSubsectionView(v92, v49, v86);
  _InterlockedOr(v79, 0);
  v53 = v83;
  v54 = 0LL;
  v55 = 0;
  v85 = KiTbFlushTimeStamp;
  CurrentIrql = 17;
  v57 = 0LL;
  if ( v83 <= 0 )
    goto LABEL_113;
  v58 = v82;
  while ( 2 )
  {
    if ( (BugCheckParameter2[v57] & 1) != 0 )
    {
      ++v54;
      v59 = 0LL;
      v60 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&BugCheckParameter2[v82]) - 0x58000000000LL;
      if ( !v55 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        MiLockPageAtDpcInline(v60);
        goto LABEL_93;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v60 + 24), 0x3FuLL) )
      {
        MiDecrementAndInsertStandbyPages(BugCheckParameter2, v55, CurrentIrql);
        --v57;
        v58 = v82 - 1;
        v55 = 0;
        --v54;
        goto LABEL_100;
      }
LABEL_93:
      if ( (BugCheckParameter2[v57] & 0x42) != 0 )
      {
        v59 = MiCaptureDirtyBitToPfn(v60);
        goto LABEL_95;
      }
      if ( (*(_QWORD *)(v60 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || *(_WORD *)(v60 + 32) != 1
        || (*(_QWORD *)(v60 + 24) & 0x4000000000000000LL) != 0
        || (*(_BYTE *)(v60 + 35) & 0x40) != 0
        || (*(_BYTE *)(v60 + 34) & 0x10) != 0 )
      {
LABEL_95:
        if ( v55 )
        {
          LOBYTE(v61) = 17;
          MiDecrementAndInsertStandbyPages(BugCheckParameter2, v55, v61);
          v55 = 0;
        }
        MiDecrementShareCount(v60);
        _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        if ( v59 )
          MiReleasePageFileInfo(v87, v59, 0LL);
      }
      else
      {
        v63 = v55++;
        BugCheckParameter2[v63] = v60;
      }
      v58 = v82;
    }
LABEL_100:
    ++v58;
    ++v57;
    v82 = v58;
    if ( v57 < v53 )
      continue;
    break;
  }
  if ( v55 )
    MiDecrementAndInsertStandbyPages(BugCheckParameter2, v55, CurrentIrql);
  if ( v54 )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
    v62 = v97;
    MiLockPageAtDpcInline(v97);
    *(_QWORD *)(v62 + 24) ^= (*(_QWORD *)(v62 + 24) ^ (*(_QWORD *)(v62 + 24) - v54)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_114;
  }
LABEL_113:
  KeGetCurrentIrql();
  __writecr8(2uLL);
LABEL_114:
  v64 = v98;
  v65 = 0LL;
  v66 = 0LL;
  if ( v89 )
    v65 = v92;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v98 + 72));
  if ( v65 )
  {
    v67 = PrototypePteDirect;
    while ( 1 )
    {
      v68 = MiRemoveViewsFromSection(v65);
      v69 = *(_QWORD *)(v65 + 8);
      v66 += v68;
      if ( v67 >= v69 && v67 < v69 + 8LL * *(unsigned int *)(v65 + 44) )
        break;
      v65 = *(_QWORD *)(v65 + 16);
      if ( !v65 )
        KeBugCheckEx(0x1Au, 0x783uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3a, v99);
    }
  }
  v70 = v81;
  --*(_QWORD *)(v64 + 40);
  --*(_DWORD *)(v64 + 88);
  MiCheckControlArea(v64, v70);
  if ( v66 )
    MiReturnCrossPartitionSectionCharges(v87, 1LL, v66);
  LinkedListPte = MiMakeLinkedListPte(v85 & 0xFFFFF);
  v72 = v100;
  v73 = LinkedListPte;
  v74 = (unsigned __int64)(v100 + 2);
  v90 = LinkedListPte;
  v100[2] = LinkedListPte;
  if ( v74 >= 0xFFFFF6FB7DBED000uLL && v74 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v74, LinkedListPte);
  v75 = (unsigned __int64)(v72 + 1);
  v72[1] = 0LL;
  if ( (unsigned __int64)(v72 + 1) >= 0xFFFFF6FB7DBED000uLL && v75 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v75, 0LL);
  if ( v84 )
    v76 = 2LL;
  else
    v76 = 0LL;
  result = MiUpdateLinkedListInPte(v73, v76);
  v90 = result;
  *(_QWORD *)(v78 + 24) = result;
  if ( (unsigned __int64)(v78 + 24) >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)(v78 + 24) <= 0xFFFFF6FB7DBED7F8uLL )
    result = MiWritePteShadow(v78 + 24, result);
  if ( (v91 & 2) == 0 )
    return MiReleaseSystemCacheView(v78);
  return result;
}
