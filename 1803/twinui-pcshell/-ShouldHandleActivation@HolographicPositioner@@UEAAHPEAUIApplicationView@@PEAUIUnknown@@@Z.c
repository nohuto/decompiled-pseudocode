/*
 * XREFs of ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180020F50
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180023A80 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18001BA10 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetFrameworkViewType@CWinRTApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18001BA50 (-GetFrameworkViewType@CWinRTApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180020BD0 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180020F20 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x18005FD80 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18006D160 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18007C640 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x1800905E8 (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x1800F80D4 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18018B24C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@.c)
 *     ??$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchHeuristic@@@Z @ 0x1801AAE84 (--$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@@HolographicPositionerTelemetry@@SAX.c)
 *     ??$LaunchInHolographic@W4HolographicLaunchReason@@@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchReason@@@Z @ 0x1801AB154 (--$LaunchInHolographic@W4HolographicLaunchReason@@@HolographicPositionerTelemetry@@SAX$$QEAW4Hol.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1801ABF8C (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1801B2458 (-_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Coll.c)
 *     ?_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1801B265C (-_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall HolographicPositioner::ShouldHandleActivation(
        HolographicPositioner *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct IUnknown *a3)
{
  signed __int32 v6; // ebx
  struct wil_details_RecordUsageResult *v7; // r9
  __int64 (__fastcall *v8)(struct IApplicationView *, GUID *, __int64 *); // rax
  int v9; // eax
  unsigned int v10; // ebx
  PositionerPropertySetHelpers *v11; // rcx
  int DetailsForActivation; // eax
  struct Windows::Foundation::Collections::IPropertySet *v13; // rbx
  HolographicPositioner *v14; // r14
  __int64 (__fastcall *v15)(struct IApplicationView *, GUID *, CWinRTApplicationView **); // rax
  int v16; // eax
  CWinRTApplicationView *v17; // rsi
  struct IImmersiveApplication *v18; // rcx
  __int64 (__fastcall *v19)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  int v20; // eax
  CWinRTApplicationView *v21; // rcx
  struct IImmersiveApplication *v22; // rcx
  __int64 (__fastcall *v23)(CWinRTApplicationView *, enum FRAMEWORK_VIEW_TYPE *); // rax
  int FrameworkViewType; // eax
  int IsPropertySetContextHolographic; // eax
  HWND ForegroundWindow; // rax
  HWND v27; // rdi
  HRESULT v28; // eax
  __int64 v29; // r8
  char v30; // al
  bool v31; // bl
  struct Windows::Foundation::Collections::IPropertySet *v32; // rcx
  __int64 v33; // rcx
  __int64 v35; // rax
  bool HasKey; // al
  bool v37; // al
  int v38; // eax
  wil::details::in1diag3 *v39; // rcx
  unsigned __int64 v40; // r9
  __int64 v41; // rdx
  int v42; // eax
  struct PositionerPropertySetHelpers::ViewSizePreferences *v43; // [rsp+20h] [rbp-E0h]
  int v44; // [rsp+20h] [rbp-E0h]
  _BYTE v45[4]; // [rsp+50h] [rbp-B0h] BYREF
  signed __int32 v46; // [rsp+54h] [rbp-ACh] BYREF
  int v47; // [rsp+58h] [rbp-A8h] BYREF
  int v48; // [rsp+5Ch] [rbp-A4h] BYREF
  struct IImmersiveApplication *v49; // [rsp+60h] [rbp-A0h] BYREF
  int v50; // [rsp+68h] [rbp-98h] BYREF
  CWinRTApplicationView *v51; // [rsp+70h] [rbp-90h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v52; // [rsp+78h] [rbp-88h] BYREF
  int v53; // [rsp+80h] [rbp-80h]
  __int16 v54; // [rsp+84h] [rbp-7Ch]
  int v55; // [rsp+88h] [rbp-78h] BYREF
  int v56; // [rsp+8Ch] [rbp-74h] BYREF
  int v57; // [rsp+90h] [rbp-70h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v58; // [rsp+98h] [rbp-68h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-60h] BYREF
  int v60; // [rsp+A8h] [rbp-58h] BYREF
  int v61; // [rsp+ACh] [rbp-54h] BYREF
  int v62; // [rsp+B0h] [rbp-50h] BYREF
  int v63; // [rsp+B8h] [rbp-48h] BYREF
  int v64; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v65; // [rsp+C4h] [rbp-3Ch]
  struct IUnknown v66; // [rsp+C8h] [rbp-38h] BYREF
  int v67; // [rsp+D0h] [rbp-30h] BYREF
  int v68; // [rsp+D4h] [rbp-2Ch] BYREF
  int v69; // [rsp+D8h] [rbp-28h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v70; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v71; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v72; // [rsp+F8h] [rbp-8h]
  __int128 *v73; // [rsp+100h] [rbp+0h] BYREF
  int v74; // [rsp+108h] [rbp+8h]
  int v75; // [rsp+10Ch] [rbp+Ch]
  __int64 v76; // [rsp+110h] [rbp+10h]
  _QWORD v77[2]; // [rsp+118h] [rbp+18h] BYREF
  int v78; // [rsp+128h] [rbp+28h]
  int v79; // [rsp+12Ch] [rbp+2Ch]
  __int128 v80; // [rsp+130h] [rbp+30h] BYREF
  __int64 v81; // [rsp+140h] [rbp+40h]
  HSTRING_HEADER hstringHeader; // [rsp+148h] [rbp+48h] BYREF
  HSTRING string; // [rsp+160h] [rbp+60h] BYREF
  HSTRING_HEADER v84; // [rsp+168h] [rbp+68h] BYREF
  HSTRING v85; // [rsp+180h] [rbp+80h]
  _BYTE v86[24]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v87; // [rsp+1A0h] [rbp+A0h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v76 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetCachedFeatureEnabledState();
  v53 = 0;
  LOBYTE(v54) = 3;
  v64 = 0;
  v65 = v54;
  v63 = 3;
  v71 = 0uLL;
  v72 = 0LL;
  v48 = 0x10000;
  v73 = &v71;
  v74 = 0x10000;
  v75 = 0;
  do
  {
    v46 = `wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data;
    v6 = `wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data;
    if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v46, &v73) )
    {
      LODWORD(v72) = 1;
      goto LABEL_6;
    }
  }
  while ( v6 != _InterlockedCompareExchange(
                  (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data,
                  v46,
                  v6) );
  LODWORD(v72) = 0;
LABEL_6:
  v80 = v71;
  v81 = v72;
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0x88518B,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v80,
        v7);
    else
      g_wil_details_recordFeatureUsage(
        0x88518Bu,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v80);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v77[0] = 0LL;
      v78 = 0;
      v77[1] = 2LL;
      v79 = (`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(8933771LL, 0LL, v77);
    }
  }
  if ( !(_DWORD)v81 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x88518Bu,
      (const struct FEATURE_LOGGED_TRAITS *)&v64,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v63,
      0LL,
      0,
      1uLL);
  v59 = 0LL;
  v8 = **a2;
  if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
    v9 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
           a2,
           &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
           &v59);
  else
    v9 = v8((struct IApplicationView *)a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v59);
  if ( v9 < 0 )
  {
    v10 = 0;
    goto LABEL_56;
  }
  LOBYTE(v10) = 0;
  v58 = 0LL;
  if ( !a3
    || ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v58) < 0 )
  {
    goto LABEL_53;
  }
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v11,
                           (struct IApplicationView *)a3,
                           &v66,
                           0LL,
                           v43);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x274,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      v44);
  if ( ((__int64)v66.lpVtbl & 0x10) == 0 )
  {
    if ( ((__int64)v66.lpVtbl & 4) != 0 )
    {
      v55 = 0;
      if ( (int)HolographicPositioner::IsViewManaged(
                  (HolographicPositioner *)((char *)this - 40),
                  (struct IApplicationView *)a2,
                  &v55) >= 0
        && v55 )
      {
        goto LABEL_64;
      }
      goto LABEL_52;
    }
    v13 = v58;
    v14 = (HolographicPositioner *)((char *)this - 176);
    v49 = 0LL;
    v51 = 0LL;
    v15 = (__int64 (__fastcall *)(struct IApplicationView *, GUID *, CWinRTApplicationView **))**a2;
    if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
      v16 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
              a2,
              &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
              &v51);
    else
      v16 = v15((struct IApplicationView *)a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v51);
    if ( v16 >= 0 )
    {
      v17 = v51;
      v18 = v49;
      if ( v49 )
      {
        v49 = 0LL;
        (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v17 + 24LL);
      v20 = v19 == CWinRTApplicationView::GetApplication
          ? CWinRTApplicationView::GetApplication(v17, &v49)
          : v19(v17, &v49);
      if ( v20 >= 0
        && ((*(unsigned int (__fastcall **)(struct IImmersiveApplication *, _QWORD))(*(_QWORD *)v49 + 328LL))(v49, 0LL)
         || (*(unsigned int (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)v49 + 328LL))(v49, 5LL)) )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v51);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v49);
        goto LABEL_52;
      }
    }
    v21 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v50 = 6;
    v23 = (__int64 (__fastcall *)(CWinRTApplicationView *, enum FRAMEWORK_VIEW_TYPE *))(*a2)[50];
    if ( v23 == CWinRTApplicationView::GetFrameworkViewType )
      FrameworkViewType = CWinRTApplicationView::GetFrameworkViewType(
                            (CWinRTApplicationView *)a2,
                            (enum FRAMEWORK_VIEW_TYPE *)&v50);
    else
      FrameworkViewType = v23((CWinRTApplicationView *)a2, (enum FRAMEWORK_VIEW_TYPE *)&v50);
    if ( FrameworkViewType >= 0 && v50 <= 4 && v50 > 0 )
    {
      HIDWORD(v66.lpVtbl) = 1;
      HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason>((char *)&v66.lpVtbl + 4);
      LOBYTE(v10) = 1;
      goto LABEL_53;
    }
    IsPropertySetContextHolographic = HolographicPositioner::_IsPropertySetContextHolographic(
                                        (__int64)v14,
                                        (__int64)v13);
    if ( IsPropertySetContextHolographic == 2 )
    {
      v67 = 0;
      HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason>(&v67);
      LOBYTE(v10) = 1;
      goto LABEL_53;
    }
    if ( IsPropertySetContextHolographic == 1 )
      goto LABEL_52;
    ForegroundWindow = GetForegroundWindow();
    v27 = ForegroundWindow;
    if ( ForegroundWindow
      && (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(ForegroundWindow, 0LL, &v68) >= 0
      && v68 == 1 )
    {
      v52 = v13;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v52);
      v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v86, (const WCHAR **)off_180322BD8);
      HasKey = Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v52,
                 *(HSTRING *)(v35 + 24));
      v87 = 0LL;
      if ( HasKey )
      {
        v56 = 0;
        if ( (int)HolographicPositioner::_IsPropertySetActivationSourceAumidForeground(v14, v13, v27, &v56) >= 0 )
        {
          if ( v56 )
          {
            v69 = 1;
            HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic>(&v69);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
LABEL_102:
            v62 = 2;
            HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason>(&v62);
LABEL_64:
            LOBYTE(v10) = 1;
            goto LABEL_53;
          }
        }
      }
      v85 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v84, L"AAMShim.CallingProcessId", 0x19u, 0x18u);
      v37 = Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v52,
              v85);
      v85 = 0LL;
      if ( v37 )
      {
        v57 = 0;
        if ( (int)HolographicPositioner::_IsPropertySetActivationSourceProcessIdForeground(v14, v13, v27, &v57) >= 0 )
        {
          if ( v57 )
          {
            v60 = 0;
            HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic>(&v60);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
            goto LABEL_102;
          }
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
    }
    v48 = 0;
    v70 = v13;
    if ( v13 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v13 + 8LL))(v13);
    string = 0LL;
    v28 = WindowsCreateStringReference(L"AAMShim.CallingProcessId", 0x18u, &hstringHeader, &string);
    if ( v28 < 0 )
    {
      RaiseException(v28, 1u, 0, 0LL);
    }
    else if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v70, string, v29, &v48) >= 0 )
    {
      v30 = 0;
      goto LABEL_47;
    }
    v30 = 1;
LABEL_47:
    string = 0LL;
    if ( v30 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
    }
    else
    {
      v31 = v48 == GetCurrentProcessId();
      if ( v70 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v70 + 16LL))(v70);
      if ( v31 )
        goto LABEL_52;
    }
    if ( *((_DWORD *)v14 + 108) )
    {
LABEL_52:
      LOBYTE(v10) = 0;
LABEL_53:
      v10 = (unsigned __int8)v10;
      goto LABEL_54;
    }
    v47 = 0;
    v45[0] = 0;
    v38 = wil::wnf_query_nothrow<unsigned long>(&WNF_HOLO_USER_DISPLAY_CONTEXT, v45, &v47);
    if ( v38 >= 0 )
    {
      if ( !v45[0] || v47 != 1 )
        goto LABEL_52;
      v42 = wil::wnf_query_nothrow<unsigned long>(&WNF_HOLO_USER_INPUT_CONTEXT, v45, &v47);
      if ( v42 >= 0 )
      {
        if ( v45[0] && v47 == 1 )
        {
          v61 = 2;
          HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic>(&v61);
          goto LABEL_102;
        }
        goto LABEL_52;
      }
      v39 = retaddr;
      v40 = (unsigned int)v42;
      v41 = 1327LL;
    }
    else
    {
      v39 = retaddr;
      v40 = (unsigned int)v38;
      v41 = 1324LL;
    }
    wil::details::in1diag3::Return_Hr(
      v39,
      (void *)v41,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)v40,
      v44);
    goto LABEL_52;
  }
  v10 = 0;
LABEL_54:
  v32 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v32 + 16LL))(v32);
  }
LABEL_56:
  v33 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  return v10;
}
