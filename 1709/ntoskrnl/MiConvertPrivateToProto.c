/*
 * XREFs of MiConvertPrivateToProto @ 0x1400EA3B8
 * Callers:
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140011210 (MI_WSLE_LOG_ACCESS.c)
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiRemoveWsle @ 0x140055F20 (MiRemoveWsle.c)
 *     MiRebuildPageTableLeafAges @ 0x14005C020 (MiRebuildPageTableLeafAges.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiCopyPfnEntry @ 0x1400CA320 (MiCopyPfnEntry.c)
 *     MiFillCombinePage @ 0x1400CD09C (MiFillCombinePage.c)
 *     MiSetWsleProtection @ 0x1400E5A4C (MiSetWsleProtection.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400EACA4 (MiUpdateWorkingSetPrivateSize.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiComparePages @ 0x1400EDAF0 (MiComparePages.c)
 *     MiResolveProtoCombine @ 0x1400EDBF4 (MiResolveProtoCombine.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1400EDF24 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiUpdatePfnPriority @ 0x1400EDFC4 (MiUpdatePfnPriority.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14011B680 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiMakePrototypePteDirect @ 0x14017C7C0 (MiMakePrototypePteDirect.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiGetCrossPartitionCombineCharges @ 0x140231884 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x140231B2C (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiConvertPrivateToProto(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        int *a6,
        __int64 a7)
{
  unsigned __int64 v7; // r14
  __int64 PteShadow; // rbx
  unsigned __int64 *v9; // r9
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // rdi
  unsigned int v19; // r10d
  char v20; // r8
  _QWORD *v21; // rbx
  __int64 v22; // r9
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // r12
  __int64 v33; // rbx
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rdx
  unsigned int PfnPriority; // eax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v49; // r12
  __int64 v50; // rbx
  __int64 v51; // rcx
  char WsleContents; // di
  __int64 v53; // r9
  __int64 v54; // rbx
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // r14
  unsigned int v62; // ebx
  __int64 v63; // r8
  __int64 v64; // rcx
  unsigned int v66; // ecx
  char v68; // [rsp+30h] [rbp-91h]
  unsigned __int8 v69; // [rsp+31h] [rbp-90h]
  char v70; // [rsp+32h] [rbp-8Fh]
  int v71; // [rsp+34h] [rbp-8Dh]
  unsigned __int64 v72; // [rsp+38h] [rbp-89h] BYREF
  __int64 v73; // [rsp+40h] [rbp-81h]
  __int64 v74; // [rsp+48h] [rbp-79h]
  unsigned __int64 *v75; // [rsp+50h] [rbp-71h]
  __int64 v76; // [rsp+58h] [rbp-69h]
  int *v77; // [rsp+60h] [rbp-61h]
  __int64 v78; // [rsp+68h] [rbp-59h]
  __int64 v79; // [rsp+70h] [rbp-51h]
  __int64 ContainingPageTable; // [rsp+78h] [rbp-49h]
  __int64 v81; // [rsp+80h] [rbp-41h]
  _KPROCESS *Process; // [rsp+88h] [rbp-39h]
  __int64 v83[4]; // [rsp+90h] [rbp-31h] BYREF
  __int64 *v84; // [rsp+B0h] [rbp-11h] BYREF
  int v85; // [rsp+B8h] [rbp-9h]
  int v86; // [rsp+BCh] [rbp-5h]

  v7 = a3 + 48;
  PteShadow = *a2;
  v9 = a2;
  v74 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v78 = a3;
  v71 = DWORD1(PerfGlobalGroupMask) & 0x8000001;
  v75 = a2;
  v77 = a6;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, PteShadow);
  v72 = PteShadow;
  v10 = MI_GET_PFN_FROM_PTE(&v72, a2, a3, v9);
  v13 = *(unsigned __int16 *)(v12 + 172);
  v14 = *a5;
  v69 = 0;
  v15 = v11 << 25 >> 16;
  v76 = v15;
  v16 = *(_QWORD *)(qword_140388AF0 + 8 * v13);
  v73 = v16;
  v68 = 1;
  if ( a7 == -1 )
  {
    v68 = 1;
    if ( v14 != v16 )
    {
      v69 = 1;
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v14) )
        return 0LL;
      v68 = 0;
    }
    v39 = MiLockProtoPoolPage(v7, 0LL);
    if ( v39 )
    {
      v40 = MiLockLeafPage((__int64 *)v7, 0LL, v37, v38);
      v41 = v40;
      if ( v40 )
      {
        if ( (*(_BYTE *)(v40 + 35) & 0x40) == 0
          && v14 == *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v40 + 40) >> 40) & 0x3FFLL))
          && ((*(_BYTE *)(v40 + 34) & 7) == 6 || (*(_BYTE *)(v40 + 34) & 0x20) == 0) )
        {
          v42 = MiMapPageInHyperSpaceWorker((v40 + 0x58000000000LL) / 48, 0LL, 0x80000000LL);
          v70 = MiComparePages(v42, v15);
          LOBYTE(v43) = 17;
          MiUnmapPageInHyperSpaceWorker(v42, v43, 0x80000000LL);
          if ( v70 == 1 )
          {
            PfnPriority = MiGetPfnPriority(v10);
            MiUpdatePfnPriority(v41, PfnPriority, 0LL);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiUnlockProtoPoolPage(v39, 0x11u);
          if ( !v70 )
            goto LABEL_97;
          if ( dword_140388C68 )
            MI_WSLE_LOG_ACCESS(v74, v75);
          PrototypePteDirect = MiMakePrototypePteDirect(v7, v45, v46, v47);
          v49 = v76;
          v50 = PrototypePteDirect | 0x800;
          WsleContents = MiGetWsleContents(v51, v76);
          MiLockPageAtDpcInline(v10);
          if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(v10 + 32) == 1 )
          {
            LODWORD(v73) = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v75, v50);
            if ( v71 )
            {
              memset(v83, 0, sizeof(v83));
              MiIdentifyPfn((_OWORD *)v10, v83);
            }
            *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
            *(_BYTE *)(v10 + 34) |= 7u;
            v54 = *(_QWORD *)(v10 + 40) & 0xFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (_DWORD)v73 == 1 )
              MiInsertTbFlushEntry(v77, v49, 1LL, 0);
            MiUpdateWorkingSetPrivateSize(v74, v49, -1LL, v53);
            v56 = v55 + 11;
            LOBYTE(v55) = WsleContents;
            v36 = v57;
            MiRemoveWsle(v57, v58, v55, v56);
            MiRebuildPageTableLeafAges(v59, v49);
            v60 = 48 * v54 - 0x58000000000LL;
            MiLockPageAtDpcInline(v60);
            MiDecrementShareCount(v60);
            _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !v68 && _InterlockedIncrement64((volatile signed __int64 *)(v78 + 56)) != 1 )
              MiReturnCrossPartitionCombineCharges(v14, 1LL);
            MiResolveProtoCombine(v75, v36, v7);
            goto LABEL_83;
          }
          goto LABEL_58;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      MiUnlockProtoPoolPage(v39, 0x11u);
    }
LABEL_97:
    if ( !v68 )
      MiReturnCrossPartitionCombineCharges(v14, v69);
    return 0LL;
  }
  v17 = 48 * a7 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(a7, v17, v10, v11 << 25 >> 16) )
    return 0LL;
  v79 = v7 & 0x7FFFFFFFFFFFFFFFLL;
  v18 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(v7);
  v81 = 48 * ContainingPageTable - 0x58000000000LL;
  if ( v14 != v73 )
  {
    if ( (unsigned int)MiGetCrossPartitionCombineCharges(v14) )
    {
      v68 = 0;
      goto LABEL_9;
    }
    return 0LL;
  }
LABEL_9:
  MiLockPageAtDpcInline(v10);
  v19 = 1;
  if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v10 + 32) != 1 )
  {
LABEL_58:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_97;
  }
  if ( v71 )
  {
    memset(v83, 0, sizeof(v83));
    MiIdentifyPfn((_OWORD *)v10, v83);
    v19 = 1;
  }
  if ( (PteShadow & 0x42) != 0 )
    v72 = PteShadow & 0xFFFFFFFFFFFFFFBDuLL;
  if ( (*(_BYTE *)(v10 + 34) & 0x10) == 0 && !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(*(_QWORD *)(v10 + 16)) )
    *(_BYTE *)(v10 + 34) = v20 | 0x10;
  v21 = (_QWORD *)(v10 + 16);
  v22 = *(_QWORD *)(v10 + 16);
  if ( (((unsigned __int8)v22 >> 1) & (unsigned __int8)v19) != 0 )
  {
    if ( v68 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v73, v10 + 16) )
    {
      v18 = v23;
    }
    else
    {
      v24 = MiCapturePageFileInfoInline(v10 + 16, v19);
      *(_BYTE *)(v10 + 34) |= 0x10u;
      v18 = v24;
    }
    *v21 &= ~2uLL;
  }
  else if ( !v68 && (((unsigned __int8)v22 >> 2) & (unsigned __int8)v19) != 0 )
  {
    v25 = MiCapturePageFileInfoInline(v10 + 16, v19);
    *(_BYTE *)(v10 + 34) |= 0x10u;
    v18 = v25;
  }
  MiLockNestedPageAtDpcInline(v17);
  MiFinalizePageAttribute(v17, *(unsigned __int8 *)(v10 + 34) >> 6, 1u);
  MiCopyPfnEntry(v17, v10);
  if ( (unsigned int)MiGetPfnPriority(v26) < 5 )
    *(_BYTE *)(v17 + 35) = *(_BYTE *)(v17 + 35) & 0xF8 | 5;
  v27 = (__int64 *)(v17 + 16);
  v28 = ContainingPageTable;
  *(_QWORD *)(v17 + 8) = v79;
  *(_QWORD *)(v17 + 40) = *(_QWORD *)(v17 + 40) & 0xFFFFFFF000000000uLL | v28 & 0xFFFFFFFFFLL | 0x200000000000000LL;
  v29 = *(_QWORD *)(v17 + 16);
  if ( (unsigned __int64)(v17 + 16) >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v27 <= 0xFFFFF6FB7DBED7F8uLL )
    v29 = MiReadPteShadow(v17 + 16, *(_QWORD *)(v17 + 16));
  if ( (v29 & 0x80u) != 0LL )
  {
    v30 = v29 | 0x20;
    *v27 = v30;
    if ( (unsigned __int64)v27 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v27 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v27, v30);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v68 )
  {
    if ( (*(_DWORD *)v21 & 4) != 0 )
    {
      *v21 &= ~4uLL;
      if ( v18 )
        v18 &= ~4uLL;
    }
  }
  v72 ^= (v72 ^ (a7 << 12)) & 0xFFFFFFFFF000LL;
  v31 = v72;
  if ( (v72 & 0x800) != 0 )
  {
    v31 = v72 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
    v72 = v31;
  }
  MiWriteValidPteNewPage(v75, v31);
  if ( !v68 )
    *(_QWORD *)(v78 + 56) = 1LL;
  *(_QWORD *)v7 = 0LL;
  *(_QWORD *)v7 = v31;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v7, v31);
  *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v10 + 34) |= 7u;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v32 = v76;
  MiInsertTbFlushEntry(v77, v76, 1LL, 0);
  if ( v18 )
    MiReleasePageFileInfo(*(struct _KEVENT **)(qword_140388AF0 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)), v18, 1);
  v33 = v81;
  MiLockPageAtDpcInline(v81);
  v35 = *(_QWORD *)(v33 + 24) ^ (*(_QWORD *)(v33 + 24) ^ (*(_QWORD *)(v33 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v33 + 24) = v35;
  _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v68 == 1 )
  {
    if ( (ULONG_PTR *)v14 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 6016), 1uLL);
    MiReturnCommit(v14, 1uLL);
    if ( (ULONG_PTR *)v14 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1403893E0, 0xFFFFFFFFFFFFFFFFuLL);
  }
  v36 = v74;
  if ( (*(_BYTE *)(v74 + 192) & 7) == 0 )
    MiSetWsleProtection(v35, v32);
  MiUpdateWorkingSetPrivateSize(v36, v32, -1LL, v34);
LABEL_83:
  if ( (*(_BYTE *)(v36 + 192) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v71 )
  {
    if ( a7 == -1 )
      v61 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v61 = v7 | 1;
    v86 = 0;
    v84 = v83;
    v83[3] = v61;
    v85 = 32;
    v62 = *(_DWORD *)(EtwpHostSiloState + 4172);
    while ( _BitScanForward(&v66, v62) )
    {
      v62 &= v62 - 1;
      v63 = v66;
      v64 = 32LL * v66 + EtwpHostSiloState + 4208;
      if ( v64 )
      {
        if ( (*(_DWORD *)(v64 + 4) & 0x8000001) != 0 )
          EtwpLogKernelEvent(
            (__int64)&v84,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2 * v63 + 4156),
            1u,
            0x27Au,
            0x11401B02u);
      }
    }
  }
  return v10;
}
