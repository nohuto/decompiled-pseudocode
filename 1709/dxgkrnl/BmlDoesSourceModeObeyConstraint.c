/*
 * XREFs of BmlDoesSourceModeObeyConstraint @ 0x1C00D5078
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C00D4AB4 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C00D4FC8 (BmlCompareSourceModesWithConstraint.c)
 *     _BmlGetPathModeListForPath @ 0x1C01F8CEC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00D53A0 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

char __fastcall BmlDoesSourceModeObeyConstraint(__int64 a1, unsigned __int16 a2, unsigned int *a3)
{
  __int64 v3; // r14
  __int64 *v6; // rdi
  char v7; // si
  unsigned int v8; // ecx
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r10
  int v14; // ecx
  __int64 v15; // rax

  v3 = 104LL * a2;
  v6 = *(__int64 **)(v3 + a1 + 16);
  if ( (*v6 & 0x100) == 0 && (*(_DWORD *)(a1 + 4) & 0x40000) == 0 )
  {
    v7 = 1;
LABEL_4:
    v8 = (*(_DWORD *)(a1 + 4) & 0x40000 | 0x20000u) >> 17;
    goto LABEL_5;
  }
  v7 = 0;
  if ( (*v6 & 0x100) == 0 )
    goto LABEL_4;
  v8 = (*((_BYTE *)v6 + 128) != 0) + 1;
LABEL_5:
  if ( a3 )
  {
    if ( v8 == 2 )
    {
      v10 = a3[18];
      if ( (unsigned int)(v10 - 3) > 1 )
        return 0;
    }
    else
    {
      v9 = v8 == 1;
      v10 = a3[18];
      if ( v9 )
      {
        if ( (_DWORD)v10 != 1 )
          return 0;
      }
      else if ( (((_DWORD)v10 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v10 == 2 )
      {
        return 0;
      }
    }
    if ( (((_DWORD)v10 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v10 == 2 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v15);
    }
    if ( !v7 || (v11 = a3[24], v11 >= 20) && (v11 <= 23 || v11 == 32 || v11 == 41) )
    {
      v12 = *v6;
      if ( (*v6 & 0x4000000000LL) == 0 || !(unsigned int)BmlCompareModeExtents(v3 + a1 + 52, a3 + 19) )
      {
        if ( (v12 & 0x100) == 0 )
          return 1;
        v14 = *((_DWORD *)v6 + 29);
        if ( (!v14 || a3[24] == v14)
          && ((v6[1] & 0x100) == 0 || a3[19] == *((_DWORD *)v6 + 24) && a3[20] == *((_DWORD *)v6 + 25) && a3[24] == v14) )
        {
          return 1;
        }
      }
    }
  }
  return 0;
}
