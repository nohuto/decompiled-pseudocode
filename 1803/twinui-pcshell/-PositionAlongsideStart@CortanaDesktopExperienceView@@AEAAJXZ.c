/*
 * XREFs of ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800636B0
 * Callers:
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180065F90 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 *     ?OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180186D50 (-OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x180063774 (-GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800642A0 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::PositionAlongsideStart(CortanaDesktopExperienceView *this)
{
  int ImmersiveLauncherMonitor; // ebx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HMONITOR v7; // [rsp+38h] [rbp+10h] BYREF

  ImmersiveLauncherMonitor = CortanaDesktopExperienceView::GetImmersiveLauncherMonitor(this, &v7);
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v4 = 1854LL;
  }
  else
  {
    ImmersiveLauncherMonitor = CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(this, v7);
    if ( ImmersiveLauncherMonitor >= 0 )
      return 0LL;
    v4 = 1855LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)ImmersiveLauncherMonitor,
    v5);
  return (unsigned int)ImmersiveLauncherMonitor;
}
