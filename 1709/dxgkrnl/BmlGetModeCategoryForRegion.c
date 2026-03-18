/*
 * XREFs of BmlGetModeCategoryForRegion @ 0x1C00D5348
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C00D51AC (BmlCompareSourceModesWithMonitors.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01F8330 (BmlGetRecommendedContentSizeForPath.c)
 *     _BmlGetPathModeListForPath @ 0x1C01F8CEC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00D53A0 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlGetModeCategoryForRegion(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r10
  char v3; // r11
  bool v5; // cf

  if ( (unsigned int)BmlCompareModeExtents(a1, a2) != 1 )
  {
    if ( !v3 )
    {
      if ( *v2 != 1024 )
      {
        if ( *v2 < 0x400u )
          return 2LL;
        v5 = v2[1] < 0x300u;
        goto LABEL_7;
      }
      v5 = v2[1] < 0x300u;
      if ( v2[1] != 768 )
      {
LABEL_7:
        if ( v5 )
          return 2LL;
      }
    }
    return 3LL;
  }
  return 1LL;
}
