/*
 * XREFs of BmlCompareSourceModesWithContentRes @ 0x1C0225DA8
 * Callers:
 *     BmlCompareSourceModes @ 0x1C00C16D8 (BmlCompareSourceModes.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00C16A4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlCompareModeRegions @ 0x1C00C1A60 (BmlCompareModeRegions.c)
 *     ?BmlCompareModeResolution@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C0225CD4 (-BmlCompareModeResolution@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlCompareSourceModesWithContentRes(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r11
  __int64 v6; // r10
  _DWORD *v7; // rdx
  int *v8; // r10
  unsigned int *v9; // r11
  unsigned int *v10; // r10
  _DWORD *v12; // rdx
  int *v13; // r10

  v5 = a2;
  v6 = a1;
  if ( (*(_DWORD *)(a1 + 8) & 3) == 0
    && (unsigned int)BmlCompareModeExtents((int *)(104LL * a2 + a1 + 108), (_DWORD *)(104LL * a2 + a1 + 52)) != 1 )
  {
    return 0LL;
  }
  if ( (unsigned int)BmlCompareModeResolution((int *)(a4 + 76), (_DWORD *)(104 * v5 + v6 + 108)) != -1
    && (unsigned int)BmlCompareModeResolution(v8, v7) != -1 )
  {
    return BmlCompareModeRegions(v9, v10);
  }
  if ( (unsigned int)BmlCompareModeResolution((int *)v9, v7) != -1 )
    return 0xFFFFFFFFLL;
  return (unsigned int)BmlCompareModeResolution(v13, v12) != -1;
}
