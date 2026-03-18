/*
 * XREFs of MiResolveProtoCombine @ 0x140105DB0
 * Callers:
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiIsPteInStore @ 0x140074CBC (MiIsPteInStore.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiResolveProtoCombine(__int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  struct _KEVENT *v9; // rbp
  char v11; // al
  __int64 v12; // rax
  int v13; // r9d
  unsigned __int64 ValidPte; // rbx
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rdi
  __int64 ContainingPageTable; // rax
  __int64 v19; // r9
  __int64 v20; // rsi
  int v21; // eax
  char v22; // cl
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v26 = 0LL;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v6 = 48 * MiGetContainingPageTable(a3) - 0x58000000000LL;
  v7 = MiLockLeafPage((__int64)a3, 0);
  if ( !v7 )
    goto LABEL_11;
  v8 = MI_READ_PTE_LOCK_FREE(a3);
  v25 = v8;
  if ( (v8 & 1) != 0 )
  {
    v9 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
    goto LABEL_18;
  }
  if ( (v8 & 0x400) != 0
    || (v8 & 0x800) == 0
    || (v9 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL)),
        (*(_BYTE *)(v7 + 34) & 0x20) != 0) )
  {
LABEL_10:
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_11:
    MiUnlockProtoPoolPage(v6, 0x11u);
    return 0LL;
  }
  if ( !MiUnlinkPageFromList(v7, 0) )
  {
    MiDiscardTransitionPte(v7);
    goto LABEL_10;
  }
  __incgsdword(0x2E98u);
  *(_QWORD *)(v7 + 24) &= 0xC000000000000000uLL;
  v11 = *(_BYTE *)(v7 + 34);
  ++*(_WORD *)(v7 + 32);
  *(_BYTE *)(v7 + 34) = v11 & 0xF8 | 6;
  v24 = MI_READ_PTE_LOCK_FREE(a3);
  v12 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v24);
  ValidPte = MiMakeValidPte((unsigned __int64)a3, v12, v13);
  v24 = ValidPte;
  v25 = ValidPte;
  if ( (*(_DWORD *)(v7 + 16) & 0x400LL) == 0 && MiIsPteInStore((__int64)v9, *(_QWORD *)(v7 + 16)) )
    v26 = MiCaptureDirtyBitToPfn(v7);
  *a3 = ValidPte;
  if ( (unsigned int)MiPteInShadowRange(a3) )
    MiWritePteShadow(v15);
LABEL_18:
  *(_QWORD *)(v7 + 24) ^= (*(_QWORD *)(v7 + 24) ^ (*(_QWORD *)(v7 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockPageAtDpcInline(v6);
  *(_BYTE *)(v6 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v6);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v26 )
    MiReleasePageFileInfo(v9, v26, 1);
  v16 = MI_GET_PAGE_FRAME_FROM_PTE(&v25);
  v17 = 48 * v16 - 0x58000000000LL;
  v26 = *(_QWORD *)(v17 + 16);
  ContainingPageTable = MiGetContainingPageTable(a1);
  v20 = v19 + 48 * ContainingPageTable;
  MiLockPageAtDpcInline(v20);
  *(_QWORD *)(v20 + 24) ^= (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v21 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v26) & 0xFFFFFFE7;
  v22 = *(_BYTE *)(v17 + 34) >> 6;
  if ( v22 != 1 )
  {
    if ( *(_BYTE *)(v17 + 34) >= 0x40u )
    {
      if ( v22 == 2 )
        v21 |= 0x18u;
    }
    else
    {
      v21 |= 8u;
    }
  }
  v23 = MiMakeValidPte((unsigned __int64)a1, v16, v21);
  if ( !(unsigned int)MiAllocateWsle(a2, a1, v17, 0, v23, 0LL) )
  {
    MiLockAndDecrementShareCount(v17, 0);
    MiLockAndDecrementShareCount(v20, 0);
    return 0LL;
  }
  return 1LL;
}
