/*
 * XREFs of MiConvertStandbyToProto @ 0x140130148
 * Callers:
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiFillCombinePage @ 0x140025418 (MiFillCombinePage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140034DA0 (MiUnlockNestedProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiUpdatePfnPriority @ 0x1401020F8 (MiUpdatePfnPriority.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiComparePages @ 0x1401031F0 (MiComparePages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiTryLockLeafPage @ 0x14010AED8 (MiTryLockLeafPage.c)
 *     MiRecheckCombineVm @ 0x14013055C (MiRecheckCombineVm.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiMakePrototypePteDirect @ 0x14017CF4C (MiMakePrototypePteDirect.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiConvertStandbyToProto(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v8; // r14
  unsigned int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 *v19; // r10
  __int64 v20; // rcx
  __int64 v21; // r10
  bool v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  unsigned int v27; // [rsp+A8h] [rbp+20h]

  v8 = a4 + 48;
  v9 = *(_DWORD *)(a4 + 40);
  v27 = v9;
  v11 = MiMakePrototypePteDirect(a4 + 48) | 0x800;
  v13 = (__int64)(*(_QWORD *)(v12 + 56) << 25) >> 16;
  if ( a7 != -1 )
  {
    if ( (unsigned int)MiFillCombinePage(
                         v10,
                         48 * a7 - 0x58000000000LL,
                         BugCheckParameter2,
                         (__int64)(*(_QWORD *)(v12 + 56) << 25) >> 16) )
    {
      MiMakeTransitionPte(a7, v9);
      MiGetContainingPageTable(v8);
      MiLockPageAtDpcInline(BugCheckParameter2);
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v14 = MiLockProtoPoolPage(v8, 0LL);
  v15 = v14;
  if ( !v14 )
    return 0LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    MiUnlockProtoPoolPage(v14, 0x11u);
    return 0LL;
  }
  if ( a6 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
    || !(unsigned int)MiRecheckCombineVm(a2, BugCheckParameter2, a1)
    || (v16 = MiTryLockLeafPage(v8), (v17 = v16) == 0) )
  {
    MiUnlockNestedProtoPoolPage(v15);
LABEL_25:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  if ( (*(_BYTE *)(v16 + 35) & 0x40) != 0
    || (*(_BYTE *)(v16 + 34) & 7) != 6 && (*(_BYTE *)(v16 + 34) & 0x20) != 0
    || (v24 = MiMapPageInHyperSpaceWorker((v16 + 0x58000000000LL) / 48, 0LL, 0x80000000),
        v23 = MiComparePages(v24, v13),
        MiUnmapPageInHyperSpaceWorker(v24, 0x11u),
        !v23)
    || (**(_DWORD **)(a3 + 56) & 1) == 0
    || ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v27 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v15);
    goto LABEL_25;
  }
  if ( !MiUnlinkPageFromList(BugCheckParameter2, 0) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v15);
    MiDiscardTransitionPte(BugCheckParameter2);
    goto LABEL_25;
  }
  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  MiGetPfnPriority(BugCheckParameter2);
  MiUpdatePfnPriority(v17);
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockNestedProtoPoolPage(v15);
  v18 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  v19 = (__int64 *)(MiMapPageInHyperSpaceWorker(v18, 0LL, 0x80000000) + (*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF));
  *v19 = v11;
  if ( (unsigned int)MiPteInShadowRange(v19) )
    MiWritePteShadow(v20);
  MiUnmapPageInHyperSpaceWorker(v21, 0x11u);
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
  MiLockNestedPageAtDpcInline(48 * v18 - 0x58000000000LL);
  MiDecrementShareCount(48 * v18 - 0x58000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(48 * v18 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_BYTE *)(a1 + 192) & 7) == 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[13],
      0xFFFFFFFFFFFFFFFFuLL);
  return 1LL;
}
