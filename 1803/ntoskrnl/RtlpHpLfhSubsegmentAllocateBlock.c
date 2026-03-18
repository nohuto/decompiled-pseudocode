/*
 * XREFs of RtlpHpLfhSubsegmentAllocateBlock @ 0x14029B370
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14029A9A8 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x14029B504 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentSetUnusedBytes @ 0x14029D138 (RtlpHpLfhSubsegmentSetUnusedBytes.c)
 *     RtlpLfhBlockBitmapAllocate @ 0x14029ED64 (RtlpLfhBlockBitmapAllocate.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentAllocateBlock(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v7; // r13d
  unsigned int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // r12d
  unsigned __int16 v11; // si
  __int64 v12; // rbp
  __int16 v13; // ax
  __int16 v14; // cx
  int v15; // eax
  int v16; // esi
  unsigned int v17; // ebp
  int v18; // eax
  __int64 v19; // r10
  _QWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF

  v21[0] = 2 * (unsigned int)*(unsigned __int16 *)(a3 + 34);
  v21[1] = a3 + 48;
  v7 = RtlpSearchWidth[*(unsigned __int8 *)(a2 + 1)];
  v8 = *(_DWORD *)(a3 + 40) ^ ((unsigned int)a3 >> 12);
  v9 = (unsigned __int16)(qword_1403A5F28 ^ v8);
  v10 = ((unsigned int)qword_1403A5F28 ^ v8) >> 16;
  v11 = (unsigned __int8)word_1403EC860;
  v12 = a4 < v9 ? 3LL : 1LL;
  if ( (unsigned __int8)word_1403EC860 == (unsigned __int16)HIBYTE(word_1403EC860) )
  {
    v13 = ExGenRandom(1);
    v14 = (v13 << 8) | (unsigned __int8)(v13 + 1);
  }
  else
  {
    v14 = word_1403EC860 ^ (unsigned __int8)(word_1403EC860 ^ (word_1403EC860 + 1));
  }
  word_1403EC860 = v14;
  v15 = RtlpLfhBlockBitmapAllocate(
          (unsigned int)v21,
          *(unsigned __int16 *)(a3 + 36),
          RtlpLowFragHeapRandomData[v11],
          v7,
          v12);
  *(_WORD *)(a3 + 36) = v15;
  v16 = v15;
  v17 = v10 + v15 * v9;
  if ( *(_BYTE *)(a3 + 45) <= 1u || (v18 = RtlpHpLfhSubsegmentCommitBlock(a1, a3, v17), v19 = 0LL, v18 >= 0) )
  {
    v19 = a3 + v17;
    if ( a4 < v9 )
      RtlpHpLfhSubsegmentSetUnusedBytes(a3, a3 + v17, v9 - a4);
    v16 = -1;
  }
  if ( v16 != -1 )
    _InterlockedAnd64(
      (volatile signed __int64 *)(a3 + 8 * ((unsigned __int64)(unsigned int)(2 * v16) >> 6) + 48),
      ~(3LL << ((2 * v16) & 0x3F)));
  return v19;
}
