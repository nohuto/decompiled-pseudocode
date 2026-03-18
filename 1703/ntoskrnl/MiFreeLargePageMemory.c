/*
 * XREFs of MiFreeLargePageMemory @ 0x140126770
 * Callers:
 *     MiFreeMdlPageRun @ 0x1400B3B5C (MiFreeMdlPageRun.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiFreeContiguousPages @ 0x1401233D4 (MiFreeContiguousPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1401260D0 (MiReturnNonPagedPoolVa.c)
 *     MiFreeLargePages @ 0x1402216DC (MiFreeLargePages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiUpdateLargePageBitMap @ 0x14012761C (MiUpdateLargePageBitMap.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 */

unsigned __int64 __fastcall MiFreeLargePageMemory(ULONG_PTR a1, int a2, int a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r15
  BOOL v7; // r12d
  __int64 v8; // r13
  ULONG_PTR v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // cl
  char v15; // al
  __int64 v16; // rax
  __int64 v18; // [rsp+70h] [rbp+8h]
  BOOL v19; // [rsp+78h] [rbp+10h]
  unsigned __int8 CurrentIrql; // [rsp+88h] [rbp+20h]

  v4 = 0LL;
  v5 = 0LL;
  v6 = MiLargePageSizes[a2];
  v7 = a3 != 1;
  v8 = MiLargePageContainingFrames[a2];
  v9 = v6 + a1 - 1;
  v19 = v7;
  v18 = v8;
  v10 = 48 * v9 - 0x58000000000LL;
  MiUpdateLargePageBitMap(*(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)), a1, v6, 0, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  do
  {
    MiLockPageAtDpcInline(v10);
    *(_QWORD *)(v10 + 40) &= ~0x200000000000000uLL;
    v12 = *(_QWORD *)(v10 + 40);
    if ( (*(_BYTE *)(v10 + 34) & 7) == 5 )
      ++*(_WORD *)(v10 + 32);
    v13 = *(_QWORD *)(v10 + 24);
    if ( (v13 & 0x4000000000000000LL) == 0 )
    {
      v13 |= 0x4000000000000000uLL;
      *(_QWORD *)(v10 + 24) = v13;
    }
    if ( ((v12 >> 54) & 7) == 3 )
      MiClearPfnImageVerified(v10, 12);
    MiSetOriginalPtePfnFromFreeList(v10 + 16, v13, v11);
    if ( *(_WORD *)(v10 + 32) != 2
      || (v14 = *(_BYTE *)(v10 + 34), (v14 & 0xC0) != 0x40)
      || (v15 = *(_BYTE *)(v10 + 35), (v15 & 0x40) != 0) )
    {
      if ( !v5 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v5 = v10;
        v9 = v6 + a1 - 1;
        v10 = 48 * v9 - 0x58000000000LL;
        if ( v10 > v5 )
        {
          v4 += (v10 - v5 - 1) / 0x30 + 1;
          do
          {
            MiLockPageAtDpcInline(v10);
            *(_QWORD *)(v10 + 40) &= 0xFFFFFFF000000000uLL;
            MiInsertPageInFreeOrZeroedList(v9, 2);
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            --v9;
            v10 -= 48LL;
          }
          while ( v10 > v5 );
          v7 = v19;
          v8 = v18;
        }
        MiLockPageAtDpcInline(v10);
      }
LABEL_22:
      *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v10 + 32) -= 2;
      *(_QWORD *)(v10 + 40) &= 0xFFFFFFF000000000uLL;
      if ( *(_WORD *)(v10 + 32) )
      {
        *(_BYTE *)(v10 + 34) |= 7u;
      }
      else
      {
        MiPfnReferenceCountIsZero(v10, v9);
        ++v4;
      }
      goto LABEL_25;
    }
    if ( v5 )
      goto LABEL_22;
    *(_BYTE *)(v10 + 35) = v15 & 0xF8;
    *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v10 + 32) = 0;
    *(_BYTE *)(v10 + 34) = v14 & 0xEF;
    if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 1 )
      *(_QWORD *)(v10 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    v16 = v8 ^ *(_QWORD *)(v10 + 40);
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 40) ^= v16 & 0xFFFFFFFFFLL;
    *(_BYTE *)(v10 + 34) ^= (v7 ^ *(_BYTE *)(v10 + 34)) & 7;
    *(_QWORD *)(v10 + 24) &= ~0x4000000000000000uLL;
    if ( v9 == a1 )
    {
      MiInsertLargePageInNodeListHelper(v9, v6, v7, 0);
      v4 = v6;
    }
LABEL_25:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v10 -= 48LL;
    --v9;
  }
  while ( v9 >= a1 );
  __writecr8(CurrentIrql);
  return v4;
}
