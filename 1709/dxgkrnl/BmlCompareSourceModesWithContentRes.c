/*
 * XREFs of BmlCompareSourceModesWithContentRes @ 0x1C00F97E8
 * Callers:
 *     BmlCompareSourceModes @ 0x1C00D4E3C (BmlCompareSourceModes.c)
 * Callees:
 *     BmlCompareModeRegions @ 0x1C00D4A7C (BmlCompareModeRegions.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00D53A0 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     ?BmlCompareModeResolution@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00F9888 (-BmlCompareModeResolution@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlCompareSourceModesWithContentRes(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r11
  __int64 v8; // rdx
  unsigned int *v9; // r11
  __int64 v10; // rdx

  v7 = a1;
  if ( (*(_DWORD *)(a1 + 8) & 3) == 0
    && (unsigned int)BmlCompareModeExtents((int *)(104LL * a2 + a1 + 108), (_DWORD *)(104LL * a2 + a1 + 52)) != 1 )
  {
    return 0LL;
  }
  if ( (unsigned int)BmlCompareModeResolution(a4 + 76, 104LL * a2 + v7 + 108) != -1
    && (unsigned int)BmlCompareModeResolution(a3 + 76, v8) != -1 )
  {
    return BmlCompareModeRegions(v9, (unsigned int *)(a3 + 76));
  }
  if ( (unsigned int)BmlCompareModeResolution(v9, v8) != -1 )
    return 0xFFFFFFFFLL;
  return (unsigned int)BmlCompareModeResolution(a3 + 76, v10) != -1;
}
