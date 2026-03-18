/*
 * XREFs of MiGetFastLargePage @ 0x1406BECF0
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x1406BE398 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400B6080 (MiFreeZeroPageSizeIndex.c)
 *     MiProtectionToCacheAttribute @ 0x140107AC8 (MiProtectionToCacheAttribute.c)
 *     MiUpdateLargePageBitMap @ 0x14012761C (MiUpdateLargePageBitMap.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x140128DC4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSetPfnOriginalPte @ 0x14017D2B0 (MiSetPfnOriginalPte.c)
 *     MiZeroAndConvertLargePage @ 0x140225624 (MiZeroAndConvertLargePage.c)
 */

__int64 __fastcall MiGetFastLargePage(__int64 a1, int a2, unsigned __int64 *a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned int v10; // eax
  char v11; // r8
  __int64 v12; // r15
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  char v15; // cl
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v19[34]; // [rsp+38h] [rbp-50h] BYREF
  char v20; // [rsp+5Ah] [rbp-2Eh]

  result = MiGetLargePageDemoteAsNeeded(a1, a2, *a3, 0);
  v9 = result;
  if ( result )
  {
    v10 = MiFreeZeroPageSizeIndex(result);
    v11 = *(_BYTE *)(v9 + 34);
    v12 = v10;
    v13 = 0LL;
    v18 = 0LL;
    v14 = MiLargePageSizes[v10];
    v15 = v20 & 0x38 | v11 & 0xC5;
    *a3 -= v14;
    v20 = v15 | 5;
    if ( (v11 & 7) == 1 )
    {
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v18);
      v13 = v18;
    }
    MiSetPfnOriginalPte((__int64)v19, v13);
    MiSetPfnOriginalPte(v9, v16);
    v17 = MiProtectionToCacheAttribute(a4);
    if ( v17 != 1 || MiPfnZeroingNeeded() )
      MiZeroAndConvertLargePage(v9, (unsigned int)v14, v17);
    MiUpdateLargePageBitMap(a1, (v9 + 0x58000000000LL) / 48, v14, 1, 1);
    result = 1LL;
    *(_QWORD *)v9 = *(_QWORD *)(a5 + 8 * v12);
    *(_QWORD *)(a5 + 8 * v12) = v9;
  }
  return result;
}
