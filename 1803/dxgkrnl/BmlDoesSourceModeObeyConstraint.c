/*
 * XREFs of BmlDoesSourceModeObeyConstraint @ 0x1C00C18F8
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C00C1358 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C00C1848 (BmlCompareSourceModesWithConstraint.c)
 *     _BmlGetPathModeListForPath @ 0x1C0226A4C (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00C16A4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlIsSupportedSourceMode @ 0x1C00C19D0 (BmlIsSupportedSourceMode.c)
 */

bool __fastcall BmlDoesSourceModeObeyConstraint(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rbp
  __int64 *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r10
  bool result; // al
  int v10; // ecx

  v4 = 104LL * (unsigned __int16)a2;
  v6 = *(__int64 **)(a1 + v4 + 16);
  if ( (*v6 & 0x100) == 0 && (*(_DWORD *)(a1 + 4) & 0x40000) == 0 )
  {
    LOBYTE(a2) = 1;
LABEL_4:
    v7 = (*(_DWORD *)(a1 + 4) & 0x40000 | 0x20000u) >> 17;
    goto LABEL_5;
  }
  LOBYTE(a2) = 0;
  if ( (*v6 & 0x100) == 0 )
    goto LABEL_4;
  v7 = (unsigned int)(*((_BYTE *)v6 + 128) != 0) + 1;
LABEL_5:
  result = 0;
  if ( (unsigned __int8)BmlIsSupportedSourceMode(a3, a2, v7, 0x40000LL) )
  {
    v8 = *v6;
    if ( (*v6 & 0x4000000000LL) == 0 || !(unsigned int)BmlCompareModeExtents((int *)(v4 + a1 + 52), a3 + 19) )
    {
      if ( (v8 & 0x100) == 0 )
        return 1;
      v10 = *((_DWORD *)v6 + 29);
      if ( (!v10 || a3[24] == v10)
        && ((v6[1] & 0x100) == 0 || a3[19] == *((_DWORD *)v6 + 24) && a3[20] == *((_DWORD *)v6 + 25) && a3[24] == v10) )
      {
        return 1;
      }
    }
  }
  return result;
}
