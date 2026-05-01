/*
 * XREFs of ?v_IsTabEligible@CWinRTApplicationView@@EEAAJPEA_N@Z @ 0x1801423F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 */

__int64 __fastcall CWinRTApplicationView::v_IsTabEligible(CWinRTApplicationView *this, bool *a2, __int64 a3)
{
  __int64 result; // rax

  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)this, 3u, a3);
  result = 0LL;
  *a2 = 0;
  return result;
}
