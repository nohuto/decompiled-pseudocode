/*
 * XREFs of RtlpHpLfhSubsegmentAllocateBlock @ 0x180107090
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x180042C90 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x180046DE0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpLfhBlockBitmapAllocate @ 0x1801026D8 (RtlpLfhBlockBitmapAllocate.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180107228 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentSetUnusedBytes @ 0x180107484 (RtlpHpLfhSubsegmentSetUnusedBytes.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentAllocateBlock(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _TEB *v5; // r13
  unsigned int v8; // r12d
  unsigned int v9; // edi
  __int64 v10; // rbp
  unsigned __int16 LowFragHeapDataSlot; // si
  __int16 RandomValue32; // ax
  unsigned __int16 v13; // ax
  int v14; // esi
  unsigned int v15; // ebp
  int v16; // eax
  __int64 v17; // r10
  unsigned __int64 v19[2]; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+88h] [rbp+20h]

  v5 = NtCurrentTeb();
  v19[0] = 2 * (unsigned int)*(unsigned __int16 *)(a3 + 34);
  v19[1] = a3 + 48;
  v8 = RtlpSearchWidth[*(unsigned __int8 *)(a2 + 1)];
  v9 = (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(a3 + 40) ^ ((unsigned int)a3 >> 12));
  v20 = RtlpLFHKey ^ *(_DWORD *)(a3 + 40) ^ ((unsigned int)a3 >> 12);
  v10 = a4 < v9 ? 3LL : 1LL;
  LowFragHeapDataSlot = (unsigned __int8)v5->LowFragHeapDataSlot;
  if ( LowFragHeapDataSlot == HIBYTE(v5->LowFragHeapDataSlot) )
  {
    RandomValue32 = RtlpHeapGenerateRandomValue32();
    v13 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
  }
  else
  {
    v13 = (unsigned __int8)(v5->LowFragHeapDataSlot ^ (LowFragHeapDataSlot + 1)) ^ v5->LowFragHeapDataSlot;
  }
  v5->LowFragHeapDataSlot = v13;
  v14 = RtlpLfhBlockBitmapAllocate(
          v19,
          *(unsigned __int16 *)(a3 + 36),
          RtlpLowFragHeapRandomData[LowFragHeapDataSlot],
          v8,
          v10);
  *(_WORD *)(a3 + 36) = v14;
  v15 = HIWORD(v20) + v14 * v9;
  if ( *(_BYTE *)(a3 + 45) <= 1u || (v16 = RtlpHpLfhSubsegmentCommitBlock(a1, a3, v15), v17 = 0LL, v16 >= 0) )
  {
    v17 = a3 + v15;
    if ( a4 < v9 )
      RtlpHpLfhSubsegmentSetUnusedBytes(a3, a3 + v15, v9 - a4);
    v14 = -1;
  }
  if ( v14 != -1 )
    _InterlockedAnd64(
      (volatile signed __int64 *)(a3 + 8 * ((unsigned __int64)(unsigned int)(2 * v14) >> 6) + 48),
      ~(3LL << ((2 * v14) & 0x3F)));
  return v17;
}
