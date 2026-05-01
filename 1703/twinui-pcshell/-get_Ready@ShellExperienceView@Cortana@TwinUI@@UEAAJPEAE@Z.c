/*
 * XREFs of ?get_Ready@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAE@Z @ 0x1800C1130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_Ready(
        TwinUI::Cortana::ShellExperienceView *this,
        bool *a2)
{
  *a2 = *((_DWORD *)this + 22) != 0;
  return 0LL;
}
