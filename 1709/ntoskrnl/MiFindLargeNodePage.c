/*
 * XREFs of MiFindLargeNodePage @ 0x140216B0C
 * Callers:
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406EDB48 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiGetFreeZeroLargePage @ 0x1400C4F80 (MiGetFreeZeroLargePage.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400C70F0 (MiFreeZeroPageSizeIndex.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1400C7BD4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiSetPfnOwnedAndActive @ 0x1400C7EB8 (MiSetPfnOwnedAndActive.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 */

unsigned __int64 __fastcall MiFindLargeNodePage(__int64 a1, unsigned int a2, int *a3, int a4, char a5)
{
  unsigned __int64 v8; // r8
  unsigned __int16 *v9; // rbx
  __int64 v10; // r15
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v15; // r8
  __int64 v16; // rbx
  char v17; // al
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r14
  int v20; // r15d
  int v21; // ebp
  unsigned __int8 v22; // al
  unsigned __int64 v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v8 = MiLargePageSizes[*a3];
  v23 = v8;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
  {
    a2 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 23572);
    v9 = (unsigned __int16 *)((char *)qword_140388508 + 2 * a2 * (unsigned __int16)KeNumberNodes);
    v10 = (__int64)&v9[(unsigned __int16)KeNumberNodes];
  }
  else
  {
    v9 = 0LL;
    v10 = 2LL;
  }
  v11 = (2 * ((a4 & 1) == 0)) | 0x8000;
  if ( (a4 & 0x8000) == 0 )
    v11 = 2 * ((a4 & 1) == 0);
  while ( 1 )
  {
    v12 = (a4 & 0x4000) != 0
        ? MiGetFreeZeroLargePage(a1, *a3, a4, a2, 0, 4)
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
  v17 = *(_BYTE *)(v13 + 34);
  *a3 = v15;
  v24 = 0LL;
  v18 = MiLargePageSizes[v15];
  if ( (v17 & 7) == 1 )
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
      MiSetPfnOwnedAndActive(v13, a5, -8LL, 1u, v20);
      *(_QWORD *)(v13 + 16) = v16;
    }
    v13 += 48LL;
    --v19;
  }
  while ( v19 );
  return v13 - 48 * v18;
}
