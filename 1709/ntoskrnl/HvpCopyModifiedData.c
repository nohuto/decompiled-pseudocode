/*
 * XREFs of HvpCopyModifiedData @ 0x1406A2F00
 * Callers:
 *     HvpApplyLogEntry @ 0x1406A2C58 (HvpApplyLogEntry.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x140080EC0 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBlockAddress @ 0x140081210 (HvpMapEntryGetBlockAddress.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x1401E55AC (HvpMapEntryReleaseBlockAddress.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpCopyModifiedData(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  int v10; // r9d
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v12; // rcx
  unsigned int v13; // r8d
  struct _EX_RUNDOWN_REF *v14; // rdi
  _OWORD *BlockAddress; // rax
  __int64 v16; // rdx
  __int128 *v17; // rcx
  __int128 v18; // xmm0
  __int16 v19; // [rsp+68h] [rbp+20h] BYREF

  result = HvpGetBinContextInitialize(&v19);
  v9 = 0;
  if ( v10 )
  {
    do
    {
      CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v9 + a2);
      v14 = CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v13, 0x68DuLL);
      BlockAddress = (_OWORD *)HvpMapEntryGetBlockAddress(v12, CellMap, &v19);
      v16 = 32LL;
      v17 = (__int128 *)(a3 + v9);
      do
      {
        v18 = *v17;
        v17 += 8;
        *BlockAddress = v18;
        BlockAddress += 8;
        *(BlockAddress - 7) = *(v17 - 7);
        *(BlockAddress - 6) = *(v17 - 6);
        *(BlockAddress - 5) = *(v17 - 5);
        *(BlockAddress - 4) = *(v17 - 4);
        *(BlockAddress - 3) = *(v17 - 3);
        *(BlockAddress - 2) = *(v17 - 2);
        *(BlockAddress - 1) = *(v17 - 1);
        --v16;
      }
      while ( v16 );
      result = HvpMapEntryReleaseBlockAddress((__int64)v17, v14, &v19);
      v9 += 4096;
    }
    while ( v9 < a4 );
  }
  return result;
}
