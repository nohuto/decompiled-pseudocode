/*
 * XREFs of MiResolveProtoCombine @ 0x140058068
 * Callers:
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MiIsPteInStore @ 0x1400C62F4 (MiIsPteInStore.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  ULONG_PTR v6; // rsi
  __int64 v7; // rdx
  ULONG_PTR v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbp
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 ValidPte; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r14
  __int64 v23; // rdi
  __int64 ContainingPageTable; // rax
  __int64 v25; // r9
  __int64 v26; // rsi
  unsigned int v27; // eax
  __int64 v28; // r9
  char v29; // cl
  unsigned __int64 v30; // rax
  __int64 v31; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-30h] BYREF
  __int64 v33; // [rsp+98h] [rbp+20h] BYREF

  v33 = 0LL;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v6 = 48 * MiGetContainingPageTable(a3) - 0x58000000000LL;
  v8 = MiLockLeafPage(a3, 0LL);
  if ( !v8 )
    goto LABEL_11;
  v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v32 = v11;
  if ( (v11 & 1) != 0 )
  {
    v12 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL));
    goto LABEL_18;
  }
  if ( (v11 & 0x400) != 0
    || (v11 & 0x800) == 0
    || (v12 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL)),
        (*(_BYTE *)(v8 + 34) & 0x20) != 0) )
  {
LABEL_10:
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_11:
    LOBYTE(v7) = 17;
    MiUnlockProtoPoolPage(v6, v7, v9, v10);
    return 0LL;
  }
  if ( !(unsigned int)MiUnlinkPageFromList(v8) )
  {
    MiDiscardTransitionPte(v8);
    goto LABEL_10;
  }
  __incgsdword(0x2E98u);
  *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
  v14 = *(_BYTE *)(v8 + 34);
  ++*(_WORD *)(v8 + 32);
  *(_BYTE *)(v8 + 34) = v14 & 0xF8 | 6;
  v31 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
  v15 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v31);
  ValidPte = MiMakeValidPte((unsigned __int64)a3, v15, (unsigned int)v16, v16);
  v31 = ValidPte;
  v32 = ValidPte;
  if ( (*(_DWORD *)(v8 + 16) & 0x400LL) == 0 && (unsigned int)MiIsPteInStore(v12, *(_QWORD *)(v8 + 16)) )
    v33 = MiCaptureDirtyBitToPfn(v8);
  *a3 = ValidPte;
  if ( MiPteInShadowRange((unsigned __int64)a3) )
    MiWritePteShadow(v18, ValidPte);
LABEL_18:
  *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockPageAtDpcInline(v6);
  *(_BYTE *)(v6 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v6, v19, v20, v21);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v33 )
    MiReleasePageFileInfo(v12, v33, 1LL);
  v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFLL;
  v23 = 48 * v22 - 0x58000000000LL;
  v33 = *(_QWORD *)(v23 + 16);
  ContainingPageTable = MiGetContainingPageTable(a1);
  v26 = v25 + 48 * ContainingPageTable;
  MiLockPageAtDpcInline(v26);
  *(_QWORD *)(v26 + 24) ^= (*(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v27 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v33) & 0xFFFFFFE7;
  v29 = *(_BYTE *)(v23 + 34) >> 6;
  if ( v29 != 1 )
  {
    if ( v29 )
    {
      if ( v29 == 2 )
        v27 |= 0x18u;
    }
    else
    {
      v27 |= 8u;
    }
  }
  v30 = MiMakeValidPte((unsigned __int64)a1, v22, v27, v28);
  if ( !(unsigned int)MiAllocateWsle(a2, a1, (_QWORD *)(48 * v22 - 0x58000000000LL), 0, v30, 0, 0LL) )
  {
    MiLockAndDecrementShareCount(48 * v22 - 0x58000000000LL, 0LL);
    MiLockAndDecrementShareCount(v26, 0LL);
    return 0LL;
  }
  return 1LL;
}
