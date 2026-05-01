/*
 * XREFs of ?OnViewPropertiesChanging@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180068670
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006ADAC (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::OnViewPropertiesChanging(
        TwinUI::Cortana::ShellExperienceView *this,
        struct CSingleViewShellExperience *a2)
{
  return TwinUI::Cortana::ShellExperienceView::_FireViewChanged((char *)this - 40, 8LL);
}
