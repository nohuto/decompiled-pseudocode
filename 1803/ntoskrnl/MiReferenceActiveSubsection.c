/*
 * XREFs of MiReferenceActiveSubsection @ 0x1400E5D50
 * Callers:
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MiUpControlAreaRefs @ 0x140142EB4 (MiUpControlAreaRefs.c)
 *     MiSessionInsertImage @ 0x14016C34C (MiSessionInsertImage.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x1404BD390 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSubsection @ 0x1400E3FD8 (MiRemoveUnusedSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x1400E5E20 (MiIncrementSubsectionViewCount.c)
 *     MiGetCommittedPages @ 0x1400E7A14 (MiGetCommittedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140267E2C (MiComputeCrossPartitionSectionCharges.c)
 *     MiGetSubsectionCharges @ 0x140268104 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
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
  __int64 result; // rax
  __int64 CommittedPages; // rax
  __int64 v14; // rbx
  __int64 v15; // [rsp+80h] [rbp+8h]
  unsigned int v16; // [rsp+88h] [rbp+10h]
  KIRQL v17; // [rsp+90h] [rbp+18h]
  __int64 v18; // [rsp+98h] [rbp+20h]

  v17 = a3;
  v3 = *BugCheckParameter2;
  v4 = 0;
  v15 = 0LL;
  v5 = a3;
  v18 = *BugCheckParameter2;
  v8 = *(_QWORD *)(*BugCheckParameter2 + 64);
  if ( a3 == 17 )
  {
    v4 = 1;
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v17 = v5;
  }
  while ( 1 )
  {
    if ( !BugCheckParameter2[1] )
      goto LABEL_19;
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
        v14 = v18;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
        __writecr8(v17);
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v14 + 60) & 0x3FF)),
          v8 != 0,
          v15);
        if ( !v4 )
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v18 + 72));
      }
      else if ( v4 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
        __writecr8(v17);
      }
      return 0LL;
    }
    if ( !v11 )
      break;
    v3 = v18;
    v5 = v17;
LABEL_19:
    if ( (a2 & 0x20) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      __writecr8(v5);
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
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
      result = MiGetSubsectionCharges(BugCheckParameter2, v15);
      v16 = result;
      if ( (int)result < 0 )
      {
        if ( !v4 )
        {
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
          return v16;
        }
        return result;
      }
      a2 |= 0x20u;
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 )
      {
        if ( v8 )
        {
          if ( !BugCheckParameter2[1] )
          {
LABEL_27:
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
            __writecr8(v5);
            MiReturnCrossPartitionSectionCharges(
              *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
              v8 != 0,
              v15);
            if ( !v4 )
              ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
            return 3221225994LL;
          }
          CommittedPages = *((_DWORD *)BugCheckParameter2 + 11) - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFFu);
        }
        else
        {
          CommittedPages = MiGetCommittedPages(v3);
        }
        if ( v15 != CommittedPages )
          goto LABEL_27;
      }
    }
    else
    {
      a2 |= 0x20u;
    }
  }
  if ( v4 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
    __writecr8(v17);
  }
  return 3221227019LL;
}
