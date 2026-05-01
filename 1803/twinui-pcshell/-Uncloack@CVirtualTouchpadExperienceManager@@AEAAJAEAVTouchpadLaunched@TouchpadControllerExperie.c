/*
 * XREFs of ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x18018357C
 * Callers:
 *     ?OnViewShown@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180182150 (-OnViewShown@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180018630 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x18006CA90 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x180076654 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180086288 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x180180D48 (-AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManage.c)
 *     ?get@?$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadControllerExperienceManagerLogging@@P6AXXZ@Z @ 0x180183A9C (-get@-$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadCo.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualTouchpadExperienceManager::Uncloack(
        CVirtualTouchpadExperienceManager *this,
        struct TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *a2)
{
  __int64 v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  __int128 v15; // xmm6
  __int64 v16; // rax
  UAPViewWrapper *v17; // r8
  __int64 v18; // rax
  int v19; // eax
  HSTRING v21; // [rsp+48h] [rbp-49h] BYREF
  __int64 v22[2]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v23[40]; // [rsp+60h] [rbp-31h] BYREF
  HSTRING_HEADER pData; // [rsp+88h] [rbp-9h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v22[1] = -2LL;
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<TouchpadControllerExperienceManagerLogging>::get(
                                           this,
                                           lambda_fcbe7e8e9d69bc7433d8ee1b3dc43461_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 > 5u && TlgKeywordOn(v5, 0x400000000000uLL) )
    TlgWrite(v5, &unk_180390607, (LPCGUID)(*((_QWORD *)a2 + 6) + 8LL), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
  wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService((__int64)v5, v4, v6);
  v7 = CVirtualTouchpadExperienceManager::AnimateFrame((__int64)this, 0, (__int64)this + 672);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      760LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 43) + 40LL))(*((_QWORD *)this + 43), 0LL);
  v12 = v8;
  if ( v8 >= 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService(v10, v9, v11);
    v13 = CExperienceManagerAnimationHelper::End((CVirtualTouchpadExperienceManager *)((char *)this + 672));
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        767LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    v21 = 0LL;
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &pData,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v14 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v25,
            (__int64 *)&v21);
    v12 = v14;
    if ( v14 >= 0 )
    {
      v22[0] = (__int64)v21;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v22);
      v15 = *(_OWORD *)(*((_QWORD *)a2 + 6) + 8LL);
      v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, (const WCHAR **)&off_18034C588);
      *(_OWORD *)&pData.Reserved.Reserved1 = v15;
      Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)v22,
        *(HSTRING *)(v16 + 24),
        v17,
        (__int128 *)&pData);
      v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, (const WCHAR **)&off_18034C588);
      v19 = ExperienceManagerUtils::RaiseReactivatedEvent(
              *((ExperienceManagerUtils **)this + 10),
              (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 46),
              *((HSTRING *)this + 8),
              *((HSTRING *)this + 9),
              *(HSTRING *)(v18 + 24),
              v21);
      v12 = v19;
      if ( v19 >= 0 )
        v12 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x308,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
          (const char *)(unsigned int)v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x303,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  }
  return v12;
}
