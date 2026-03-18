/*
 * XREFs of MiConvertStandbyToProto @ 0x140231350
 * Callers:
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     MiTryLockLeafPage @ 0x1400CC170 (MiTryLockLeafPage.c)
 *     MiFillCombinePage @ 0x1400CD09C (MiFillCombinePage.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiComparePages @ 0x1400EDAF0 (MiComparePages.c)
 *     MiUpdatePfnPriority @ 0x1400EDFC4 (MiUpdatePfnPriority.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140131C48 (MiUnlockNestedProtoPoolPage.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x14017C7C0 (MiMakePrototypePteDirect.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 *     MiGetCrossPartitionCombineCharges @ 0x140231884 (MiGetCrossPartitionCombineCharges.c)
 *     MiRecheckCombineVm @ 0x140231A64 (MiRecheckCombineVm.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x140231B2C (MiReturnCrossPartitionCombineCharges.c)
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
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned __int8 v12; // di
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 *v16; // rdx
  __int64 v17; // r13
  char v18; // r14
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 *v27; // r10
  char v29; // [rsp+20h] [rbp-68h]
  char v30; // [rsp+21h] [rbp-67h]
  bool v31; // [rsp+22h] [rbp-66h]
  int v32; // [rsp+24h] [rbp-64h]
  __int64 v33; // [rsp+28h] [rbp-60h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v8 = (__int64 *)(a5 + 48);
  v32 = *(_DWORD *)(a5 + 40) & 0x1F;
  v9 = MiMakePrototypePteDirect(a5 + 48) | 0x800;
  v11 = (__int64)(*(_QWORD *)(v10 + 56) << 25) >> 16;
  v33 = v11;
  v12 = 0;
  v30 = 0;
  v29 = 1;
  v14 = *(unsigned __int16 *)(v13 + 172);
  v15 = *(_QWORD *)(qword_140388AF0 + 8 * v14);
  v17 = *v16;
  if ( a8 != -1 )
  {
    if ( (unsigned int)MiFillCombinePage(v14, 48 * a8 - 0x58000000000LL, BugCheckParameter2, v11) )
    {
      if ( v17 == v15 )
      {
        v18 = 1;
        goto LABEL_7;
      }
      if ( (unsigned int)MiGetCrossPartitionCombineCharges(v17) )
      {
        v18 = 0;
LABEL_7:
        MiLockPageAtDpcInline(BugCheckParameter2);
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_42:
        if ( !v18 )
          MiReturnCrossPartitionCombineCharges(v17, v12);
        return 0LL;
      }
    }
LABEL_41:
    v18 = v29;
    goto LABEL_42;
  }
  v12 = 1;
  v29 = 1;
  if ( v17 == v15 )
  {
    v12 = 0;
  }
  else
  {
    v30 = 1;
    if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v17) )
      goto LABEL_41;
    v29 = 0;
  }
  v19 = MiLockProtoPoolPage((unsigned __int64)v8, 0LL);
  v20 = v19;
  if ( !v19 )
    goto LABEL_41;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    MiUnlockProtoPoolPage(v19, 0x11u);
LABEL_40:
    v12 = v30;
    goto LABEL_41;
  }
  if ( a7 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
    || v15 != *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
    || !(unsigned int)MiRecheckCombineVm(a2, a4, BugCheckParameter2, a1)
    || (v22 = MiTryLockLeafPage(v8, 1LL, v21), (v23 = v22) == 0) )
  {
    MiUnlockNestedProtoPoolPage(v20);
    goto LABEL_39;
  }
  if ( (*(_BYTE *)(v22 + 35) & 0x40) != 0
    || v17 != *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL))
    || (*(_BYTE *)(v22 + 34) & 7) != 6 && (*(_BYTE *)(v22 + 34) & 0x20) != 0
    || (v34 = MiMapPageInHyperSpaceWorker((v22 + 0x58000000000LL) / 48, 0LL, 0x80000000),
        v31 = MiComparePages(v34, v33),
        LOBYTE(v24) = 17,
        MiUnmapPageInHyperSpaceWorker(v34, v24, 0x80000000LL),
        !v31)
    || (**(_DWORD **)(a3 + 56) & 1) == 0
    || ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v32 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v20);
LABEL_39:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_40;
  }
  if ( !MiUnlinkPageFromList(BugCheckParameter2, 0LL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v20);
    MiDiscardTransitionPte(BugCheckParameter2);
    goto LABEL_39;
  }
  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  MiGetPfnPriority(BugCheckParameter2);
  MiUpdatePfnPriority(v23);
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockNestedProtoPoolPage(v20);
  if ( !v29 && _InterlockedIncrement64((volatile signed __int64 *)(a5 + 56)) != 1 )
    MiReturnCrossPartitionCombineCharges(v17, 1LL);
  v25 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  v27 = (__int64 *)((*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF) + MiMapPageInHyperSpaceWorker(v25, 0LL, 0x80000000));
  *v27 = v9;
  if ( (unsigned __int64)v27 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v27 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  LOBYTE(v26) = 17;
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v27, v26, 0x80000000LL);
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
  MiLockNestedPageAtDpcInline(48 * v25 - 0x58000000000LL);
  MiDecrementShareCount(48 * v25 - 0x58000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(48 * v25 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_BYTE *)(a1 + 192) & 7) == 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[13],
      0xFFFFFFFFFFFFFFFFuLL);
  return 1LL;
}
