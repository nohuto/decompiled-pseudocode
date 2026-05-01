/*
 * XREFs of ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800C5DA4
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800C5F30 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C64C0 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1800C2D10 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1800C6DB8 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18018C37C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(
        CortanaDesktopExperienceView *this,
        HMONITOR a2)
{
  int v2; // edi
  int MonitorInformation; // ebx
  HMONITOR v5; // r8
  __int64 v6; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  float v10; // xmm6_4
  LANGID ThreadUILanguage; // ax
  float right; // xmm0_4
  struct tagRECT v13; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v14; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v15; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  int LCData; // [rsp+B0h] [rbp+30h] BYREF
  int v18; // [rsp+B8h] [rbp+38h] BYREF

  v2 = (int)a2;
  MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                         this,
                         a2,
                         &v13,
                         &v15,
                         &v14,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v18,
                         (bool *)&LCData);
  if ( MonitorInformation < 0 )
  {
    v6 = 1528LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return (unsigned int)MonitorInformation;
  }
  v8 = 344LL;
  v9 = v13.right - v13.left;
  if ( v13.right - v13.left < 1196 )
    v8 = 320LL;
  v10 = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v8, v2, v5);
  if ( v18 == 2
    || (ThreadUILanguage = GetThreadUILanguage(), GetLocaleInfoW(ThreadUILanguage, 0x20000070u, (LPWSTR)&LCData, 2) > 0)
    && LCData == 1
    && v18 )
  {
    right = (float)v14.left - v10;
  }
  else
  {
    right = (float)v14.right;
  }
  *(float *)&v15.left = right;
  *(float *)&v15.top = (float)v14.top;
  *(float *)&v14.left = (float)v13.left;
  *(float *)&v15.right = v10;
  *(float *)&v15.bottom = (float)(v14.bottom - v14.top);
  *(float *)&v14.top = (float)v13.top;
  *(float *)&v14.right = (float)v9;
  *(float *)&v14.bottom = (float)(v13.bottom - v13.top);
  MonitorInformation = CortanaDesktopExperienceView::OnTraySearchItemChanged(
                         (__int64)this + 16,
                         (__int64)&v14,
                         (__int64)&v15);
  if ( MonitorInformation < 0 )
  {
    v6 = 1551LL;
    goto LABEL_3;
  }
  return 0LL;
}
