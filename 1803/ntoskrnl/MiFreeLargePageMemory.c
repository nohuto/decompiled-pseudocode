/*
 * XREFs of MiFreeLargePageMemory @ 0x1401363B0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiFreeContiguousPages @ 0x1400C98C4 (MiFreeContiguousPages.c)
 *     MiDecommitLargePoolVa @ 0x1401361A0 (MiDecommitLargePoolVa.c)
 *     MiFreeMdlPageRun @ 0x140136A30 (MiFreeMdlPageRun.c)
 *     MiFreeLargePages @ 0x140268BB8 (MiFreeLargePages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiInsertLargePageInNodeList @ 0x140136628 (MiInsertLargePageInNodeList.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140265490 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiFreeLargePageMemory(ULONG_PTR a1, int a2, int a3)
{
  ULONG_PTR v3; // rsi
  __int64 v4; // r13
  ULONG_PTR v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r15
  BOOL v8; // ebp
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rbx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v12; // rcx
  char v13; // al
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // r10
  char v17; // cl
  char v18; // al
  __int64 v19; // rax
  char v20; // al
  ULONG_PTR v22; // [rsp+30h] [rbp-68h]
  unsigned __int64 v23; // [rsp+38h] [rbp-60h]
  __int64 v24; // [rsp+40h] [rbp-58h]
  int v26; // [rsp+A8h] [rbp+10h] BYREF
  BOOL v27; // [rsp+B0h] [rbp+18h]
  __int64 v28; // [rsp+B8h] [rbp+20h]

  v3 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = MiLargePageSizes[a2];
  v7 = MiLargePageContainingFrames[a2];
  v8 = a3 != 1;
  v27 = v8;
  v28 = v6;
  v24 = v7;
  v9 = v6 + v3 - 1;
  v22 = v6 + v3;
  v23 = 48 * v9 - 0x58000000000LL;
  v10 = v23;
  MiUpdateLargePageBitMap(*(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v23 + 40) >> 40) & 0x3FFLL)), v3, v6, 0, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  do
  {
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    v12 = *(_QWORD *)(v10 + 40) & 0xFDFFFFFFFFFFFFFFuLL;
    v13 = *(_BYTE *)(v10 + 34) & 7;
    *(_QWORD *)(v10 + 40) = v12;
    if ( v13 == 5 )
      ++*(_WORD *)(v10 + 32);
    if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 )
      *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
    if ( ((v12 >> 54) & 7) == 3 )
      MiClearPfnImageVerified(v10, 12);
    MiSetOriginalPtePfnFromFreeList(v10 + 16);
    if ( *(_WORD *)(v10 + 32) != 2
      || (v17 = *(_BYTE *)(v10 + 34), (v17 & 0xC0) != 0x40)
      || (v18 = *(_BYTE *)(v10 + 35), (v18 & 0x40) != 0) )
    {
      if ( !v5 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), v15);
        v5 = v10;
        v10 = v23;
        v9 = v22 - 1;
        if ( v23 > v5 )
        {
          v4 += (v23 - v5 - 1) / 0x30 + 1;
          do
          {
            MiLockPageAtDpcInline(v10);
            *(_QWORD *)(v10 + 40) &= 0xFFFFFFF000000000uLL;
            MiInsertPageInFreeOrZeroedList(v9, 2);
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( (v9 & 0xF) == 0 && KeShouldYieldProcessor() )
            {
              __writecr8(CurrentIrql);
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            --v9;
            v10 -= 48LL;
          }
          while ( v10 > v5 );
          v3 = a1;
          v8 = v27;
          v7 = v24;
        }
        MiLockPageAtDpcInline(v10);
      }
LABEL_35:
      *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v10 + 40) &= 0xFFFFFFF000000000uLL;
      *(_WORD *)(v10 + 32) -= 2;
      if ( *(_WORD *)(v10 + 32) )
      {
        *(_BYTE *)(v10 + 34) |= 7u;
      }
      else
      {
        MiPfnReferenceCountIsZero(v10, v9);
        ++v4;
      }
      goto LABEL_17;
    }
    if ( v5 )
      goto LABEL_35;
    *(_WORD *)(v10 + 32) = v14;
    *(_BYTE *)(v10 + 35) = v18 & 0xF8;
    v19 = *(_QWORD *)(v10 + 40);
    *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
    *(_QWORD *)(v10 + 40) ^= (v7 ^ v19) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v10 + 34) = v17 & 0xEF;
    if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 1 )
      *(_QWORD *)(v10 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    v20 = *(_BYTE *)(v10 + 34);
    *(_QWORD *)(v10 + 24) &= v16;
    *(_QWORD *)(v10 + 8) = v14;
    *(_BYTE *)(v10 + 34) ^= (v8 ^ v20) & 7;
    if ( v9 == v3 )
    {
      v4 = v28;
      MiInsertLargePageInNodeList(v9, v28, v8);
    }
LABEL_17:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v9 & 0xF) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
    {
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v10 -= 48LL;
    --v9;
  }
  while ( v9 >= v3 );
  __writecr8(CurrentIrql);
  return v4;
}
