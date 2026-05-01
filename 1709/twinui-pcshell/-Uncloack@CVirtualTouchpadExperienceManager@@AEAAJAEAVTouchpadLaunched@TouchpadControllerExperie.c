/*
 * XREFs of ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1800CC838
 * Callers:
 *     ?OnViewShown@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800CC6E0 (-OnViewShown@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009C834 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@.c)
 *     ?SetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@@Z @ 0x1800C970C (-SetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@U_GUID@@@Z.c)
 *     ?Show@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x1800CA1D4 (-Show@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x1800CC224 (-AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManage.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1801D0EBC (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1801DB408 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualTouchpadExperienceManager::Uncloack(
        CVirtualTouchpadExperienceManager *this,
        struct TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  HRESULT v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  struct Windows::Foundation::Collections::IPropertySet *v12; // r9
  int v13; // eax
  struct Windows::Foundation::Collections::IPropertySet *v14; // rcx
  __int16 v16; // [rsp+3Ch] [rbp-35h]
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+40h] [rbp-31h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v18[2]; // [rsp+48h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-19h] BYREF
  HSTRING string; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v21[32]; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v18[1] = (struct Windows::Foundation::Collections::IPropertySet *)-2LL;
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::Show(a2);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetCachedFeatureEnabledState();
  LOBYTE(v16) = 0;
  LODWORD(v17) = 0;
  WORD2(v17) = v16;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
    0x7A7F42u,
    (const struct FEATURE_LOGGED_TRAITS *)&v17,
    0,
    3);
  v4 = CVirtualTouchpadExperienceManager::AnimateFrame((__int64)this, 0, (__int64)this + 672);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2F8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 43) + 40LL))(*((_QWORD *)this + 43), 0LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetCachedFeatureEnabledState();
    LOBYTE(v16) = 0;
    LODWORD(v17) = 0;
    WORD2(v17) = v16;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::GetFeaturePropertyCache'::`2'::data,
      0x7A7F42u,
      (const struct FEATURE_LOGGED_TRAITS *)&v17,
      0,
      3);
    v7 = CExperienceManagerAnimationHelper::End((CVirtualTouchpadExperienceManager *)((char *)this + 672));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2FF,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    v18[0] = 0LL;
    string = 0LL;
    v8 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v8 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           (__int64)string,
           (__int64 *)v18);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v17 = v18[0];
      if ( v18[0] )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v18[0] + 8LL))(v18[0]);
      *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *(_OWORD *)(*((_QWORD *)a2 + 6) + 8LL);
      v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v21, (const WCHAR **)&off_1802148A8);
      Windows::Internal::ShellHelpers::PropertySetHelper::SetGuid(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
        *(HSTRING *)(v10 + 24),
        (struct _GUID *)&hstringHeader);
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v21, (const WCHAR **)&off_1802148A8);
      v13 = CSingleViewShellExperience::Reactivate(
              (CVirtualTouchpadExperienceManager *)((char *)this + 56),
              *(HSTRING *)(v11 + 24),
              v18[0],
              v12);
      v6 = v13;
      if ( v13 >= 0 )
        v6 = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x308,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
      if ( v17 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x303,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    }
    v14 = v18[0];
    if ( v18[0] )
    {
      v18[0] = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2FB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  }
  return v6;
}
