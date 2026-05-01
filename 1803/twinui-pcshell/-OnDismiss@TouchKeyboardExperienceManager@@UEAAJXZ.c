/*
 * XREFs of ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18023F710
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ClipboardHistoryBuffer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802412EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ClipboardHistoryBuffer@@@wil@@CAX_NW.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnDismiss(TouchKeyboardExperienceManager *this)
{
  wil::Feature<__WilFeatureTraits_Feature_ClipboardHistoryBuffer>::ReportUsageToService(this);
  return 0LL;
}
