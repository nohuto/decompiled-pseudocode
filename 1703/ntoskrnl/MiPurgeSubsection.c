/*
 * XREFs of MiPurgeSubsection @ 0x14020A93C
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x1400162F8 (MiDereferenceControlAreaPfnList.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiCheckProtoPtePageState @ 0x14010B1D8 (MiCheckProtoPtePageState.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x14017D030 (MiReverseSwizzleInvalidPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiPurgeSubsection(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int8 v3; // di
  __int64 v4; // r15
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 BugCheckParameter4; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 8);
  v2 = *(unsigned int *)(BugCheckParameter2 + 44);
  v3 = 17;
  v4 = *(_QWORD *)BugCheckParameter2;
  v15 = 17;
  v6 = 0LL;
  v7 = v1 + 8 * v2;
  if ( v1 >= v7 )
    return 1LL;
  do
  {
    if ( (v1 & 0xFFF) == 0 || v3 == 17 )
    {
      if ( v3 != 17 )
        MiUnlockProtoPoolPage(v6, v3);
      v6 = MiCheckProtoPtePageState(v1, &v15);
      if ( !v6 )
      {
        v1 = (v1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_21:
        v3 = v15;
        continue;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        MiUnlockProtoPoolPage(v6, v15);
        return 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
      v3 = v15;
    }
    MiLockLeafPage(v1, 0);
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v1);
    if ( v9 )
    {
      if ( (BugCheckParameter4 & 1) != 0 )
        KeBugCheckEx(0xDEu, 3uLL, BugCheckParameter2, v1, BugCheckParameter4);
      v11 = (MiReverseSwizzleInvalidPte(BugCheckParameter4) >> 12) & 0xFFFFFFFFFLL;
      v12 = 48 * v11 - 0x58000000000LL;
      if ( (*(_BYTE *)(v12 + 34) & 0x10) != 0 || *(_WORD *)(v12 + 32) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v6, v15);
        v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
        *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        __writecr8(v14);
        return 0LL;
      }
      MiDereferenceControlAreaPfnList(v4, BugCheckParameter2, v10, 2);
      *(_QWORD *)v1 = *(_QWORD *)(v12 + 16);
      if ( MiPteInShadowRange(v1) )
        MiWritePteShadow();
      MiUnlinkPageFromList(48 * v11 - 0x58000000000LL, 0);
      MiInsertPageInFreeOrZeroedList(v11, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiLockPageAtDpcInline(v6);
      MiDecrementShareCount(v6);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v1 += 8LL;
      goto LABEL_21;
    }
    if ( (BugCheckParameter4 & 0xC00) == 0 && BugCheckParameter4 )
      KeBugCheckEx(0xDEu, 4uLL, BugCheckParameter2, v1, BugCheckParameter4);
    v1 += 8LL;
  }
  while ( v1 < v7 );
  if ( v3 != 17 )
    MiUnlockProtoPoolPage(v6, v3);
  return 1LL;
}
