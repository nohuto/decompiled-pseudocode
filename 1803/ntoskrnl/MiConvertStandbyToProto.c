/*
 * XREFs of MiConvertStandbyToProto @ 0x1401433FC
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiTryLockLeafPage @ 0x1400518D8 (MiTryLockLeafPage.c)
 *     MiUpdatePfnPriority @ 0x140052938 (MiUpdatePfnPriority.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiComparePages @ 0x1400558F0 (MiComparePages.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1400CB730 (MiUnlockNestedProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiFillCombinePage @ 0x140138480 (MiFillCombinePage.c)
 *     MiRecheckCombineVm @ 0x140143918 (MiRecheckCombineVm.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     MiMakePrototypePteDirect @ 0x1401A6614 (MiMakePrototypePteDirect.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14026BCF0 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14026BE44 (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiConvertStandbyToProto(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        ULONG_PTR BugCheckParameter2,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned __int8 v12; // di
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 *v16; // rdx
  __int64 v17; // r13
  __int64 v18; // r8
  char v19; // r14
  ULONG_PTR v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  ULONG_PTR v24; // r15
  __int64 v25; // rax
  __int64 v26; // r9
  ULONG_PTR v27; // r14
  unsigned int PfnPriority; // eax
  __int64 v29; // r9
  __int64 v30; // r14
  __int64 *v31; // r10
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // r10
  char v36; // [rsp+20h] [rbp-68h]
  char v37; // [rsp+21h] [rbp-67h]
  bool v38; // [rsp+22h] [rbp-66h]
  int v39; // [rsp+24h] [rbp-64h]
  __int64 v40; // [rsp+28h] [rbp-60h]
  unsigned __int64 v41; // [rsp+48h] [rbp-40h]

  v8 = a5 + 48;
  v39 = *(_DWORD *)(a5 + 40) & 0x1F;
  v9 = MiMakePrototypePteDirect(a5 + 48, a2, a3, a1) | 0x800;
  v11 = (__int64)(*(_QWORD *)(v10 + 56) << 25) >> 16;
  v40 = v11;
  v12 = 0;
  v37 = 0;
  v36 = 1;
  v14 = *(unsigned __int16 *)(v13 + 174);
  v15 = *(_QWORD *)(qword_1403CBD88 + 8 * v14);
  v17 = *v16;
  if ( a8 != -1 )
  {
    if ( (unsigned int)MiFillCombinePage(v14, 48 * a8 - 0x58000000000LL, BugCheckParameter2, v11) )
    {
      if ( v17 == v15 )
      {
        v19 = 1;
        goto LABEL_7;
      }
      if ( (unsigned int)MiGetCrossPartitionCombineCharges(v17, 0LL, v18) )
      {
        v19 = 0;
LABEL_7:
        MiLockPageAtDpcInline(BugCheckParameter2);
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_41:
        if ( !v19 )
          MiReturnCrossPartitionCombineCharges(v17, v12);
        return 0LL;
      }
    }
LABEL_40:
    v19 = v36;
    goto LABEL_41;
  }
  v12 = 1;
  v36 = 1;
  if ( v17 == v15 )
  {
    v12 = 0;
  }
  else
  {
    v37 = 1;
    if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v17, 1LL, v11) )
      goto LABEL_40;
    v36 = 0;
  }
  v20 = MiLockProtoPoolPage(v8, 0LL);
  v24 = v20;
  if ( !v20 )
    goto LABEL_40;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    LOBYTE(v21) = 17;
    MiUnlockProtoPoolPage(v20, v21, v22, v23);
LABEL_39:
    v12 = v37;
    goto LABEL_40;
  }
  if ( a7 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
    || v15 != *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
    || !(unsigned int)MiRecheckCombineVm(a2, a4, BugCheckParameter2, a1)
    || (v25 = MiTryLockLeafPage(v8), (v27 = v25) == 0) )
  {
    MiUnlockNestedProtoPoolPage(v24);
    goto LABEL_38;
  }
  if ( (*(_BYTE *)(v25 + 35) & 0x40) != 0
    || v17 != *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v25 + 40) >> 40) & 0x3FFLL))
    || (*(_BYTE *)(v25 + 34) & 7) != 6 && (*(_BYTE *)(v25 + 34) & 0x20) != 0
    || (v41 = MiMapPageInHyperSpaceWorker((v25 + 0x58000000000LL) / 48, 0LL, 0x80000000, v26),
        v38 = MiComparePages(v41, v40),
        MiUnmapPageInHyperSpaceWorker(v41, 0x11u, 0x80000000),
        !v38)
    || (**(_DWORD **)(a3 + 56) & 1) == 0
    || ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v39 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v24);
LABEL_38:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_39;
  }
  if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0LL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v24);
    MiDiscardTransitionPte(BugCheckParameter2);
    goto LABEL_38;
  }
  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  PfnPriority = MiGetPfnPriority(BugCheckParameter2);
  MiUpdatePfnPriority(v27, PfnPriority, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockNestedProtoPoolPage(v24);
  if ( !v36 && _InterlockedIncrement64((volatile signed __int64 *)(a5 + 56)) != 1 )
    MiReturnCrossPartitionCombineCharges(v17, 1LL);
  v30 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  v31 = (__int64 *)((*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF)
                  + MiMapPageInHyperSpaceWorker(v30, 0LL, 0x80000000, v29));
  *v31 = v9;
  if ( MiPteInShadowRange((unsigned __int64)v31) )
    MiWritePteShadow(v32, v9, v33);
  MiUnmapPageInHyperSpaceWorker(v34, 0x11u, 0x80000000);
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
  MiLockNestedPageAtDpcInline(48 * v30 - 0x58000000000LL);
  MiDecrementShareCount(48 * v30 - 0x58000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(48 * v30 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[13],
      0xFFFFFFFFFFFFFFFFuLL);
  return 1LL;
}
