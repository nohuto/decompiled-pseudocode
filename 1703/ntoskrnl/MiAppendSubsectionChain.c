/*
 * XREFs of MiAppendSubsectionChain @ 0x14005E4A0
 * Callers:
 *     MiExtendSection @ 0x140492FCC (MiExtendSection.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140016540 (MiInsertUnusedSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiInsertSubsectionNode @ 0x14005E7E0 (MiInsertSubsectionNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8E30 (MiDecrementSubsectionViewCount.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1402215A8 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // r13
  __int64 v5; // rbx
  bool v7; // bp
  __int64 v8; // r14
  volatile LONG *v9; // r12
  KIRQL v10; // al
  KIRQL v11; // di
  __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned int v15; // edi
  __int64 i; // rcx
  __int64 inserted; // rax
  __int64 v18; // rax
  KIRQL v19; // [rsp+60h] [rbp+8h]

  v3 = *a1;
  v5 = *(_QWORD *)(a2 + 16);
  v7 = 0;
  v8 = 0LL;
  v9 = (volatile LONG *)(*a1 + 72);
  v10 = ExAcquireSpinLockExclusive(v9);
  v11 = v10;
  v12 = 0x3FFFFFFFLL;
  v19 = v10;
  if ( *(_QWORD *)(v3 + 48) )
  {
    v15 = 2;
    if ( (a1[6] & 0x3FFFFFFF) != 0 )
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
    v15 = 1;
LABEL_15:
    ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    __writecr8(v19);
    return v15;
  }
  if ( *(_QWORD *)(v5 + 8) )
  {
    do
    {
      if ( (*(_DWORD *)(v5 + 48) & 0x3FFFFFFF) != 0 )
        MiUpdateSubsectionCrossPartitionRefs(v5, 0x3FFFFFFFLL);
      *(_QWORD *)(v5 + 96) = 0LL;
      inserted = MiInsertUnusedSubsection((_DWORD *)v5, v12);
      v5 = *(_QWORD *)(v5 + 16);
      v8 += inserted;
      v12 = 0x3FFFFFFFLL;
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
      v18 = MiDecrementSubsectionViewCount(v5, 24LL);
      v5 = *(_QWORD *)(v5 + 16);
      v8 += v18;
    }
    while ( v5 );
    v11 = v19;
    goto LABEL_5;
  }
LABEL_4:
  v11 = v10;
LABEL_5:
  *((_WORD *)a1 + 17) &= 0xFu;
  *((_DWORD *)a1 + 10) = *(_DWORD *)(a2 + 40);
  *((_DWORD *)a1 + 11) = *(_DWORD *)(a2 + 44);
  *((_DWORD *)a1 + 13) ^= (*((_DWORD *)a1 + 13) ^ *(_DWORD *)(a2 + 52)) & 0x3FFFFFFF;
  v13 = *(_QWORD *)(a2 + 16);
  a1[2] = v13;
  while ( v13 )
  {
    MiInsertSubsectionNode(v3, v13);
    v13 = *(_QWORD *)(v13 + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  __writecr8(v11);
  if ( v8 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)), 1LL, v8);
  return 0LL;
}
