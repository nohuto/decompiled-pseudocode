/*
 * XREFs of BmlCompareRegionsWithPivot @ 0x1C00F300C
 * Callers:
 *     BmlCompareTargetModesWithConstraint @ 0x1C00F313C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareTargetModes @ 0x1C00F406C (BmlCompareTargetModes.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C00F4D98 (BmlCompareSourceModesWithConstraint.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01DF248 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x1C000340C (--$DIFF@H@@YAHHH@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C00A6498 (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00F2C70 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 */

__int64 __fastcall BmlCompareRegionsWithPivot(
        struct _D3DKMDT_2DREGION *a1,
        struct _D3DKMDT_2DREGION *a2,
        struct _D3DKMDT_2DREGION *a3)
{
  __int64 cx; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // r8
  __int128 v9; // rax
  int ScaledAspectRatio; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // eax

  cx = a1->cx;
  v7 = a3->cx * (unsigned __int64)a3->cy;
  v8 = abs64(cx * a1->cy - v7);
  v9 = (__int64)(a2->cx * (unsigned __int64)a2->cy - v7);
  *(_QWORD *)&v9 = (*((_QWORD *)&v9 + 1) ^ v9) - *((_QWORD *)&v9 + 1);
  if ( (_QWORD)v9 == v8 )
  {
    ScaledAspectRatio = BmlGetScaledAspectRatio(a3, *((__int64 *)&v9 + 1), v8, cx);
    v15 = BmlGetScaledAspectRatio(a1, v12, v13, v14);
    v16 = DIFF<int>(v15, ScaledAspectRatio);
    v20 = BmlGetScaledAspectRatio(a2, v17, v18, v19);
    v21 = DIFF<int>(v20, ScaledAspectRatio);
    return BmlCompareValues<int>(v21, v16);
  }
  else if ( (__int64)v9 <= v8 )
  {
    return (unsigned int)((__int64)v9 >= v8) - 1;
  }
  else
  {
    return 1LL;
  }
}
