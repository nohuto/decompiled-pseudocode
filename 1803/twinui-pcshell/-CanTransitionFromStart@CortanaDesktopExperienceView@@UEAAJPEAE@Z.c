/*
 * XREFs of ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x180066260
 * Callers:
 *     ?CanTransitionFromStart@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x180067FB0 (-CanTransitionFromStart@CortanaSharedExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180062EB8 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180063874 (-GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PE.c)
 *     ?GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1800644CC (-GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18007DE3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180085E80 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::CanTransitionFromStart(
        CortanaDesktopExperienceView *this,
        unsigned __int8 *a2)
{
  float v3; // xmm0_4
  float v5; // xmm1_4
  LONG v6; // eax
  float v7; // xmm0_4
  LONG v8; // eax
  float v9; // xmm1_4
  HMONITOR v10; // rax
  CortanaDesktopExperienceView *v11; // rdi
  CortanaFlightingHelpers *v12; // rcx
  int IsTraySearchBoxVisible; // ebx
  HMONITOR v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  int v17; // r14d
  HMONITOR v18; // r8
  int v19; // eax
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-49h]
  bool v23; // [rsp+40h] [rbp-29h] BYREF
  HMONITOR v24; // [rsp+48h] [rbp-21h] BYREF
  float v25[2]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v26[8]; // [rsp+58h] [rbp-11h] BYREF
  struct tagRECT v27; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v28; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v29; // [rsp+80h] [rbp+17h] BYREF
  RECT rc; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *a2 = 1;
  v3 = *((float *)this + 39);
  v5 = *((float *)this + 40);
  v6 = (int)v3;
  v7 = v3 + *((float *)this + 41);
  rc.left = v6;
  v8 = (int)v5;
  v9 = v5 + *((float *)this + 42);
  rc.top = v8;
  rc.right = (int)v7;
  rc.bottom = (int)v9;
  v10 = MonitorFromRect(&rc, 0);
  if ( v10 )
  {
    v11 = (CortanaDesktopExperienceView *)((char *)this - 16);
    v23 = 0;
    IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(v11, v10, &v23);
    if ( IsTraySearchBoxVisible < 0 )
    {
      v21 = 493LL;
    }
    else
    {
      if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v12) && !v23 )
      {
LABEL_11:
        *a2 = 0;
        return 0LL;
      }
      IsTraySearchBoxVisible = CortanaDesktopExperienceView::GetImmersiveLauncherMonitorInformation(
                                 v11,
                                 &v24,
                                 &v27,
                                 &v29,
                                 &v28,
                                 (enum EDGEUI_TRAYSTUCKPLACE *)v26,
                                 &v23);
      if ( IsTraySearchBoxVisible < 0 )
      {
        v21 = 518LL;
      }
      else
      {
        v15 = 344LL;
        if ( v27.right - v27.left < 1196 )
          v15 = 320LL;
        v16 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v15, (int)v24, v14);
        v17 = v16 + v28.right - v28.left;
        IsTraySearchBoxVisible = CortanaDesktopExperienceView::GetStartSize(
                                   v11,
                                   (struct Windows::Foundation::Size *)v25);
        if ( IsTraySearchBoxVisible >= 0 )
        {
          v19 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x1E0, (int)v24, v18);
          if ( (float)v19 <= v25[1] && (float)v17 <= v25[0] )
            return 0LL;
          goto LABEL_11;
        }
        v21 = 522LL;
      }
    }
  }
  else
  {
    IsTraySearchBoxVisible = -2147418113;
    v21 = 491LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)IsTraySearchBoxVisible,
    v22);
  return (unsigned int)IsTraySearchBoxVisible;
}
