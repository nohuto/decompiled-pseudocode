/*
 * XREFs of MiPurgeSubsection @ 0x14024FA3C
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140031B60 (MiCheckProtoPtePageState.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiLockLeafPage @ 0x1401249A0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPurgeSubsection(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int8 v6; // di
  __int64 v7; // r13
  unsigned int v9; // r14d
  __int64 v10; // rbp
  unsigned __int64 v11; // r12
  __int64 BugCheckParameter4; // rax
  ULONG_PTR v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int8 v23; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v5 = *(unsigned int *)(BugCheckParameter2 + 44);
  v6 = 17;
  v7 = *(_QWORD *)BugCheckParameter2;
  v9 = 1;
  v23 = 17;
  v10 = 0LL;
  v11 = v4 + 8 * v5;
  if ( v4 >= v11 )
    return v9;
  while ( (v4 & 0xFFF) == 0 || v6 == 17 )
  {
    if ( v6 != 17 )
    {
      LOBYTE(a2) = v6;
      MiUnlockProtoPoolPage(v10, a2, a3, a4);
    }
    v10 = MiCheckProtoPtePageState(v4, &v23);
    if ( v10 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
        LOBYTE(v20) = v23;
        MiUnlockProtoPoolPage(v10, v20, v21, v22);
        return 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      v6 = v23;
      break;
    }
    v4 = (v4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_21:
    v6 = v23;
LABEL_22:
    if ( v4 >= v11 )
      goto LABEL_27;
  }
  MiLockLeafPage(v4, 0);
  BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v4);
  if ( !a4 )
  {
    if ( (BugCheckParameter4 & 0xC00) == 0 && BugCheckParameter4 )
      KeBugCheckEx(0xDEu, 4uLL, BugCheckParameter2, v4, BugCheckParameter4);
    v4 += 8LL;
    goto LABEL_22;
  }
  if ( (BugCheckParameter4 & 1) == 0 )
  {
    v13 = (MiReverseSwizzleInvalidPte(BugCheckParameter4) >> 12) & 0xFFFFFFFFFLL;
    v14 = 48 * v13 - 0x58000000000LL;
    if ( (*(_BYTE *)(v14 + 34) & 0x10) != 0 || *(_WORD *)(v14 + 32) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_26;
    }
    MiDereferenceControlAreaPfnList(v7, BugCheckParameter2, a3, 2);
    *(_QWORD *)v4 = *(_QWORD *)(v14 + 16);
    if ( MiPteInShadowRange(v4) )
      MiWritePteShadow(v16, v15, v17);
    MiUnlinkPageFromList(48 * v13 - 0x58000000000LL, 0LL);
    MiInsertPageInFreeOrZeroedList(v13, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v10);
    MiDecrementShareCount(v10);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v4 += 8LL;
    goto LABEL_21;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_26:
  v6 = v23;
  v9 = 0;
LABEL_27:
  if ( v6 != 17 )
  {
    LOBYTE(a2) = v6;
    MiUnlockProtoPoolPage(v10, a2, a3, a4);
  }
  if ( !v9 )
  {
    v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72));
    *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    __writecr8(v18);
  }
  return v9;
}
