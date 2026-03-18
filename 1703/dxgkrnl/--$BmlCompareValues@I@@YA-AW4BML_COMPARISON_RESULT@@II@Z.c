/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00F512C
 * Callers:
 *     BmlCompareTargetModesWithConstraint @ 0x1C00F313C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareModeRegions @ 0x1C00F4894 (BmlCompareModeRegions.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C00F4F08 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareMonitorRegions @ 0x1C01DEFD8 (BmlCompareMonitorRegions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareValues<unsigned int>(unsigned int a1, unsigned int a2)
{
  if ( a1 > a2 )
    return 1LL;
  else
    return (unsigned int)-(a1 < a2);
}
