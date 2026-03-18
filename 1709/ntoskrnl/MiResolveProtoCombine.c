/*
 * XREFs of MiResolveProtoCombine @ 0x1400EDBF4
 * Callers:
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiMakeTransitionPteValid @ 0x14002C750 (MiMakeTransitionPteValid.c)
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 */

__int64 __fastcall MiResolveProtoCombine(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 PteShadow; // rax
  __int64 v11; // r14
  char v13; // al
  __int64 TransitionPteValid; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 ContainingPageTable; // rax
  __int64 v20; // r11
  __int64 v21; // rsi
  int v22; // eax
  char v23; // cl
  unsigned __int64 ValidPte; // rax
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v26 = 0LL;
  if ( !MiLockProtoPoolPage((unsigned __int64)a3, 0LL) )
    return 0LL;
  v6 = 48 * MiGetContainingPageTable(a3) - 0x58000000000LL;
  v9 = MiLockLeafPage(a3, 0LL, v7, v8);
  if ( !v9 )
    goto LABEL_14;
  PteShadow = *a3;
  if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a3, *a3);
  v25 = PteShadow;
  if ( (PteShadow & 1) != 0 )
  {
    v11 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL));
    goto LABEL_23;
  }
  if ( (PteShadow & 0x400) != 0
    || (PteShadow & 0x800) == 0
    || (v11 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL)),
        (*(_BYTE *)(v9 + 34) & 0x20) != 0) )
  {
LABEL_13:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_14:
    MiUnlockProtoPoolPage(v6, 0x11u);
    return 0LL;
  }
  if ( !MiUnlinkPageFromList(v9, 0LL) )
  {
    MiDiscardTransitionPte(v9);
    goto LABEL_13;
  }
  __incgsdword(0x2E98u);
  *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
  v13 = *(_BYTE *)(v9 + 34);
  ++*(_WORD *)(v9 + 32);
  *(_BYTE *)(v9 + 34) = v13 & 0xF8 | 6;
  TransitionPteValid = MiMakeTransitionPteValid(a3);
  v15 = *(_QWORD *)(v9 + 16);
  v16 = TransitionPteValid;
  v25 = TransitionPteValid;
  if ( (v15 & 0x400) == 0 && (v15 & 4) != 0 && (unsigned __int16)v15 >> 12 == *(_DWORD *)(v11 + 1140) )
    v26 = MiCaptureDirtyBitToPfn(v9);
  *a3 = v16;
  if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(a3, v16);
LABEL_23:
  *(_QWORD *)(v9 + 24) ^= (*(_QWORD *)(v9 + 24) ^ (*(_QWORD *)(v9 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v6, 0x11u);
  if ( v26 )
    MiReleasePageFileInfo((struct _KEVENT *)v11, v26, 1);
  v17 = MI_GET_PAGE_FRAME_FROM_PTE(&v25);
  v18 = 48 * v17 - 0x58000000000LL;
  v26 = *(_QWORD *)(v18 + 16);
  ContainingPageTable = MiGetContainingPageTable(a1);
  v21 = v20 + 48 * ContainingPageTable;
  MiLockPageAtDpcInline(v21);
  *(_QWORD *)(v21 + 24) ^= (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v22 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v26) & 0xFFFFFFE7;
  v23 = *(_BYTE *)(v18 + 34) >> 6;
  if ( v23 != 1 )
  {
    if ( v23 )
    {
      if ( v23 == 2 )
        v22 |= 0x18u;
    }
    else
    {
      v22 |= 8u;
    }
  }
  ValidPte = MiMakeValidPte((unsigned __int64)a1, v17, v22);
  if ( !(unsigned int)MiAllocateWsle(a2, a1, v18, 0, ValidPte, 0LL) )
  {
    MiLockAndDecrementShareCount(v18, 0);
    MiLockAndDecrementShareCount(v21, 0);
    return 0LL;
  }
  return 1LL;
}
