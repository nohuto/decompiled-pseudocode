/*
 * XREFs of MiReferenceActiveSubsection @ 0x1400A1320
 * Callers:
 *     MiAddViewsForSection @ 0x1400A0BF0 (MiAddViewsForSection.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiUpControlAreaRefs @ 0x140120C6C (MiUpControlAreaRefs.c)
 *     MiSessionInsertImage @ 0x1401550D4 (MiSessionInsertImage.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSubsection @ 0x14001F358 (MiRemoveUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A1430 (MiIncrementSubsectionViewCount.c)
 *     MiGetCommittedPages @ 0x1400A2BFC (MiGetCommittedPages.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14022DCA0 (MiComputeCrossPartitionSectionCharges.c)
 *     MiGetSubsectionCharges @ 0x14022DF48 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReferenceActiveSubsection(__int64 *BugCheckParameter2, int a2, KIRQL a3)
{
  __int64 v3; // rdi
  int v4; // esi
  KIRQL v5; // r14
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  int v11; // edi
  __int64 CommittedPages; // rax
  __int64 v14; // rbx
  __int64 v15; // [rsp+70h] [rbp+8h]
  KIRQL v16; // [rsp+80h] [rbp+18h]
  __int64 v17; // [rsp+88h] [rbp+20h]

  v16 = a3;
  v3 = *BugCheckParameter2;
  v4 = 0;
  v15 = 0LL;
  v5 = a3;
  v17 = *BugCheckParameter2;
  v8 = *(_QWORD *)(*BugCheckParameter2 + 64);
  if ( a3 == 17 )
  {
    v4 = 1;
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v16 = v5;
  }
  while ( 1 )
  {
    if ( !BugCheckParameter2[1] )
      goto LABEL_18;
    v9 = *BugCheckParameter2;
    v10 = *(_QWORD *)(*BugCheckParameter2 + 64);
    v11 = MiIncrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
    if ( v11 > 1 && v10 && (*(_DWORD *)(v9 + 56) & 0x20) == 0 )
    {
      if ( (*((_BYTE *)BugCheckParameter2 + 34) & 8) != 0 )
        MiRemoveUnusedSubsection((__int64)BugCheckParameter2);
      *((_WORD *)BugCheckParameter2 + 16) |= 1u;
    }
    if ( v11 >= 2 )
    {
      if ( v11 == 2 && (a2 & 0x20) != 0 && v15 )
      {
        v14 = v17;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 72));
        __writecr8(v16);
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v14 + 60) & 0x3FF)),
          v8 != 0,
          v15);
        if ( !v4 )
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v17 + 72));
      }
      else if ( v4 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 72));
        __writecr8(v16);
      }
      return 0LL;
    }
    if ( !v11 )
      break;
    v3 = v17;
    v5 = v16;
LABEL_18:
    if ( (a2 & 0x20) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      __writecr8(v5);
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
        v8 != 0,
        v15);
      if ( !v4 )
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      return 3221225773LL;
    }
    v15 = MiComputeCrossPartitionSectionCharges(BugCheckParameter2);
    if ( v15 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      __writecr8(v5);
      if ( (int)MiGetSubsectionCharges(BugCheckParameter2, v15) < 0 )
      {
        if ( !v4 )
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        return 3221225626LL;
      }
      a2 |= 0x20u;
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 )
      {
        if ( v8 )
        {
          if ( !BugCheckParameter2[1] )
          {
LABEL_26:
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
            __writecr8(v5);
            MiReturnCrossPartitionSectionCharges(
              *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
              v8 != 0,
              v15);
            if ( !v4 )
              ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
            return 3221225994LL;
          }
          CommittedPages = *((unsigned int *)BugCheckParameter2 + 11);
        }
        else
        {
          CommittedPages = MiGetCommittedPages(v3);
        }
        if ( v15 != CommittedPages )
          goto LABEL_26;
      }
    }
    else
    {
      a2 |= 0x20u;
    }
  }
  if ( v4 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 72));
    __writecr8(v16);
  }
  return 3221227019LL;
}
