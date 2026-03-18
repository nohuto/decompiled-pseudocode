/*
 * XREFs of MiGetFastLargePage @ 0x140755A14
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14075522C (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiSetPfnLink @ 0x1400093E8 (MiSetPfnLink.c)
 *     MiPfnZeroingNeeded @ 0x140052058 (MiPfnZeroingNeeded.c)
 *     MiProtectionToCacheAttribute @ 0x140056EF8 (MiProtectionToCacheAttribute.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1400BBBB8 (MiGetLargePageDemoteAsNeeded.c)
 *     MiFreeZeroPageSizeIndex @ 0x140121FC0 (MiFreeZeroPageSizeIndex.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 *     MiZeroAndConvertLargePage @ 0x14013825C (MiZeroAndConvertLargePage.c)
 *     MiSetPfnOriginalPte @ 0x1401A6920 (MiSetPfnOriginalPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140265490 (MiSetOriginalPtePfnFromFreeList.c)
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

  result = MiGetLargePageDemoteAsNeeded(a1, a2, *a3, 4u);
  v9 = result;
  if ( result )
  {
    v10 = (unsigned int)MiFreeZeroPageSizeIndex(result);
    v11 = *(_BYTE *)(v9 + 34) & 7;
    v12 = v21 & 0x38 | *(_BYTE *)(v9 + 34) & 0xC5 | 5;
    v13 = MiLargePageSizes[v10];
    *a3 -= v13;
    v21 = v12;
    v14 = ZeroPte;
    v19 = ZeroPte;
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
