/*
 * XREFs of ??$DIFF@H@@YAHHH@Z @ 0x1C000340C
 * Callers:
 *     BmlCompareRegionsWithPivot @ 0x1C00F300C (BmlCompareRegionsWithPivot.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C00F4F08 (BmlCompareSourceModesWithMonitors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DIFF<int>(int a1, int a2)
{
  if ( a1 > a2 )
    return (unsigned int)(a1 - a2);
  else
    return (unsigned int)(a2 - a1);
}
