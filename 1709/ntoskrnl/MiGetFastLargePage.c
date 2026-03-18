/*
 * XREFs of MiGetFastLargePage @ 0x1406EBFA0
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x1406EB7E8 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x140028A58 (MiProtectionToCacheAttribute.c)
 *     MiSetPfnLink @ 0x1400379C4 (MiSetPfnLink.c)
 *     MiPfnZeroingNeeded @ 0x1400C4A48 (MiPfnZeroingNeeded.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400C70F0 (MiFreeZeroPageSizeIndex.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1400C7BD4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiZeroAndConvertLargePage @ 0x1400CFECC (MiZeroAndConvertLargePage.c)
 *     MiSetPfnOriginalPte @ 0x14017CAF8 (MiSetPfnOriginalPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiGetFastLargePage(__int64 a1, unsigned int a2, unsigned __int64 *a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  char v11; // r8
  char v12; // dl
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // r8d
  unsigned int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v20[34]; // [rsp+38h] [rbp-50h] BYREF
  char v21; // [rsp+5Ah] [rbp-2Eh]

  result = MiGetLargePageDemoteAsNeeded(a1, a2, *a3, 0);
  v9 = result;
  if ( result )
  {
    v10 = (unsigned int)MiFreeZeroPageSizeIndex(result);
    v11 = *(_BYTE *)(v9 + 34) & 7;
    v12 = v21 & 0x38 | *(_BYTE *)(v9 + 34) & 0xC5 | 5;
    v13 = MiLargePageSizes[v10];
    *a3 -= v13;
    v21 = v12;
    v14 = 0LL;
    v19 = 0LL;
    if ( v11 == 1 )
    {
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v19);
      v14 = v19;
    }
    MiSetPfnOriginalPte((__int64)v20, v14);
    MiSetPfnOriginalPte(v9, v15);
    v16 = MiProtectionToCacheAttribute(a4);
    if ( v16 != 1 || MiPfnZeroingNeeded((__int64)v20, 1) )
      MiZeroAndConvertLargePage(v9, v17, v16);
    MiUpdateLargePageBitMap(a1, (v9 + 0x58000000000LL) / 48, v13, 1, 1);
    MiSetPfnLink((_QWORD *)v9, *(_QWORD *)(a5 + 8 * v10));
    *(_QWORD *)(v18 + 8 * v10) = v9;
    return 1LL;
  }
  return result;
}
