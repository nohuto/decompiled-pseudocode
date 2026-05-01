/*
 * XREFs of ?InputHostHiding@CortanaDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180185DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x180061B68 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::InputHostHiding(__int64 a1)
{
  CortanaDesktopExperienceView *v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (CortanaDesktopExperienceView *)(a1 - 56);
  if ( !CortanaDesktopExperienceView::IsViewVisible((CortanaDesktopExperienceView *)(a1 - 56)) )
    return 0LL;
  v2 = CortanaDesktopExperienceView::PositionCortanaWindow(v1, 1, 0);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34D,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
