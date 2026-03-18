/*
 * XREFs of MiFindLargeNodePage @ 0x14020EDB8
 * Callers:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406BC714 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiSetPfnOwnedAndActive @ 0x1400269E4 (MiSetPfnOwnedAndActive.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400B6080 (MiFreeZeroPageSizeIndex.c)
 *     MiUpdateLargePageBitMap @ 0x14012761C (MiUpdateLargePageBitMap.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140128DC4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiGetFreeZeroLargePage @ 0x140128E70 (MiGetFreeZeroLargePage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 */

unsigned __int64 __fastcall MiFindLargeNodePage(__int64 a1, unsigned int a2, unsigned int *a3, int a4, char a5)
{
  unsigned __int64 v8; // r8
  unsigned __int16 *v9; // rbx
  __int64 v10; // rbp
  int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  char v17; // al
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbp
  int v20; // r15d
  int v21; // r14d
  unsigned __int8 v22; // al
  unsigned __int64 v23; // [rsp+30h] [rbp-38h]
  unsigned __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v8 = MiLargePageSizes[*a3];
  v23 = v8;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
  {
    a2 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 23656);
    v9 = (unsigned __int16 *)((char *)qword_14036C1C0 + 2 * a2 * (unsigned __int16)KeNumberNodes);
    v10 = (__int64)&v9[(unsigned __int16)KeNumberNodes];
  }
  else
  {
    v9 = 0LL;
    v10 = 2LL;
  }
  v11 = ~(2 * (_BYTE)a4) & 2 | 0x8000;
  if ( (a4 & 0x8000) == 0 )
    v11 = ~(2 * (_BYTE)a4) & 2;
  while ( 1 )
  {
    v12 = (a4 & 0x4000) != 0
        ? MiGetFreeZeroLargePage(a1, *a3, a4, a2, 4u)
        : MiGetLargePageDemoteAsNeeded(a1, a2, v8, v11);
    v13 = v12;
    if ( v12 )
      break;
    if ( ++v9 == (unsigned __int16 *)v10 )
      return 0LL;
    a2 = *v9;
    v8 = v23;
  }
  v15 = (unsigned int)MiFreeZeroPageSizeIndex(v12);
  v16 = 0LL;
  v17 = *(_BYTE *)(v13 + 34) & 7;
  *a3 = v15;
  v24 = 0LL;
  v18 = MiLargePageSizes[v15];
  if ( v17 == 1 )
  {
    MiSetOriginalPtePfnFromFreeList(&v24);
    v16 = v24;
  }
  MiUpdateLargePageBitMap(a1, (v13 + 0x58000000000LL) / 48, v18, 1, 1);
  v19 = v18;
  v20 = ((a4 & 0x100000) != 0) + 1;
  v21 = a4 & 0x40000000;
  do
  {
    *(_QWORD *)(v13 + 16) = v16;
    if ( v21 )
    {
      v22 = MiLockPageInline(v13);
      *(_QWORD *)(v13 + 40) &= 0xFFFFFFF000000000uLL;
      *(_BYTE *)(v13 + 34) = *(_BYTE *)(v13 + 34) & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v22);
      v16 = v24;
    }
    else
    {
      *(_QWORD *)v13 = 0LL;
      *(_QWORD *)(v13 + 40) &= ~0x200000000000000uLL;
      MiSetPfnOwnedAndActive(v13, a5, -8LL, 1u, v20);
      *(_QWORD *)(v13 + 16) = v16;
    }
    v13 += 48LL;
    --v19;
  }
  while ( v19 );
  return v13 - 48 * v18;
}
