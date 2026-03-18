/*
 * XREFs of BmlCompareSourceModesWithMonitors @ 0x1C00D51AC
 * Callers:
 *     BmlCompareSourceModes @ 0x1C00D4E3C (BmlCompareSourceModes.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x1C000EAA4 (--$DIFF@H@@YAHHH@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00D2A38 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1C00D5348 (BmlGetModeCategoryForRegion.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00D53D4 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C00F5BA8 (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 */

__int64 __fastcall BmlCompareSourceModesWithMonitors(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbx
  bool v7; // r15
  __int64 v8; // rdx
  char v9; // r14
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rsi
  unsigned int ModeCategoryForRegion; // eax
  __int64 v16; // r8
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // eax
  __int64 v24; // r8
  unsigned int v25; // ebx
  unsigned int v26; // eax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  int v29; // edi
  int ScaledAspectRatio; // eax
  unsigned int v31; // ebx
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // [rsp+60h] [rbp+8h]
  __int64 v35; // [rsp+70h] [rbp+18h]

  v6 = a2;
  v7 = 0;
  v8 = 104LL * a2;
  v9 = 0;
  v35 = v6;
  v34 = v8;
  v11 = v8 + a1;
  v12 = *(unsigned int *)(v8 + a1 + 52);
  if ( (_DWORD)v12 )
  {
    v13 = *(_DWORD *)(v11 + 56);
    if ( v13 )
    {
      v9 = 1;
      v7 = *(_DWORD *)(a4 + 76) == (_DWORD)v12 && *(_DWORD *)(a4 + 80) == v13;
      if ( *(_DWORD *)(a5 + 76) != (_DWORD)v12 || *(_DWORD *)(a5 + 80) != v13 )
        v9 = 0;
    }
  }
  v14 = v8 + a1;
  if ( *(_DWORD *)(v8 + a1 + 36) && *(_DWORD *)(v14 + 40) )
  {
    LOBYTE(a3) = v9;
    ModeCategoryForRegion = BmlGetModeCategoryForRegion(a5 + 76, v14 + 36, a3);
    LOBYTE(v16) = v7;
    v17 = ModeCategoryForRegion;
    v18 = BmlGetModeCategoryForRegion(a4 + 76, v14 + 36, v16);
    result = BmlCompareValues<unsigned int>(v18, v17);
    if ( (_DWORD)result )
      return result;
    v6 = v35;
  }
  else
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v8, a3);
    v27[3] = a1;
    v27[4] = v6;
    v27[5] = *(unsigned int *)(v14 + 36);
    v27[6] = *(unsigned int *)(v14 + 40);
    WdLogEvent5_WdWarning(v27);
  }
  if ( !*(_DWORD *)(v11 + 52) || !*(_DWORD *)(v11 + 56) )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v28[3] = a1;
    v28[4] = v6;
    v28[5] = *(unsigned int *)(v11 + 52);
    v28[6] = *(unsigned int *)(v11 + 56);
    WdLogEvent5_WdWarning(v28);
    return 0LL;
  }
  LOBYTE(v22) = v7;
  v23 = BmlGetModeCategoryForRegion(a4 + 76, v11 + 52, v22);
  LOBYTE(v24) = v9;
  v25 = v23;
  v26 = BmlGetModeCategoryForRegion(a5 + 76, v11 + 52, v24);
  result = BmlCompareValues<unsigned int>(v25, v26);
  if ( !(_DWORD)result )
  {
    if ( v25 == 3 )
    {
      v29 = *(_DWORD *)(v34 + a1 + 60);
      ScaledAspectRatio = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a4 + 76));
      v31 = DIFF<int>(ScaledAspectRatio, v29);
      v32 = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a5 + 76));
      v33 = DIFF<int>(v32, v29);
      return BmlCompareValues<int>(v33, v31);
    }
    return 0LL;
  }
  return result;
}
