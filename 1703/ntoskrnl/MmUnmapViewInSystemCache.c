/*
 * XREFs of MmUnmapViewInSystemCache @ 0x1400A83B0
 * Callers:
 *     CcUnmapVacb @ 0x140515A10 (CcUnmapVacb.c)
 * Callees:
 *     MiDecrementAndInsertStandbyPages @ 0x14000BC90 (MiDecrementAndInsertStandbyPages.c)
 *     MiUnlockWsle @ 0x140017528 (MiUnlockWsle.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSystemCacheReverseMap @ 0x1400A02B0 (MiGetSystemCacheReverseMap.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiRemoveViewsFromSection @ 0x1400A8D90 (MiRemoveViewsFromSection.c)
 *     MiReleaseSystemCacheView @ 0x1400A8EF8 (MiReleaseSystemCacheView.c)
 *     MiManageSubsectionView @ 0x1400A98F0 (MiManageSubsectionView.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiRemoveWsle @ 0x1400D4A00 (MiRemoveWsle.c)
 *     MiLogPageAccess @ 0x1400D6220 (MiLogPageAccess.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140103108 (MiUpdateWorkingSetPrivateSize.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiMakeLinkedListPte @ 0x14017CF2C (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x14017D130 (MiUpdateLinkedListInPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, int a3)
{
  unsigned __int64 v3; // rbp
  ULONG_PTR v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r11
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // r15
  ULONG_PTR SystemCacheReverseMap; // rsi
  __int64 v12; // r10
  ULONG_PTR v13; // r11
  unsigned __int64 v14; // rax
  LONG *SharedVm; // rbx
  ULONG_PTR *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  __int64 v26; // r11
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  char v29; // cl
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // r11
  char v33; // cl
  unsigned __int8 WsleContents; // r10
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rcx
  ULONG_PTR v38; // rsi
  char v39; // bl
  KIRQL v40; // bp
  LONG *v41; // rax
  __int64 v42; // r15
  unsigned int v43; // ebp
  unsigned __int8 v44; // r12
  __int64 v45; // r14
  int v46; // ecx
  __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rbp
  unsigned __int64 v52; // rbx
  __int64 v53; // rsi
  unsigned __int64 v54; // r15
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 LinkedListPte; // rax
  ULONG_PTR v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // r11
  __int64 v62; // rcx
  __int64 v63; // r10
  __int64 v64; // rdx
  __int64 v65; // r11
  __int64 result; // rax
  __int64 v67; // rcx
  __int64 v68; // r11
  signed __int32 v69[8]; // [rsp+0h] [rbp-2F8h] BYREF
  KIRQL v70; // [rsp+30h] [rbp-2C8h]
  int v71; // [rsp+34h] [rbp-2C4h]
  int v72; // [rsp+38h] [rbp-2C0h]
  int v73; // [rsp+3Ch] [rbp-2BCh]
  unsigned int v74; // [rsp+40h] [rbp-2B8h]
  unsigned __int64 v75; // [rsp+48h] [rbp-2B0h]
  __int64 updated; // [rsp+50h] [rbp-2A8h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+58h] [rbp-2A0h]
  int v78; // [rsp+60h] [rbp-298h]
  unsigned __int64 v79; // [rsp+68h] [rbp-290h]
  unsigned __int64 PrototypePteDirect; // [rsp+70h] [rbp-288h]
  __int64 v81; // [rsp+78h] [rbp-280h]
  ULONG_PTR v82; // [rsp+80h] [rbp-278h]
  __int64 v83; // [rsp+88h] [rbp-270h]
  __int64 v84; // [rsp+90h] [rbp-268h]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp-260h]
  ULONG_PTR v86; // [rsp+A0h] [rbp-258h]
  ULONG_PTR BugCheckParameter2[64]; // [rsp+B0h] [rbp-248h] BYREF
  void *retaddr; // [rsp+2F8h] [rbp+0h]

  BugCheckParameter4 = a2;
  v78 = a3;
  v73 = a3 & 1;
  v3 = BugCheckParameter3;
  v4 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v86 = v4;
  BugCheckParameter3a = v4 + 512;
  v83 = 48 * MiGetContainingPageTable(v4) - 0x58000000000LL;
  v84 = MiSectionControlArea(v7, v5, v6);
  v8 = 0;
  v71 = 0;
  v9 = *(_WORD *)(v84 + 60) & 0x3FF;
  v75 = *(_QWORD *)(v84 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v72 = 0;
  PrototypePteDirect = 0LL;
  v74 = 2;
  v81 = *(_QWORD *)(qword_14036C8F8 + 8 * v9);
  v10 = v81 + 5888;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v3);
  v82 = SystemCacheReverseMap;
  v14 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v79 = v14;
  if ( v14 )
  {
    if ( (v14 & 1) != 0 )
    {
      v14 &= ~1uLL;
      v74 = 4;
      v79 = v14;
      *(_QWORD *)(SystemCacheReverseMap + 24) = v14;
    }
    if ( *(_QWORD *)v14 != v12 )
      KeBugCheckEx(0x1Au, 0x782uLL, SystemCacheReverseMap, v3, v13);
  }
  SharedVm = MiGetSharedVm(v10);
  v16 = BugCheckParameter2;
  v70 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  do
  {
    v17 = MI_READ_PTE_LOCK_FREE(v4);
    updated = v17;
    *v16 = v17;
    if ( (v17 & 1) != 0 )
    {
      v23 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&updated) - 0x58000000000LL;
      if ( dword_14036CA68 )
      {
        if ( (v27 = (__int64)(v4 << 25) >> 16, v27 >= 0xFFFFF68000000000uLL) && v27 <= v25
          || ((v28 = MI_READ_PTE_LOCK_FREE(((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), (v28 & 1) != 0)
            ? (v29 = HIBYTE(v28) & 0xF | (16 * ((v28 >> 60) & 7)))
            : (v29 = 10),
              (v29 & 0xF) != 7) )
        {
          if ( (*(_BYTE *)v4 & 0x20) != 0 )
          {
            MiLogPageAccess(v10, v4);
            v26 = 0x3FFFFFFFFFFFFFFFLL;
          }
        }
      }
      if ( v73 )
      {
        if ( (v26 & *(_QWORD *)(v23 + 24)) == 1 )
        {
          v22 = *(unsigned __int8 *)(v23 + 35);
          if ( ((v22 & 8) != 0 || ((unsigned __int8)v22 & 7u) > 2)
            && ((v22 & 8) != 0 || ((unsigned __int8)v22 & 7u) <= 5) )
          {
            MiLockPageAtDpcInline(v23);
            *(_BYTE *)(v23 + 35) = *(_BYTE *)(v23 + 35) & 0xF8 | 2;
            _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
      }
      MI_GET_PFN_FROM_PTE(
        ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        v22,
        v24,
        ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_31;
      v31 = MI_READ_PTE_LOCK_FREE(v30);
      if ( (v31 & 1) != 0 )
        v33 = HIBYTE(v31) & 0xF | (16 * ((v31 >> 60) & 7));
      else
        v33 = 10;
      WsleContents = v33;
      v35 = (*(_QWORD *)(v32 + 40) >> 57) & 1LL;
      if ( (v33 & 0xF) == 8 )
      {
        MiUnlockWsle(v10, v3, v32);
        WsleContents = MiGetWsleContents(v36, v3);
      }
      if ( !(_DWORD)v35 )
LABEL_31:
        MiUpdateWorkingSetPrivateSize(v10, v3, -1LL);
      MiRemoveWsle(v10, v3, WsleContents, 10LL);
      if ( v75 )
        PrototypePteDirect = *(_QWORD *)(v23 + 8) | 0x8000000000000000uLL;
      ++v72;
    }
    else
    {
      if ( (v17 & 0x400) == 0 )
        break;
      if ( v21 )
        PrototypePteDirect = MiGetPrototypePteDirect(v17, v18, v19, v20);
    }
    *(_QWORD *)v4 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v4) )
      MiWritePteShadow(v37);
    ++v8;
    ++v16;
    v4 += 8LL;
    v3 += 4096LL;
  }
  while ( v4 < BugCheckParameter3a );
  v38 = v82;
  BugCheckParameter3a = v3;
  if ( *(_QWORD *)(v82 + 16) )
  {
    *(_QWORD *)(v82 + 16) = 0LL;
    v39 = 1;
  }
  else
  {
    v39 = 0;
  }
  v40 = v70;
  MiPreUnlockWorkingSetExclusive(v10, v70);
  v41 = MiGetSharedVm(v10);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v41, retaddr);
  else
    *v41 = 0;
  __writecr8(v40);
  if ( v39 == 1 )
    MiManageSubsectionView(v79, v38, v74);
  _InterlockedOr(v69, 0);
  v42 = 0LL;
  v43 = 0;
  v73 = KiTbFlushTimeStamp;
  v44 = 17;
  v45 = 0LL;
  if ( v8 <= 0 )
    goto LABEL_74;
  v46 = 0;
  do
  {
    if ( (BugCheckParameter2[v45] & 1) == 0 )
      goto LABEL_61;
    ++v42;
    v47 = 0LL;
    v48 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&BugCheckParameter2[v71]) - 0x58000000000LL;
    if ( !v43 )
    {
      v44 = MiLockPageInline(v48);
LABEL_54:
      if ( (BugCheckParameter2[v45] & 0x42) != 0 )
      {
        v47 = MiCaptureDirtyBitToPfn(v48);
      }
      else if ( (*(_QWORD *)(v48 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
             && *(_WORD *)(v48 + 32) == 1
             && (*(_QWORD *)(v48 + 24) & 0x4000000000000000LL) == 0
             && (*(_BYTE *)(v48 + 35) & 0x40) == 0
             && (*(_BYTE *)(v48 + 34) & 0x10) == 0 )
      {
        v50 = v43++;
        BugCheckParameter2[v50] = v48;
LABEL_60:
        v46 = v71;
        goto LABEL_61;
      }
      if ( v43 )
      {
        MiDecrementAndInsertStandbyPages((__int64)BugCheckParameter2, v43, 0x11u);
        v43 = 0;
      }
      MiDecrementShareCount(v48);
      _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v44);
      if ( v47 )
        MiReleasePageFileInfo(v81, v47, 0LL);
      goto LABEL_60;
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v48 + 24), 0x3FuLL) )
      goto LABEL_54;
    MiDecrementAndInsertStandbyPages((__int64)BugCheckParameter2, v43, v44);
    --v45;
    v46 = v71 - 1;
    v43 = 0;
    --v42;
LABEL_61:
    ++v46;
    ++v45;
    v71 = v46;
  }
  while ( v45 < v8 );
  if ( v43 )
    MiDecrementAndInsertStandbyPages((__int64)BugCheckParameter2, v43, v44);
  if ( v42 )
  {
    v49 = v83;
    MiLockPageInline(v83);
    *(_QWORD *)(v49 + 24) ^= (*(_QWORD *)(v49 + 24) ^ (*(_QWORD *)(v49 + 24) - v42)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_75;
  }
LABEL_74:
  KeGetCurrentIrql();
  __writecr8(2uLL);
LABEL_75:
  v51 = v84;
  v52 = 0LL;
  v53 = 0LL;
  if ( v75 )
    v52 = v79;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v84 + 72));
  if ( v52 )
  {
    v54 = PrototypePteDirect;
    while ( 1 )
    {
      v55 = MiRemoveViewsFromSection(v52, *(unsigned int *)(v52 + 44), 4LL);
      v56 = *(_QWORD *)(v52 + 8);
      v53 += v55;
      if ( v54 >= v56 && v54 < v56 + 8LL * *(unsigned int *)(v52 + 44) )
        break;
      v52 = *(_QWORD *)(v52 + 16);
      if ( !v52 )
        KeBugCheckEx(0x1Au, 0x783uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3a, BugCheckParameter4);
    }
  }
  v57 = v70;
  --*(_QWORD *)(v51 + 40);
  --*(_DWORD *)(v51 + 88);
  MiCheckControlArea(v51, v57);
  if ( v53 )
    MiReturnCrossPartitionSectionCharges(v81, 1LL, v53);
  LinkedListPte = MiMakeLinkedListPte(v73 & 0xFFFFF);
  v59 = v86 + 16;
  updated = LinkedListPte;
  *(_QWORD *)(v86 + 16) = LinkedListPte;
  if ( (unsigned int)MiPteInShadowRange(v59) )
    MiWritePteShadow(v60);
  *(_QWORD *)(v61 + 8) = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v61 + 8) )
    MiWritePteShadow(v62);
  if ( v72 )
    v64 = 2LL;
  else
    v64 = 0LL;
  updated = MiUpdateLinkedListInPte(v63, v64);
  *(_QWORD *)(v65 + 24) = updated;
  result = MiPteInShadowRange(v65 + 24);
  if ( (_DWORD)result )
    result = MiWritePteShadow(v67);
  if ( (v78 & 2) == 0 )
    return MiReleaseSystemCacheView(v68);
  return result;
}
