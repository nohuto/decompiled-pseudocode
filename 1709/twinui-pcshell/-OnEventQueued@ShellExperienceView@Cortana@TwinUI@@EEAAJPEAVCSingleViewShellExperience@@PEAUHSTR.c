/*
 * XREFs of ?OnEventQueued@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800CF3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall TwinUI::Cortana::ShellExperienceView::OnEventQueued(
        TwinUI::Cortana::ShellExperienceView *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  return TwinUI::Cortana::ShellExperienceView::_FireViewEvent(
           (TwinUI::Cortana::ShellExperienceView *)((char *)this - 40),
           a3,
           a4);
}
