/*
 * XREFs of ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800D7E58
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800D8054 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D8620 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1800D4910 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1800D8FB0 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800DB320 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CA-AW4wil_.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1801DB760 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
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
  WCHAR LCData[2]; // [rsp+48h] [rbp-29h] BYREF
  __int16 v14; // [rsp+4Ch] [rbp-25h]
  bool v15; // [rsp+50h] [rbp-21h] BYREF
  struct tagRECT v16; // [rsp+58h] [rbp-19h] BYREF
  int v17; // [rsp+68h] [rbp-9h] BYREF
  int v18; // [rsp+6Ch] [rbp-5h] BYREF
  __int16 v19; // [rsp+70h] [rbp-1h]
  struct tagRECT v20; // [rsp+78h] [rbp+7h] BYREF
  struct tagRECT v21; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = (int)a2;
  MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                         this,
                         a2,
                         &v21,
                         &v20,
                         &v16,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v17,
                         &v15);
  if ( MonitorInformation < 0 )
  {
    v6 = 1558LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return (unsigned int)MonitorInformation;
  }
  v8 = 344LL;
  v9 = v21.right - v21.left;
  if ( v21.right - v21.left < 1196 )
    v8 = 320LL;
  v10 = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v8, v2, v5);
  if ( *((_BYTE *)this + 204) )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetCachedFeatureEnabledState();
    LOBYTE(v14) = 0;
    v18 = 0;
    v19 = v14;
    *(_DWORD *)LCData = 0;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data,
      0xB188BCu,
      (const struct FEATURE_LOGGED_TRAITS *)&v18,
      0,
      3);
  }
  if ( v17 == 2
    || (ThreadUILanguage = GetThreadUILanguage(), GetLocaleInfoW(ThreadUILanguage, 0x20000070u, LCData, 2) > 0)
    && *(_DWORD *)LCData == 1
    && v17 )
  {
    right = (float)v16.left - v10;
  }
  else
  {
    right = (float)v16.right;
  }
  *(float *)&v20.left = right;
  *(float *)&v20.top = (float)v16.top;
  *(float *)&v16.left = (float)v21.left;
  *(float *)&v20.right = v10;
  *(float *)&v20.bottom = (float)(v16.bottom - v16.top);
  *(float *)&v16.top = (float)v21.top;
  *(float *)&v16.right = (float)v9;
  *(float *)&v16.bottom = (float)(v21.bottom - v21.top);
  MonitorInformation = CortanaDesktopExperienceView::OnTraySearchItemChanged(
                         (__int64)this + 16,
                         (__int64)&v16,
                         (__int64)&v20);
  if ( MonitorInformation < 0 )
  {
    v6 = 1590LL;
    goto LABEL_3;
  }
  return 0LL;
}
