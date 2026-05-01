/*
 * XREFs of ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180021C40
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180023A80 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetShowInSwitchers@CWinRTApplicationView@@UEAAJPEAH@Z @ 0x18001C230 (-GetShowInSwitchers@CWinRTApplicationView@@UEAAJPEAH@Z.c)
 *     ?GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001C2C0 (-GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?SwitchTo@CWinRTApplicationView@@UEAAJXZ @ 0x18001C890 (-SwitchTo@CWinRTApplicationView@@UEAAJXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18006CDD0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18006D160 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18007C640 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18014C46C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180283EE8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CA-AW4wil_d.c)
 *     ??$?0$0BG@@StringReference@Internal@Windows@@QEAA@AEAY0BG@$$CBG@Z @ 0x1802BE188 (--$-0$0BG@@StringReference@Internal@Windows@@QEAA@AEAY0BG@$$CBG@Z.c)
 *     ?_ControlGainedHelper@CDesktopPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@@Z @ 0x1802C0ADC (-_ControlGainedHelper@CDesktopPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PE.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CDesktopPositioner::ControlGainedForActivation(
        PositionerPropertySetHelpers *a1,
        CWinRTApplicationView *a2,
        unsigned int a3,
        struct IApplicationView *a4)
{
  int DetailsForActivation; // eax
  unsigned int v9; // ebx
  char lpVtbl; // r14
  __int64 v11; // rax
  struct wil_details_RecordUsageResult *v12; // r9
  __int64 (__fastcall *v13)(CWinRTApplicationView *, unsigned __int16 **); // rax
  int AppUserModelId; // eax
  const WCHAR *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(RTL_SRWLOCK *, int *); // rax
  int ShowInSwitchers; // eax
  __int64 (__fastcall *v20)(CWinRTApplicationView *); // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rsi
  __int64 v35; // r9
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rsi
  HWND ForegroundWindow; // rax
  HWND v40; // r14
  HWND Ancestor; // rbx
  int v42; // eax
  wil::details::in1diag3 *v43; // rcx
  int v44; // eax
  struct PositionerPropertySetHelpers::ViewSizePreferences *bIgnoreCase; // [rsp+20h] [rbp-E0h]
  int bIgnoreCasea; // [rsp+20h] [rbp-E0h]
  int bIgnoreCaseb; // [rsp+20h] [rbp-E0h]
  int bIgnoreCasec; // [rsp+20h] [rbp-E0h]
  _BYTE v49[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+58h] [rbp-A8h] BYREF
  struct IUnknown v51; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v52; // [rsp+68h] [rbp-98h] BYREF
  __int16 v53; // [rsp+6Ch] [rbp-94h]
  int v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h] BYREF
  int v56; // [rsp+80h] [rbp-80h] BYREF
  __int16 v57; // [rsp+84h] [rbp-7Ch]
  unsigned int v58; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v59; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h]
  LPCWCH lpString1[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-50h]
  HSTRING string; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v65; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v66; // [rsp+F0h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v60 = -2LL;
  lpString1[0] = 0LL;
  lpString1[1] = 0LL;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           a1,
                           a4,
                           &v51,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)lpString1,
                           bIgnoreCase);
  v9 = DetailsForActivation;
  if ( DetailsForActivation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19E,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      bIgnoreCasea);
    return v9;
  }
  lpVtbl = (char)v51.lpVtbl;
  if ( ((__int64)v51.lpVtbl & 1) == 0 && ((__int64)v51.lpVtbl & 4) == 0 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetCachedFeatureEnabledState();
    v52 = 5;
    LOBYTE(v53) = 3;
    v56 = 5;
    v57 = v53;
    LODWORD(v51.lpVtbl) = 3;
    bIgnoreCaseb = 1;
    v11 = wil_details_RecordUsageInPropertyCache(
            &string,
            &`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data,
            2LL);
    v65 = *(_OWORD *)v11;
    v66 = *(_QWORD *)(v11 + 16);
    if ( g_wil_details_recordFeatureUsage )
    {
      if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
        wil::details::RecordFeatureUsageCallback(
          (wil::details *)0x60F183,
          (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data,
          (union wil_details_FeaturePropertyCache *)&v65,
          v12);
      else
        g_wil_details_recordFeatureUsage(
          0x60F183u,
          (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data,
          (struct wil_details_RecordUsageResult *)&v65);
      if ( (`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
      {
        lpString1[0] = 0LL;
        LODWORD(v62) = 0;
        lpString1[1] = (LPCWCH)2;
        HIDWORD(v62) = (`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
        ((void (__fastcall *)(__int64, _QWORD, LPCWCH *))g_wil_details_recordFeatureUsage)(6353283LL, 0LL, lpString1);
      }
    }
    if ( !(_DWORD)v66 && g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x60F183u,
        (const struct FEATURE_LOGGED_TRAITS *)&v56,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v51,
        0LL,
        0,
        1uLL);
    lpString1[0] = 0LL;
    lpString1[1] = (LPCWCH)-1LL;
    v62 = -1LL;
    v13 = *(__int64 (__fastcall **)(CWinRTApplicationView *, unsigned __int16 **))(*(_QWORD *)a2 + 136LL);
    if ( v13 == CWinRTApplicationView::GetAppUserModelId )
      AppUserModelId = CWinRTApplicationView::GetAppUserModelId(a2, (unsigned __int16 **)lpString1);
    else
      AppUserModelId = v13(a2, (unsigned __int16 **)lpString1);
    v9 = AppUserModelId;
    if ( AppUserModelId < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AA,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)AppUserModelId,
        bIgnoreCaseb);
    }
    else
    {
      v15 = lpString1[0];
      if ( CompareStringOrdinal(lpString1[0], -1, L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App", -1, 1) != 2
        && CompareStringOrdinal(v15, -1, L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App", -1, 1) != 2 )
      {
        if ( lpString1[0] )
        {
          CoTaskMemFree((LPVOID)lpString1[0]);
          lpString1[0] = 0LL;
        }
        lpString1[1] = 0LL;
        v62 = 0LL;
        if ( a3 )
          CDesktopPositioner::_ControlGainedHelper((char *)a1 - 128, a2, a3, 0LL);
        v55 = 0LL;
        if ( a4
          && (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a4)(
               a4,
               &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
               &v55) >= 0 )
        {
          v50 = v55;
          if ( v55 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8LL))(v55);
          v49[0] = 0;
          if ( WindowsCreateStringReference(L"TryPositionView", 0xFu, &hstringHeader, &string) < 0 )
            RaiseException(0xC000000D, 1u, 0, 0LL);
          if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(&v50, string, v16, v49) >= 0
            && v49[0] )
          {
            if ( WindowsCreateStringReference(L"TryPositionView.Left", 0x14u, &hstringHeader, &string) < 0 )
              RaiseException(0xC000000D, 1u, 0, 0LL);
            v25 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v50, string, v24, &v51);
            v9 = v25;
            if ( v25 < 0 )
            {
              v26 = 451LL;
LABEL_69:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v26,
                (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                (const char *)(unsigned int)v25,
                bIgnoreCasec);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
              goto LABEL_39;
            }
            v27 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, L"TryPositionView.Right");
            v25 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v50, *v27, v28, &v59);
            v9 = v25;
            if ( v25 < 0 )
            {
              v26 = 452LL;
              goto LABEL_69;
            }
            if ( WindowsCreateStringReference(L"TryPositionView.Top", 0x13u, &hstringHeader, &string) < 0 )
              RaiseException(0xC000000D, 1u, 0, 0LL);
            v25 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v50, string, v29, &v58);
            v9 = v25;
            if ( v25 < 0 )
            {
              v26 = 453LL;
              goto LABEL_69;
            }
            if ( WindowsCreateStringReference(L"TryPositionView.Bottom", 0x16u, &hstringHeader, &string) < 0 )
              RaiseException(0xC000000D, 1u, 0, 0LL);
            v25 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v50, string, v30, &v56);
            v9 = v25;
            if ( v25 < 0 )
            {
              v26 = 454LL;
              goto LABEL_69;
            }
            v31 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, L"TryPositionView.Flags");
            v25 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v50, *v31, v32, &v52);
            v9 = v25;
            if ( v25 < 0 )
            {
              v26 = 455LL;
              goto LABEL_69;
            }
            lpString1[0] = (LPCWCH)__PAIR64__(v58, (unsigned int)v51.lpVtbl);
            lpString1[1] = (LPCWCH)__PAIR64__(v56, v59);
            v25 = (*(__int64 (__fastcall **)(__int64, CWinRTApplicationView *, LPCWCH *, _QWORD))(*((_QWORD *)a1 - 3)
                                                                                                + 64LL))(
                    (__int64)a1 - 24,
                    a2,
                    lpString1,
                    v52);
            v9 = v25;
            if ( v25 < 0 )
            {
              v26 = 459LL;
              goto LABEL_69;
            }
          }
          v17 = v50;
          if ( v50 )
          {
            v50 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
        v18 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, int *))(*(_QWORD *)a2 + 216LL);
        if ( v18 == CWinRTApplicationView::GetShowInSwitchers )
          ShowInSwitchers = CWinRTApplicationView::GetShowInSwitchers((RTL_SRWLOCK *)a2, &v54);
        else
          ShowInSwitchers = v18((RTL_SRWLOCK *)a2, &v54);
        v9 = ShowInSwitchers;
        if ( ShowInSwitchers < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1D0,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)ShowInSwitchers,
            bIgnoreCasec);
LABEL_39:
          v22 = v55;
          if ( v55 )
          {
            v55 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          return v9;
        }
        if ( (lpVtbl & 0x10) == 0 )
        {
          if ( (lpVtbl & 2) == 0 )
          {
            v20 = *(__int64 (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)a2 + 56LL);
            if ( v20 == CWinRTApplicationView::SwitchTo )
              v21 = CWinRTApplicationView::SwitchTo(a2);
            else
              v21 = v20(a2);
            if ( v21 >= 0 )
              goto LABEL_38;
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1E5,
              (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v21,
              bIgnoreCasec);
          }
          if ( !v54 )
          {
            v38 = -2LL;
            ForegroundWindow = GetForegroundWindow();
            v40 = ForegroundWindow;
            if ( ForegroundWindow )
            {
              Ancestor = GetAncestor(ForegroundWindow, 3u);
              if ( !Ancestor )
                Ancestor = v40;
              if ( (GetWindowLongPtrW(Ancestor, -20) & 8) == 0 )
                v38 = (__int64)Ancestor;
            }
            v42 = (*(__int64 (__fastcall **)(CWinRTApplicationView *, __int64))(*(_QWORD *)a2 + 120LL))(a2, v38);
            v43 = retaddr;
            if ( v42 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x208,
                (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                (const char *)(unsigned int)v42,
                bIgnoreCasec);
            wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v43, 0LL);
            v44 = (*(__int64 (__fastcall **)(CWinRTApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
            if ( v44 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x21C,
                (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                (const char *)(unsigned int)v44,
                bIgnoreCasec);
          }
          (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)a2 + 352LL))(a2);
          goto LABEL_38;
        }
        if ( !v54 )
        {
          v33 = (*(__int64 (__fastcall **)(CWinRTApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
          if ( v33 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1D9,
              (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v33,
              bIgnoreCasec);
          Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v50);
          v34 = v50;
          if ( !v50 )
          {
            v9 = -2147024882;
            v35 = 2147942414LL;
            v36 = 475LL;
            goto LABEL_79;
          }
          *(_DWORD *)(v50 + 80) = 1;
          v37 = (*(__int64 (__fastcall **)(CWinRTApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v34);
          v9 = v37;
          if ( v37 < 0 )
          {
            v35 = (unsigned int)v37;
            v36 = 477LL;
LABEL_79:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v36,
              (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)v35,
              bIgnoreCasec);
            if ( v34 )
            {
              v50 = 0LL;
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release(v34);
            }
            goto LABEL_39;
          }
          v50 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release(v34);
        }
LABEL_38:
        v9 = 0;
        goto LABEL_39;
      }
      v9 = 0;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpString1);
    return v9;
  }
  return 0LL;
}
