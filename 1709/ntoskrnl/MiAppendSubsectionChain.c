/*
 * XREFs of MiAppendSubsectionChain @ 0x140110780
 * Callers:
 *     MiExtendSection @ 0x14056BC80 (MiExtendSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A1FF0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertSubsectionNode @ 0x1400B747C (MiInsertSubsectionNode.c)
 *     MiInsertUnusedSubsection @ 0x1400B779C (MiInsertUnusedSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14022E260 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r13
  ULONG_PTR v5; // rbx
  bool v7; // bp
  __int64 v8; // r14
  volatile LONG *v9; // r12
  KIRQL v10; // al
  KIRQL v11; // di
  unsigned __int64 v12; // rbx
  unsigned int v14; // edi
  ULONG_PTR i; // rcx
  __int64 inserted; // rax
  __int64 v17; // rax
  KIRQL v18; // [rsp+60h] [rbp+8h]

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a2 + 16);
  v7 = 0;
  v8 = 0LL;
  v9 = (volatile LONG *)(*(_QWORD *)a1 + 72LL);
  v10 = ExAcquireSpinLockExclusive(v9);
  v11 = v10;
  v18 = v10;
  if ( *(_QWORD *)(v3 + 48) )
  {
    v14 = 2;
    if ( (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
    {
      if ( (a3 & 2) == 0 )
        goto LABEL_15;
    }
    else
    {
      v7 = (a3 & 2) != 0;
    }
    if ( (a3 & 1) != 0 )
    {
      for ( i = v5; i; i = *(_QWORD *)(i + 16) )
      {
        *(_WORD *)(i + 34) |= 1u;
        if ( (*(_DWORD *)(v3 + 56) & 0x40000000) != 0 )
          *(_DWORD *)(i + 52) |= 0x40000000u;
      }
      goto LABEL_20;
    }
    v14 = 1;
LABEL_15:
    ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    __writecr8(v18);
    return v14;
  }
  if ( *(_QWORD *)(v5 + 8) )
  {
    do
    {
      if ( (*(_DWORD *)(v5 + 48) & 0x3FFFFFFF) != 0 )
        MiUpdateSubsectionCrossPartitionRefs(v5, 0x3FFFFFFFLL);
      *(_QWORD *)(v5 + 96) = 0LL;
      inserted = MiInsertUnusedSubsection((_DWORD *)v5);
      v5 = *(_QWORD *)(v5 + 16);
      v8 += inserted;
    }
    while ( v5 );
    goto LABEL_5;
  }
  if ( (a3 & 2) == 0 )
    goto LABEL_4;
  v7 = 1;
LABEL_20:
  if ( v7 )
  {
    do
    {
      v17 = MiDecrementSubsectionViewCount(v5, 24);
      v5 = *(_QWORD *)(v5 + 16);
      v8 += v17;
    }
    while ( v5 );
    v11 = v18;
    goto LABEL_5;
  }
LABEL_4:
  v11 = v10;
LABEL_5:
  *(_WORD *)(a1 + 34) &= 0xFu;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 52) ^= (*(_DWORD *)(a1 + 52) ^ *(_DWORD *)(a2 + 52)) & 0x3FFFFFFF;
  v12 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v12;
  while ( v12 )
  {
    MiInsertSubsectionNode(v3, v12, 1);
    v12 = *(_QWORD *)(v12 + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  __writecr8(v11);
  if ( v8 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)), 1LL, v8);
  return 0LL;
}
