/*
 * XREFs of ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C00A6498
 * Callers:
 *     BmlCompareRegionsWithPivot @ 0x1C00F300C (BmlCompareRegionsWithPivot.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C00F4F08 (BmlCompareSourceModesWithMonitors.c)
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
