/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00C1A4C
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C00C1158 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareModeRegions @ 0x1C00C1A60 (BmlCompareModeRegions.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C00C1F34 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareMonitorRegions @ 0x1C0225D08 (BmlCompareMonitorRegions.c)
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
