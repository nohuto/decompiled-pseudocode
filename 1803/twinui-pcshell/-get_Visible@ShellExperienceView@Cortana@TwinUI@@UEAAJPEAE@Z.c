/*
 * XREFs of ?get_Visible@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAE@Z @ 0x180068130
 * Callers:
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x180061B68 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?_IsViewVisible@CortanaSharedExperienceManager@@AEAA_NXZ @ 0x1800673F0 (-_IsViewVisible@CortanaSharedExperienceManager@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_Visible(
        TwinUI::Cortana::ShellExperienceView *this,
        bool *a2)
{
  *a2 = *((_DWORD *)this + 22) == 2;
  return 0LL;
}
