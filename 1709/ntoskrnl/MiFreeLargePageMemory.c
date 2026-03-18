/*
 * XREFs of MiFreeLargePageMemory @ 0x1400F43C0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MiFreeMdlPageRun @ 0x1400E1354 (MiFreeMdlPageRun.c)
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 *     MiFreeContiguousPages @ 0x140118318 (MiFreeContiguousPages.c)
 *     MiFreeLargePages @ 0x14022E560 (MiFreeLargePages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 */

unsigned __int64 __fastcall MiFreeLargePageMemory(unsigned __int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  BOOL v8; // ebp
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // r11
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  char v16; // cl
  char v17; // al
  __int64 v18; // rax
  char v19; // al
  __int64 v21; // r15
  __int64 v22; // [rsp+30h] [rbp-58h]
  unsigned __int64 v23; // [rsp+38h] [rbp-50h]
  int v25; // [rsp+98h] [rbp+10h] BYREF
  BOOL v26; // [rsp+A0h] [rbp+18h]
  __int64 CurrentIrql; // [rsp+A8h] [rbp+20h]

  v3 = a1;
  v4 = 0LL;
  v5 = MiLargePageSizes[a2];
  v6 = 0LL;
  v7 = MiLargePageContainingFrames[a2];
  v8 = a3 != 1;
  v23 = v5;
  v9 = v5 + a1 - 1;
  v26 = v8;
  v22 = v7;
  v10 = 48 * v9 - 0x58000000000LL;
  MiUpdateLargePageBitMap(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)), a1, v5, 0, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = 0x4000000000000000LL;
  LODWORD(v12) = 0;
  do
  {
    v25 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v25);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
      v11 = 0x4000000000000000LL;
    }
    *(_QWORD *)(v10 + 40) &= ~0x200000000000000uLL;
    v13 = *(_QWORD *)(v10 + 40);
    if ( (*(_BYTE *)(v10 + 34) & 7) == 5 )
      ++*(_WORD *)(v10 + 32);
    if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 )
      *(_QWORD *)(v10 + 24) |= v11;
    if ( ((v13 >> 54) & 7) == 3 )
      MiClearPfnImageVerified(v10, 12);
    MiSetOriginalPtePfnFromFreeList(v10 + 16);
    if ( *(_WORD *)(v10 + 32) == 2
      && (v16 = *(_BYTE *)(v10 + 34), (v16 & 0xC0) == 0x40)
      && (v17 = *(_BYTE *)(v10 + 35), (v17 & 0x40) == 0) )
    {
      if ( !v6 )
      {
        *(_WORD *)(v10 + 32) = v12;
        *(_BYTE *)(v10 + 35) = v17 & 0xF8;
        v18 = *(_QWORD *)(v10 + 40);
        *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
        *(_QWORD *)(v10 + 40) ^= (v7 ^ v18) & 0xFFFFFFFFFLL;
        *(_BYTE *)(v10 + 34) = v16 & 0xEF;
        if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 1 )
          *(_QWORD *)(v10 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
        v19 = *(_BYTE *)(v10 + 34);
        *(_QWORD *)(v10 + 24) &= v15;
        *(_QWORD *)(v10 + 8) = v12;
        *(_BYTE *)(v10 + 34) ^= (v8 ^ v19) & 7;
        if ( v9 == v3 )
        {
          MiInsertLargePageInNodeListHelper(v9, v5, v8, 0);
          v4 = v5;
LABEL_19:
          LODWORD(v12) = 0;
          v11 = 0x4000000000000000LL;
          goto LABEL_16;
        }
        goto LABEL_16;
      }
    }
    else if ( !v6 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), v14);
      v6 = v10;
      v9 = v3 + v5 - 1;
      v10 = 48 * v9 - 0x58000000000LL;
      if ( v10 > v6 )
      {
        v21 = CurrentIrql;
        v4 += (v10 - v6 - 1) / 0x30 + 1;
        do
        {
          MiLockPageAtDpcInline(v10);
          *(_QWORD *)(v10 + 40) &= 0xFFFFFFF000000000uLL;
          MiInsertPageInFreeOrZeroedList(v9, 2);
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (v9 & 0xF) == 0 && KeShouldYieldProcessor() )
          {
            __writecr8((unsigned __int8)v21);
            v21 = KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          --v9;
          v10 -= 48LL;
        }
        while ( v10 > v6 );
        v3 = a1;
        v8 = v26;
        v5 = v23;
        CurrentIrql = v21;
        v7 = v22;
      }
      MiLockPageAtDpcInline(v10);
      LODWORD(v12) = 0;
      v11 = 0x4000000000000000LL;
    }
    *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v10 + 32) -= 2;
    *(_QWORD *)(v10 + 40) &= 0xFFFFFFF000000000uLL;
    if ( !*(_WORD *)(v10 + 32) )
    {
      MiPfnReferenceCountIsZero(v10, v9);
      ++v4;
      goto LABEL_19;
    }
    *(_BYTE *)(v10 + 34) |= 7u;
LABEL_16:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v10 -= 48LL;
    --v9;
  }
  while ( v9 >= v3 );
  __writecr8((unsigned __int8)CurrentIrql);
  return v4;
}
