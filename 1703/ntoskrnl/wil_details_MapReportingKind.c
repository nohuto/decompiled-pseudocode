/*
 * XREFs of wil_details_MapReportingKind @ 0x140234A28
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1402348EC (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_MapReportingKind(int a1, int a2)
{
  int v2; // eax

  switch ( a1 )
  {
    case 0:
      return 255LL;
    case 1:
      return a2 == 0 ? 4 : 0;
    case 2:
      return a2 != 0 ? 1 : 5;
    case 3:
      return a2 != 0 ? 2 : 6;
    case 4:
      return a2 != 0 ? 3 : 7;
    case 5:
      return a2 != 0 ? 8 : 10;
    case 6:
      return a2 != 0 ? 9 : 11;
  }
  if ( (unsigned __int8)(a1 - 100) > 0x31u )
    return 255LL;
  v2 = (unsigned __int8)(a1 - 100);
  if ( a2 )
    return (unsigned int)(v2 + 100);
  else
    return (unsigned int)(v2 + 150);
}
