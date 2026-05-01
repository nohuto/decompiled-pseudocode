/*
 * XREFs of ?get_DesiredSize@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x180068220
 * Callers:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064B10 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_DesiredSize(
        TwinUI::Cortana::ShellExperienceView *this,
        struct Windows::Foundation::Size *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a2 = *(_QWORD *)((char *)this + 92);
  return result;
}
