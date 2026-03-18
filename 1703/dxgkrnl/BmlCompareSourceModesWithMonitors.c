/*
 * XREFs of BmlCompareSourceModesWithMonitors @ 0x1C00F4F08
 * Callers:
 *     BmlCompareSourceModes @ 0x1C00F4C20 (BmlCompareSourceModes.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x1C000340C (--$DIFF@H@@YAHHH@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C00A6498 (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00F2C70 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1C00F50A4 (BmlGetModeCategoryForRegion.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00F512C (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
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
  __int64 v23; // r9
  unsigned int v24; // eax
  __int64 v25; // r8
  unsigned int v26; // ebx
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  int v33; // edi
  int ScaledAspectRatio; // eax
  int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // eax
  int v40; // eax
  __int64 v41; // [rsp+60h] [rbp+8h]
  __int64 v42; // [rsp+70h] [rbp+18h]

  v6 = a2;
  v7 = 0;
  v8 = 104LL * a2;
  v9 = 0;
  v42 = v6;
  v41 = v8;
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
    v6 = v42;
  }
  else
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v8, a3, a4);
    v31[3] = a1;
    v31[4] = v6;
    v31[5] = *(unsigned int *)(v14 + 36);
    v31[6] = *(unsigned int *)(v14 + 40);
    WdLogEvent5_WdWarning(v31);
  }
  if ( !*(_DWORD *)(v11 + 52) || !*(_DWORD *)(v11 + 56) )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    v32[3] = a1;
    v32[4] = v6;
    v32[5] = *(unsigned int *)(v11 + 52);
    v32[6] = *(unsigned int *)(v11 + 56);
    WdLogEvent5_WdWarning(v32);
    return 0LL;
  }
  LOBYTE(v22) = v7;
  v24 = BmlGetModeCategoryForRegion(a4 + 76, v11 + 52, v22);
  LOBYTE(v25) = v9;
  v26 = v24;
  v27 = BmlGetModeCategoryForRegion(a5 + 76, v11 + 52, v25);
  result = BmlCompareValues<unsigned int>(v26, v27);
  if ( !(_DWORD)result )
  {
    if ( v26 == 3 )
    {
      v33 = *(_DWORD *)(v41 + a1 + 60);
      ScaledAspectRatio = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a4 + 76), v28, v29, v30);
      v35 = DIFF<int>(ScaledAspectRatio, v33);
      v39 = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)(a5 + 76), v36, v37, v38);
      v40 = DIFF<int>(v39, v33);
      return BmlCompareValues<int>(v40, v35);
    }
    return 0LL;
  }
  return result;
}
