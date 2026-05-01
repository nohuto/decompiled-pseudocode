/*
 * XREFs of ?get_ViewState@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x180068120
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180067BE0 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_ViewState(
        TwinUI::Cortana::ShellExperienceView *this,
        enum CSingleViewShellExperience::ExperienceViewState *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 18);
  return 0LL;
}
