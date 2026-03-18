/*
 * XREFs of MiReferenceActiveSubsection @ 0x14009A070
 * Callers:
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiAddViewsForSection @ 0x140099930 (MiAddViewsForSection.c)
 *     MiSessionInsertImage @ 0x140148C0C (MiSessionInsertImage.c)
 *     MiMapImageInSystemSpace @ 0x140497368 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSubsection @ 0x140097D88 (MiRemoveUnusedSubsection.c)
 *     MiGetCommittedPages @ 0x140098EC8 (MiGetCommittedPages.c)
 *     MiIncrementSubsectionViewCount @ 0x14009A170 (MiIncrementSubsectionViewCount.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140221020 (MiComputeCrossPartitionSectionCharges.c)
 *     MiGetSubsectionCharges @ 0x14022129C (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReferenceActiveSubsection(__int64 a1, unsigned int a2, KIRQL a3)
{
  __int64 v3; // rdi
  int v4; // r14d
  KIRQL v5; // r15
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r15
  int v11; // edi
  __int64 v13; // rbp
  bool v14; // zf
  __int64 v15; // rbx
  __int64 v16; // [rsp+60h] [rbp+8h]
  KIRQL v17; // [rsp+70h] [rbp+18h]
  __int64 v18; // [rsp+78h] [rbp+20h]

  v17 = a3;
  v3 = *(_QWORD *)a1;
  v4 = 0;
  v16 = 0LL;
  v5 = a3;
  v18 = *(_QWORD *)a1;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  if ( a3 == 17 )
  {
    v4 = 1;
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v17 = v5;
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)a1;
    if ( !*(_QWORD *)(a1 + 8) )
      goto LABEL_18;
    v10 = *(_QWORD *)(v9 + 64);
    v11 = MiIncrementSubsectionViewCount(a1, a2);
    if ( v11 > 1 && v10 && (*(_DWORD *)(v9 + 56) & 0x20) == 0 )
    {
      if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
        MiRemoveUnusedSubsection(a1);
      *(_WORD *)(a1 + 32) |= 1u;
    }
    if ( v11 >= 2 )
    {
      if ( v11 == 2 && (a2 & 0x20) != 0 && v16 )
      {
        v15 = v18;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
        __writecr8(v17);
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v15 + 60) & 0x3FF)),
          v8 != 0,
          v16);
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
LABEL_18:
    if ( (a2 & 0x20) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      __writecr8(v5);
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
        v8 != 0,
        v16);
      if ( !v4 )
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      return 3221225773LL;
    }
    v16 = MiComputeCrossPartitionSectionCharges(a1);
    if ( v16 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      __writecr8(v5);
      if ( (int)MiGetSubsectionCharges(a1, v16) < 0 )
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
          v13 = v16;
          if ( !*(_QWORD *)(a1 + 8) )
          {
LABEL_26:
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
            __writecr8(v5);
            MiReturnCrossPartitionSectionCharges(
              *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
              v8 != 0,
              v13);
            if ( !v4 )
              ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
            return 3221225994LL;
          }
          v14 = v16 == *(unsigned int *)(a1 + 44);
        }
        else
        {
          v13 = v16;
          v14 = v16 == MiGetCommittedPages((_QWORD *)v3);
        }
        if ( !v14 )
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
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
    __writecr8(v17);
  }
  return 3221227019LL;
}
