/*
 * XREFs of ??$DIFF@H@@YAHHH@Z @ 0x1C0007EBC
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C00C1158 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00C29C8 (BmlCompareRegionsWithPivot.c)
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
