/*
 * XREFs of MiPurgeSubsection @ 0x1402115B4
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiCheckProtoPtePageState @ 0x140032610 (MiCheckProtoPtePageState.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A900 (MiDereferenceControlAreaPfnList.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiPurgeSubsection(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  __int64 v5; // rax
  unsigned __int8 v6; // di
  __int64 v7; // r13
  unsigned int v9; // r14d
  __int64 v10; // rbp
  ULONG_PTR v11; // r12
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v13; // r8
  __int64 v14; // r15
  ULONG_PTR v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int8 v18; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR v19; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v5 = *(unsigned int *)(BugCheckParameter2 + 44);
  v6 = 17;
  v7 = *(_QWORD *)BugCheckParameter2;
  v9 = 1;
  v18 = 17;
  v10 = 0LL;
  v11 = v4 + 8 * v5;
  if ( v4 >= v11 )
    return v9;
  while ( (v4 & 0xFFF) == 0 || v6 == 17 )
  {
    if ( v6 != 17 )
      MiUnlockProtoPoolPage(v10, v6);
    v10 = MiCheckProtoPtePageState(v4, &v18, a3, a4);
    if ( v10 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
        MiUnlockProtoPoolPage(v10, v18);
        return 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      v6 = v18;
      break;
    }
    v4 = (v4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_26:
    v6 = v18;
LABEL_27:
    if ( v4 >= v11 )
      goto LABEL_32;
  }
  a4 = MiLockLeafPage((__int64 *)v4, 0LL, a3, a4);
  BugCheckParameter4 = *(_QWORD *)v4;
  if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
    BugCheckParameter4 = MiReadPteShadow();
  v19 = BugCheckParameter4;
  if ( !a4 )
  {
    if ( (BugCheckParameter4 & 0x400) == 0 && (BugCheckParameter4 & 0x800) == 0 && BugCheckParameter4 )
      KeBugCheckEx(0xDEu, 4uLL, BugCheckParameter2, v4, BugCheckParameter4);
    v4 += 8LL;
    goto LABEL_27;
  }
  if ( (BugCheckParameter4 & 1) == 0 )
  {
    v14 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v19);
    v15 = 48 * v14 - 0x58000000000LL;
    if ( (*(_BYTE *)(v15 + 34) & 0x10) != 0 || *(_WORD *)(v15 + 32) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_31;
    }
    MiDereferenceControlAreaPfnList(v7, BugCheckParameter2, v13, 2);
    *(_QWORD *)v4 = *(_QWORD *)(v15 + 16);
    if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    MiUnlinkPageFromList(v15, 0LL);
    MiInsertPageInFreeOrZeroedList(v14, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v10);
    MiDecrementShareCount(v10);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v4 += 8LL;
    goto LABEL_26;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_31:
  v6 = v18;
  v9 = 0;
LABEL_32:
  if ( v6 != 17 )
    MiUnlockProtoPoolPage(v10, v6);
  if ( !v9 )
  {
    v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72));
    *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    __writecr8(v16);
  }
  return v9;
}
