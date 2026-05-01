/*
 * XREFs of ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800D6FFC
 * Callers:
 *     ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1800D4340 (-ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 *     ?ShellModeChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1800D5B90 (-ShellModeChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?ShellReadyChanged@CortanaDesktopExperienceView@@EEAAJXZ @ 0x1800D5BB0 (-ShellReadyChanged@CortanaDesktopExperienceView@@EEAAJXZ.c)
 *     ?LockScreenActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1800D5BD0 (-LockScreenActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?AboveLockAppActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1800D5BF0 (-AboveLockAppActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?WindowsHelloActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1800D5C10 (-WindowsHelloActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D6500 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D69C8 (-OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1801DBD20 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::PostTargetedMessage(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(
         *(ExperienceManagerUtils **)(a1 + 112),
         (struct IUnknown *)a1,
         (void *)0x401,
         a2 | (a3 << 16),
         v6);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x574,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
