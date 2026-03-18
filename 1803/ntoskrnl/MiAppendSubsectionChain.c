/*
 * XREFs of MiAppendSubsectionChain @ 0x14004D030
 * Callers:
 *     MiExtendSection @ 0x1404BE298 (MiExtendSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x14004D364 (MiInsertSubsectionNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSubsection @ 0x1400E41E4 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400E5400 (MiDecrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140268404 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // r13
  ULONG_PTR v5; // rbx
  bool v7; // bp
  __int64 v8; // r15
  volatile LONG *v9; // rdi
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rbx
  unsigned int v16; // edi
  ULONG_PTR i; // rcx
  __int64 inserted; // rax
  __int64 v19; // rax
  KIRQL v20; // [rsp+60h] [rbp+8h]
  volatile LONG *SpinLock; // [rsp+78h] [rbp+20h]

  v3 = *a1;
  v5 = *(_QWORD *)(a2 + 16);
  v7 = 0;
  v8 = 0LL;
  v9 = (volatile LONG *)(*a1 + 72);
  SpinLock = v9;
  v10 = ExAcquireSpinLockExclusive(v9);
  v12 = 1LL;
  v20 = v10;
  if ( *(_QWORD *)(v3 + 48) )
  {
    v16 = 2;
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
    v16 = 1;
LABEL_15:
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8(v20);
    return v16;
  }
  if ( *(_QWORD *)(v5 + 8) )
  {
    do
    {
      if ( (*(_DWORD *)(v5 + 48) & 0x3FFFFFFF) != 0 )
        MiUpdateSubsectionCrossPartitionRefs(v5, 0x3FFFFFFFLL);
      *(_QWORD *)(v5 + 96) = 0LL;
      inserted = MiInsertUnusedSubsection(v5, v11, v12);
      v5 = *(_QWORD *)(v5 + 16);
      v8 += inserted;
    }
    while ( v5 );
    goto LABEL_5;
  }
  if ( (a3 & 2) != 0 )
  {
    v7 = 1;
LABEL_20:
    if ( v7 )
    {
      do
      {
        v19 = MiDecrementSubsectionViewCount(v5);
        v5 = *(_QWORD *)(v5 + 16);
        v8 += v19;
      }
      while ( v5 );
    }
  }
  v9 = (volatile LONG *)(v3 + 72);
LABEL_5:
  *((_WORD *)a1 + 17) &= 0xFu;
  v13 = *(_DWORD *)(a2 + 40);
  *((_DWORD *)a1 + 13) &= 0xC0000000;
  *((_DWORD *)a1 + 10) = v13;
  v14 = *(_QWORD *)(a2 + 16);
  a1[2] = v14;
  while ( v14 )
  {
    MiInsertSubsectionNode(v3, v14);
    v14 = *(_QWORD *)(v14 + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  __writecr8(v20);
  if ( v8 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)), 1LL, v8);
  return 0LL;
}
