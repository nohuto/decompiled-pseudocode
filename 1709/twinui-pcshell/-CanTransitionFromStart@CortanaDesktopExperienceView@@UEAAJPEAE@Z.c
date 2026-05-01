/*
 * XREFs of ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x1800D47F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1800D7280 (-GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x1800D843C (-GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1800D8FB0 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1801DB760 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::CanTransitionFromStart(
        CortanaDesktopExperienceView *this,
        unsigned __int8 *a2)
{
  CortanaDesktopExperienceView *v2; // r14
  int ImmersiveLauncherMonitor; // eax
  int StartSize; // ebx
  __int64 v6; // rdx
  HMONITOR v7; // r8
  __int64 v8; // rdx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // edi
  HMONITOR v13; // r8
  int v14; // eax
  struct tagRECT v15; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v16; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v17; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  bool v19; // [rsp+A0h] [rbp+30h] BYREF
  char v20; // [rsp+A8h] [rbp+38h] BYREF
  HMONITOR v21; // [rsp+B0h] [rbp+40h] BYREF
  float v22; // [rsp+B8h] [rbp+48h] BYREF
  float v23; // [rsp+BCh] [rbp+4Ch]

  v2 = (CortanaDesktopExperienceView *)((char *)this - 16);
  *a2 = 1;
  ImmersiveLauncherMonitor = CortanaDesktopExperienceView::GetImmersiveLauncherMonitor(
                               (CortanaDesktopExperienceView *)((char *)this - 16),
                               &v21);
  StartSize = ImmersiveLauncherMonitor;
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v6 = 1742LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ImmersiveLauncherMonitor);
    goto LABEL_7;
  }
  ImmersiveLauncherMonitor = CortanaDesktopExperienceView::GetMonitorInformation(
                               v2,
                               v21,
                               &v15,
                               &v17,
                               &v16,
                               (enum EDGEUI_TRAYSTUCKPLACE *)&v20,
                               &v19);
  StartSize = ImmersiveLauncherMonitor;
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v6 = 1745LL;
    goto LABEL_3;
  }
  StartSize = 0;
LABEL_7:
  if ( StartSize < 0 )
  {
    v8 = 494LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)StartSize);
    return (unsigned int)StartSize;
  }
  v10 = 344LL;
  if ( v15.right - v15.left < 1196 )
    v10 = 320LL;
  v11 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v10, (int)v21, v7);
  v12 = v11 + v16.right - v16.left;
  StartSize = CortanaDesktopExperienceView::GetStartSize(v2, (struct Windows::Foundation::Size *)&v22);
  if ( StartSize < 0 )
  {
    v8 = 498LL;
    goto LABEL_9;
  }
  v14 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x1E0, (int)v21, v13);
  if ( (float)v14 > v23 || (float)v12 > v22 )
    *a2 = 0;
  return 0LL;
}
