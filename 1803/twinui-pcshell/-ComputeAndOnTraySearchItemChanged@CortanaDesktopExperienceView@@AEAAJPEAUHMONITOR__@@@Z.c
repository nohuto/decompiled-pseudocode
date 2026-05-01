/*
 * XREFs of ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800642A0
 * Callers:
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800636B0 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180187450 (-SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180063038 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1800663F0 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18007DE0C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18007DE3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(
        CortanaDesktopExperienceView *this,
        HMONITOR a2)
{
  int v2; // edi
  int MonitorInformation; // ebx
  HMONITOR v5; // r8
  __int64 v6; // rcx
  int v7; // ebx
  float v8; // xmm6_4
  LANGID ThreadUILanguage; // ax
  float right; // xmm0_4
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-60h]
  struct tagRECT v14; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v15; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v16; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  bool v18; // [rsp+B0h] [rbp+30h] BYREF
  int v19; // [rsp+B8h] [rbp+38h] BYREF

  v2 = (int)a2;
  MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                         this,
                         a2,
                         &v14,
                         &v16,
                         &v15,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v19,
                         &v18);
  if ( MonitorInformation < 0 )
  {
    v12 = 1610LL;
  }
  else
  {
    v6 = 344LL;
    v7 = v14.right - v14.left;
    if ( v14.right - v14.left < 1196 )
      v6 = 320LL;
    v8 = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v6, v2, v5);
    if ( v19 == 2 || (ThreadUILanguage = GetThreadUILanguage(), (unsigned int)IsBiDiLocale(ThreadUILanguage)) && v19 )
      right = (float)v15.left - v8;
    else
      right = (float)v15.right;
    *(float *)&v16.left = right;
    *(float *)&v16.top = (float)v15.top;
    *(float *)&v15.left = (float)v14.left;
    *(float *)&v16.right = v8;
    *(float *)&v16.bottom = (float)(v15.bottom - v15.top);
    *(float *)&v15.top = (float)v14.top;
    *(float *)&v15.right = (float)v7;
    *(float *)&v15.bottom = (float)(v14.bottom - v14.top);
    MonitorInformation = CortanaDesktopExperienceView::OnTraySearchItemChanged((char *)this + 16, &v15, &v16);
    if ( MonitorInformation >= 0 )
      return 0LL;
    v12 = 1633LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)MonitorInformation,
    v13);
  return (unsigned int)MonitorInformation;
}
