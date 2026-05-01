/*
 * XREFs of ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C64C0
 * Callers:
 *     ?OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1800C2E30 (-OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x1800C3650 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800C5DA4 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x1800C62DC (-GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::PositionAlongsideStart(__int64 **this)
{
  int ImmersiveLauncherMonitor; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HMONITOR v6; // [rsp+38h] [rbp+10h] BYREF

  ImmersiveLauncherMonitor = CortanaDesktopExperienceView::GetImmersiveLauncherMonitor(this, &v6);
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v3 = 1739LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ImmersiveLauncherMonitor);
    return (unsigned int)ImmersiveLauncherMonitor;
  }
  ImmersiveLauncherMonitor = CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(
                               (CortanaDesktopExperienceView *)this,
                               v6);
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v3 = 1740LL;
    goto LABEL_3;
  }
  return 0LL;
}
