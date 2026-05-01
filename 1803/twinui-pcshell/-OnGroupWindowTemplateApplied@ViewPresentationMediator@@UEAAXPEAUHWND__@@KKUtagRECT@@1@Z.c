/*
 * XREFs of ?OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1@Z @ 0x1801F6520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewPresentationMediator::OnGroupWindowTemplateApplied(ViewPresentationMediator *this, HWND a2)
{
  wil::Feature<__WilFeatureTraits_Feature_TabShellWindowGrouping>::ReportUsageToService(this, a2);
}
