/*
 * XREFs of ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180061DB4
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180065100 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?GetOverrideValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x18006163C (-GetOverrideValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x180061810 (-GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x180061B24 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180063038 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x1800632F0 (-GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA-AW4ShellExperienceViewBorderEdge@.c)
 *     ?ShowBorder@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4ShellExperienceViewBorderAccentState@5678@@Z @ 0x1800684C0 (-ShowBorder@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Experience@.c)
 *     ?ShowBorderWithRect@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4ShellExperienceViewBorderAccentState@5678@UColor@UI@8@URect@Foundation@8@@Z @ 0x180068530 (-ShowBorderWithRect@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Exp.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18007DE0C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180086490 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CA-AW4wil_.c)
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x1800906D4 (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShowBorder(CortanaDesktopExperienceView *this, struct tagRECT *a2)
{
  char v3; // bl
  __int64 v4; // rax
  struct wil_details_RecordUsageResult *v5; // r9
  CortanaFeatureConfiguration *v6; // rcx
  LONG v7; // r13d
  CortanaFeatureConfiguration *v8; // rcx
  CortanaFeatureConfiguration *v9; // rcx
  LONG top; // r12d
  unsigned __int8 *v11; // r9
  WCHAR *v12; // r15
  int v13; // r10d
  int OverrideValue; // eax
  unsigned __int8 *v15; // r9
  int v16; // edi
  __int64 v17; // rax
  CortanaFeatureConfiguration *v18; // rcx
  struct wil_details_RecordUsageResult *v19; // r9
  LONG v20; // r13d
  CortanaFeatureConfiguration *v21; // rcx
  CortanaFeatureConfiguration *v22; // rcx
  LONG v23; // r15d
  unsigned __int8 *v24; // r9
  WCHAR *v25; // r12
  int v26; // r10d
  int FlightedValue; // edi
  unsigned __int8 *v28; // r9
  char v29; // al
  unsigned int v30; // ecx
  int v31; // edx
  __int64 v32; // rcx
  void (__fastcall *v33)(__int64, _QWORD, _QWORD); // rax
  LANGID ThreadUILanguage; // ax
  int v36; // eax
  float v37; // xmm0_4
  float v38; // xmm1_4
  bool v39; // zf
  LONG v40; // eax
  bool v41; // r14
  float v42; // xmm0_4
  LONG v43; // eax
  float v44; // xmm1_4
  HMONITOR v45; // rax
  int MonitorInformation; // eax
  unsigned int v47; // edi
  HWND Hwnd; // rax
  int y; // r8d
  int x; // edx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int BorderFlagFromStuckEdge; // eax
  __int64 v54; // r11
  void (__fastcall *v55)(__int64, _QWORD, __int64, _QWORD, struct tagRECT *); // r10
  __int64 v56; // rdx
  __int64 v57; // rdx
  LONG left; // ecx
  int v59; // [rsp+20h] [rbp-B9h]
  int v60; // [rsp+20h] [rbp-B9h]
  bool v61[8]; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v62; // [rsp+58h] [rbp-81h] BYREF
  __int16 v63; // [rsp+5Ch] [rbp-7Dh]
  unsigned int v64; // [rsp+60h] [rbp-79h] BYREF
  __int16 v65; // [rsp+64h] [rbp-75h]
  struct tagPOINT Point; // [rsp+68h] [rbp-71h] BYREF
  struct tagRECT v67; // [rsp+70h] [rbp-69h] BYREF
  struct tagRECT *v68; // [rsp+80h] [rbp-59h]
  struct tagRECT v69; // [rsp+90h] [rbp-49h] BYREF
  struct tagRECT v70; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v71; // [rsp+B0h] [rbp-29h]
  struct tagRECT v72; // [rsp+C0h] [rbp-19h] BYREF
  int v73; // [rsp+D0h] [rbp-9h]
  int v74; // [rsp+D4h] [rbp-5h]
  RECT rc; // [rsp+D8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v68 = a2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetCachedFeatureEnabledState();
  LOBYTE(v63) = 3;
  v64 = 0;
  v65 = v63;
  v3 = 1;
  v62 = 3;
  v4 = wil_details_RecordUsageInPropertyCache(
         (__int64)&rc,
         (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data,
         2,
         0,
         1u);
  v6 = (CortanaFeatureConfiguration *)wil::details::RecordFeatureUsageCallback;
  v70 = *(struct tagRECT *)v4;
  v71 = *(_QWORD *)(v4 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xB188BC,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v70,
        v5);
    else
      g_wil_details_recordFeatureUsage(
        0xB188BCu,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v70);
    v6 = (CortanaFeatureConfiguration *)`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v73 = 0;
      v72.bottom = 0;
      v74 = (`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      *(_QWORD *)&v72.left = 0LL;
      v72.right = 2;
      ((void (__fastcall *)(__int64, _QWORD, struct tagRECT *))g_wil_details_recordFeatureUsage)(11634876LL, 0LL, &v72);
    }
  }
  if ( !(_DWORD)v71 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xB188BCu,
      (const struct FEATURE_LOGGED_TRAITS *)&v64,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v62,
      0LL,
      0,
      1uLL);
  v7 = *((_DWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v6) + 177);
  CortanaFeatureConfiguration::getSharedFeatureTable(v8);
  top = 0;
  v12 = (WCHAR *)*((_QWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v9) + 87);
  if ( v13 != 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16D,
      (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
      (const char *)0x80070057LL,
      v59);
    goto LABEL_17;
  }
  v61[0] = 0;
  v69.top = 0;
  v69.left = 1;
  *(_QWORD *)&v69.right = 0LL;
  OverrideValue = CortanaFeatureConfiguration::GetOverrideValue(
                    v12,
                    (const unsigned __int16 *)&v69,
                    (struct CortanaFeatureConfiguration::FeatureValue *)v61,
                    v11);
  v16 = OverrideValue;
  if ( OverrideValue < 0 )
  {
    v56 = 297LL;
  }
  else
  {
    if ( v61[0] )
      goto LABEL_16;
    v61[0] = 0;
    OverrideValue = CortanaFeatureConfiguration::GetFlightedValue(
                      (CortanaFeatureConfiguration *)v12,
                      (const unsigned __int16 *)&v69,
                      (struct CortanaFeatureConfiguration::FeatureValue *)v61,
                      v15);
    v16 = OverrideValue;
    if ( OverrideValue >= 0 )
    {
      v16 = 0;
      if ( !v61[0] )
      {
        v69.top = v7;
        goto LABEL_15;
      }
LABEL_16:
      top = v69.top;
      goto LABEL_17;
    }
    v56 = 305LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v56,
    (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
    (const char *)(unsigned int)OverrideValue,
    v59);
LABEL_15:
  if ( v16 >= 0 )
    goto LABEL_16;
LABEL_17:
  if ( top )
  {
LABEL_71:
    v29 = 1;
    goto LABEL_35;
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetCachedFeatureEnabledState();
  LOBYTE(v63) = 3;
  v64 = 0;
  v65 = v63;
  v62 = 3;
  v17 = wil_details_RecordUsageInPropertyCache(
          (__int64)&rc,
          (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data,
          2,
          0,
          1u);
  v70 = *(struct tagRECT *)v17;
  v71 = *(_QWORD *)(v17 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xB188BC,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v70,
        v19);
    else
      g_wil_details_recordFeatureUsage(
        0xB188BCu,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v70);
    v18 = (CortanaFeatureConfiguration *)`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v73 = 0;
      v72.bottom = 0;
      v74 = (`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      *(_QWORD *)&v72.left = 0LL;
      v72.right = 2;
      ((void (__fastcall *)(__int64, _QWORD, struct tagRECT *))g_wil_details_recordFeatureUsage)(11634876LL, 0LL, &v72);
    }
  }
  if ( !(_DWORD)v71 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xB188BCu,
      (const struct FEATURE_LOGGED_TRAITS *)&v64,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v62,
      0LL,
      0,
      1uLL);
  v20 = *((_DWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v18) + 171);
  CortanaFeatureConfiguration::getSharedFeatureTable(v21);
  v23 = 0;
  v25 = (WCHAR *)*((_QWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v22) + 84);
  if ( v26 != 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16D,
      (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
      (const char *)0x80070057LL,
      v59);
    goto LABEL_34;
  }
  v61[0] = 0;
  v69.top = 0;
  v69.left = 1;
  *(_QWORD *)&v69.right = 0LL;
  FlightedValue = CortanaFeatureConfiguration::GetOverrideValue(
                    v25,
                    (const unsigned __int16 *)&v69,
                    (struct CortanaFeatureConfiguration::FeatureValue *)v61,
                    v24);
  if ( FlightedValue < 0 )
  {
    v57 = 297LL;
  }
  else
  {
    if ( v61[0] )
      goto LABEL_33;
    v61[0] = 0;
    FlightedValue = CortanaFeatureConfiguration::GetFlightedValue(
                      (CortanaFeatureConfiguration *)v25,
                      (const unsigned __int16 *)&v69,
                      (struct CortanaFeatureConfiguration::FeatureValue *)v61,
                      v28);
    if ( FlightedValue >= 0 )
    {
      FlightedValue = 0;
      if ( !v61[0] )
      {
        v69.top = v20;
        goto LABEL_32;
      }
LABEL_33:
      v23 = v69.top;
      goto LABEL_34;
    }
    v57 = 305LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v57,
    (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
    (const char *)(unsigned int)FlightedValue,
    v59);
LABEL_32:
  if ( FlightedValue >= 0 )
    goto LABEL_33;
LABEL_34:
  v29 = 0;
  if ( v23 )
    goto LABEL_71;
LABEL_35:
  v30 = *((_DWORD *)this + 34);
  if ( v30 > 9 || (v31 = 582, !_bittest(&v31, v30)) || *((_BYTE *)this + 209) || v29 )
  {
    v32 = *((_QWORD *)this + 18);
    v33 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v32 + 128LL);
    if ( (char *)v33 == (char *)TwinUI::Cortana::ShellExperienceView::ShowBorder )
      TwinUI::Cortana::ShellExperienceView::ShowBorder(v32, 0LL, 0LL);
    else
      v33(v32, 0LL, 0LL);
    v3 = 0;
LABEL_40:
    *((_BYTE *)this + 201) = v3;
    return 0LL;
  }
  ThreadUILanguage = GetThreadUILanguage();
  v36 = IsBiDiLocale(ThreadUILanguage);
  v37 = *((float *)this + 43);
  v38 = *((float *)this + 44);
  v39 = v36 == 0;
  v40 = (int)v37;
  v41 = !v39;
  v42 = v37 + *((float *)this + 45);
  rc.left = v40;
  v43 = (int)v38;
  v44 = v38 + *((float *)this + 46);
  rc.top = v43;
  rc.right = (int)v42;
  rc.bottom = (int)v44;
  v45 = MonitorFromRect(&rc, 0);
  if ( v45 )
  {
    MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                           this,
                           v45,
                           &v72,
                           &v67,
                           &v70,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&v62,
                           v61);
    v47 = MonitorInformation;
    if ( MonitorInformation >= 0 )
    {
      v69 = v67;
      if ( v62 )
      {
        if ( v62 == 1 )
        {
          if ( v70.bottom > v67.top )
            v69.top = v70.bottom;
        }
        else if ( v62 == 2 )
        {
          if ( v70.left < v67.right )
            v69.right = v70.left;
        }
        else if ( v62 == 3 && v70.top < v67.bottom )
        {
          v69.bottom = v70.top;
        }
      }
      else
      {
        left = v69.left;
        if ( v70.right > v67.left )
          left = v70.right;
        v69.left = left;
      }
      Point.x = v69.left;
      Point.y = v69.top;
      if ( v68 )
      {
        x = v69.left - v68->left;
        y = v69.top - v68->top;
        Point.y = y;
        Point.x = x;
      }
      else
      {
        Hwnd = CortanaDesktopExperienceView::GetHwnd(this);
        ScreenToClient(Hwnd, &Point);
        y = Point.y;
        x = Point.x;
      }
      OffsetRect(&v69, x - v69.left, y - v69.top);
      LOBYTE(v51) = v41;
      LOBYTE(v52) = *((_BYTE *)this + 200);
      v64 = 0x1000000;
      *(float *)&v70.left = (float)v69.left;
      *(float *)&v70.top = (float)v69.top;
      *(float *)&v70.right = (float)(v69.right - v69.left);
      *(float *)&v70.bottom = (float)(v69.bottom - v69.top);
      BorderFlagFromStuckEdge = CortanaDesktopExperienceView::GetBorderFlagFromStuckEdge(this, v62, v51, v52);
      v55 = *(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, struct tagRECT *))(*(_QWORD *)v54 + 136LL);
      if ( (char *)v55 == (char *)TwinUI::Cortana::ShellExperienceView::ShowBorderWithRect )
        TwinUI::Cortana::ShellExperienceView::ShowBorderWithRect(v54, BorderFlagFromStuckEdge, 1LL, v64, &v70);
      else
        v55(v54, BorderFlagFromStuckEdge, 1LL, v64, &v70);
      goto LABEL_40;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA58,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation,
      v60);
    return v47;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA51,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x8000FFFFLL,
      v59);
    return 2147549183LL;
  }
}
