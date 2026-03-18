/*
 * XREFs of ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C00C5084
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C00C1158 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00C29C8 (BmlCompareRegionsWithPivot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareValues<int>(int a1, int a2)
{
  if ( a1 > a2 )
    return 1LL;
  else
    return (unsigned int)(a1 >= a2) - 1;
}
