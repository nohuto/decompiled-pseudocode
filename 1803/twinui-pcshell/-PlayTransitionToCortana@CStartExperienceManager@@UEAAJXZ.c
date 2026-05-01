/*
 * XREFs of ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180076730
 * Callers:
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180079178 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180018630 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJUSize@63@PEAPEAUIInspectable@@@Z1@Z @ 0x18006C8BC (--$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ??$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJNPEAPEAUIInspectable@@@ZN@Z @ 0x18006C9A8 (--$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18006D2B0 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x180076E74 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180089B74 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180089C48 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180092518 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CAX_NW4ReportingKi.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CStartExperienceManager::PlayTransitionToCortana(
        CStartExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  char v3; // r14
  struct CSingleViewShellExperience *v4; // rdx
  int MonitorInformation; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // ecx
  struct wil::details::IFunctorHost *v9; // r8
  __int64 v10; // rax
  UAPViewWrapper *v11; // r8
  int v12; // eax
  __int64 v13; // rax
  UAPViewWrapper *v14; // r8
  bool v15; // zf
  unsigned __int8 v16; // bl
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  int v23; // [rsp+28h] [rbp-E0h]
  bool v24[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v27; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v28; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  HWND hWnd; // [rsp+70h] [rbp-98h] BYREF
  HMONITOR hMonitor; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v32[2]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v33[3]; // [rsp+90h] [rbp-78h] BYREF
  DiagnosticsInfo v34; // [rsp+A8h] [rbp-60h] BYREF
  const char *v35; // [rsp+B0h] [rbp-58h]
  __int64 v36; // [rsp+B8h] [rbp-50h]
  __int16 v37; // [rsp+C0h] [rbp-48h]
  __int64 v38; // [rsp+C8h] [rbp-40h]
  HWND *p_hWnd; // [rsp+D0h] [rbp-38h]
  char v40; // [rsp+D8h] [rbp-30h]
  _BYTE v41[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-20h]
  int v43; // [rsp+F4h] [rbp-14h]
  struct tagRECT v44; // [rsp+108h] [rbp+0h] BYREF
  struct tagRECT v45; // [rsp+118h] [rbp+10h] BYREF
  struct tagMONITORINFO mi; // [rsp+128h] [rbp+20h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+150h] [rbp+48h] BYREF
  __int64 v48; // [rsp+168h] [rbp+60h]
  _BYTE v49[32]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v50[32]; // [rsp+190h] [rbp+88h] BYREF
  _BYTE v51[32]; // [rsp+1B0h] [rbp+A8h] BYREF
  _BYTE v52[32]; // [rsp+1D0h] [rbp+C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v38 = -2LL;
  hWnd = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 36), a2);
  EnableWindow(hWnd, 0);
  p_hWnd = &hWnd;
  v3 = 1;
  v40 = 1;
  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)((char *)this - 40),
                         v4,
                         &v45,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v26,
                         v24,
                         &v44,
                         &hMonitor);
  v6 = MonitorInformation;
  if ( MonitorInformation >= 0 )
  {
    v28 = 0LL;
    v48 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v48,
           &v28);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40C,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v7,
        v23);
      goto LABEL_16;
    }
    v27 = v28;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v27);
    v25 = 48;
    mi.cbSize = 40;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( GetMonitorInfoW(hMonitor, &mi) )
    {
      v29 = *((_QWORD *)this + 74);
      v8 = 344;
      if ( mi.rcMonitor.right - mi.rcMonitor.left < 1196 )
        v8 = 320;
      *(float *)&v29 = (float)v8 + (float)v25;
      v33[0] = &v29;
      v33[1] = &mi;
      v33[2] = &v25;
      v34 = (DiagnosticsInfo)retaddr;
      v35 = "pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp";
      v36 = 0LL;
      v37 = 1050;
      wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::ReportUsageToService();
      v32[0] = off_180323680;
      v32[1] = v33;
      wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v41, 0xB188BCu, &v34);
      wil::details::RunFunctor((wil::details *)v32, (struct wil::details::IFunctor *)v41, v9);
      if ( v42 )
        *(_DWORD *)(v42 + 16) = v43;
      v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v49, (const WCHAR **)off_18031DF18);
      v12 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<Windows::Foundation::Size>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
              *(HSTRING *)(v10 + 24),
              v11,
              v29);
      v6 = v12;
      if ( v12 < 0 )
      {
        v22 = 1059LL;
      }
      else
      {
        v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v50, (const WCHAR **)off_18031DF20);
        v12 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<double>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
                *(HSTRING *)(v13 + 24),
                v14);
        v6 = v12;
        if ( v12 < 0 )
        {
          v22 = 1062LL;
        }
        else
        {
          if ( v24[0] )
            v15 = (_DWORD)v26 == 0;
          else
            v15 = (_DWORD)v26 == 2;
          v16 = !v15;
          v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)v51,
                  (const WCHAR **)off_18031DF28);
          v12 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                  &v27,
                  *(_QWORD *)(v17 + 24),
                  v18,
                  v16);
          v6 = v12;
          if ( v12 < 0 )
          {
            v22 = 1084LL;
          }
          else
          {
            v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    (__int64)v52,
                    (const WCHAR **)off_18031DF08);
            v12 = ExperienceManagerUtils::RaiseReactivatedEvent(
                    *((ExperienceManagerUtils **)this + 36),
                    (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 98),
                    *((HSTRING *)this + 34),
                    *((HSTRING *)this + 35),
                    *(HSTRING *)(v19 + 24),
                    v28);
            v6 = v12;
            if ( v12 >= 0 )
            {
              *((_BYTE *)this + 600) = 1;
              v3 = 0;
              v6 = 0;
LABEL_15:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
LABEL_16:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
              goto LABEL_17;
            }
            v22 = 1089LL;
          }
        }
      }
      v21 = (unsigned int)v12;
    }
    else
    {
      v6 = -2147418113;
      v21 = 2147549183LL;
      v22 = 1044LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)v21,
      v23);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x406,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)MonitorInformation,
    v23);
LABEL_17:
  if ( v3 )
    EnableWindow(hWnd, 1);
  return v6;
}
