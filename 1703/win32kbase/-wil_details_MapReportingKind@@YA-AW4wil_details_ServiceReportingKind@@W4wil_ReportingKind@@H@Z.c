/*
 * XREFs of ?wil_details_MapReportingKind@@YA?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0x1C00D5C5C
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00D5B24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_MapReportingKind(int a1)
{
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        return 4LL;
      case 2:
        return 5LL;
      case 3:
        return 6LL;
      case 4:
        return 7LL;
      case 5:
        return 10LL;
      case 6:
        return 11LL;
    }
    if ( (unsigned __int8)(a1 - 100) <= 0x31u )
      return (unsigned int)(unsigned __int8)(a1 - 100) + 150;
  }
  return 255LL;
}
