/*
 * XREFs of ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180127238
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___1_long_::Invoke @ 0x180120B70 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_180120B70.c)
 * Callees:
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x180003CC8 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180005638 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18000A1F8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_K.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010804 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18006D050 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800F62AC (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param_ea_1800F62AC.c)
 *     ??0EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18011D6F4 (--0EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18011DAD4 (--1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18011DC74 (--4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x18011EC4C (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?SetSizeHintHeight@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@M@Z @ 0x180121694 (-SetSizeHintHeight@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Wi.c)
 *     ?SetSizeHintWidth@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@M@Z @ 0x180121734 (-SetSizeHintWidth@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Win.c)
 *     ?SetTargetViewMode@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4ApplicationViewMode@ViewManagement@UI@5@@Z @ 0x1801218A0 (-SetTargetViewMode@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Wi.c)
 *     ?StartActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAXPEBGW4CompactOverlayEnterStyle@@@Z @ 0x180122524 (-StartActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAXPEBGW4CompactOverla.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CAppViewManager::_ShowAsViewModeWorker(
        IUnknown **this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *a2,
        float a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  HWND v13; // r14
  HRESULT v14; // eax
  void *v15; // rbx
  int v16; // eax
  void *v17; // rbx
  int v18; // eax
  BOOL v19; // edi
  const WCHAR *Reserved1; // rbx
  int v21; // eax
  __int64 v22; // rdx
  bool v23; // di
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v24; // rdx
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  void *v28; // rdi
  _QWORD *v29; // rax
  _QWORD *v30; // rbx
  int v31; // eax
  void *ppvOut; // [rsp+48h] [rbp-C0h] BYREF
  CImmersiveApp *v34; // [rsp+50h] [rbp-B8h] BYREF
  void *v35; // [rsp+58h] [rbp-B0h] BYREF
  void *v36; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v38; // [rsp+70h] [rbp-98h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v39; // [rsp+78h] [rbp-90h] BYREF
  int v40; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v41; // [rsp+84h] [rbp-84h] BYREF
  int v42; // [rsp+88h] [rbp-80h] BYREF
  HWND v43[2]; // [rsp+90h] [rbp-78h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-68h] BYREF
  HSTRING v45; // [rsp+B8h] [rbp-50h]
  _QWORD v46[40]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v47[48]; // [rsp+208h] [rbp+100h] BYREF
  _DWORD *v48; // [rsp+238h] [rbp+130h]
  wil::details::in1diag3 *retaddr; // [rsp+380h] [rbp+278h]

  v43[1] = (HWND)-2LL;
  v39 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v39);
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v39);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = WindowFromViewWrapper(v39, (HWND *)&ppvOut);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 2013LL;
      goto LABEL_5;
    }
    v38 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v38);
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)a2 + 56LL))(
           a2,
           &v38);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 2017LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_63:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v38);
      goto LABEL_64;
    }
    v8 = WindowFromViewWrapper(v38, v43);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 2018LL;
      goto LABEL_16;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64 *))(*(_QWORD *)a2 + 64LL))(
           a2,
           &v37);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 2021LL;
      goto LABEL_16;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, unsigned int *))(*(_QWORD *)a2 + 72LL))(
           a2,
           &v41);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 2024LL;
      goto LABEL_16;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, int *))(*(_QWORD *)a2 + 80LL))(
           a2,
           &v42);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 2027LL;
      goto LABEL_16;
    }
    v34 = 0LL;
    v10 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v34);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 2031LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_62:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
      goto LABEL_63;
    }
    v45 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"ClientRequestedNavigationType",
      0x1Eu,
      0x1Du);
    v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v34,
            v45,
            v12,
            2u);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 2033LL;
      goto LABEL_21;
    }
    CAppViewManagerTelemetry::EnterCompactOverlayModeForView::EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v47);
    v13 = (HWND)ppvOut;
    if ( (_DWORD)v37 == 1 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v14 = IUnknown_QueryService(
              this[15],
              &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
              &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
              &ppvOut);
      v6 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7FA,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v14);
LABEL_43:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_61:
        CAppViewManagerTelemetry::EnterCompactOverlayModeForView::~EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v47);
        goto LABEL_62;
      }
      v35 = 0LL;
      v15 = ppvOut;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v35);
      v16 = (*(__int64 (__fastcall **)(void *, HWND, void **))(*(_QWORD *)v15 + 48LL))(v15, v13, &v35);
      v6 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7FD,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v16);
LABEL_42:
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v35);
        goto LABEL_43;
      }
      memset(&hstringHeader, 0, sizeof(hstringHeader));
      v17 = v35;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = -1LL;
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = -1LL;
      v18 = (*(__int64 (__fastcall **)(void *, HSTRING_HEADER *))(*(_QWORD *)v17 + 136LL))(v17, &hstringHeader);
      v6 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7FF,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v18);
LABEL_41:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
        goto LABEL_42;
      }
      v19 = v43[0] != v13;
      Reserved1 = (const WCHAR *)hstringHeader.Reserved.Reserved1;
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v46,
        (__int64)"EnterCompactOverlayModeForView");
      v46[0] = &CAppViewManagerTelemetry::EnterCompactOverlayModeForView::`vftable';
      CAppViewManagerTelemetry::EnterCompactOverlayModeForView::StartActivity((__int64)v46, Reserved1, !v19);
      CAppViewManagerTelemetry::EnterCompactOverlayModeForView::operator=((__int64)v47, (__int64)v46);
      CAppViewManagerTelemetry::EnterCompactOverlayModeForView::~EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v46);
      v36 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
      v21 = IUnknown_QueryService(
              this[15],
              &GUID_4d20c9ad_7836_4782_add6_8d92387ee831,
              &GUID_4d20c9ad_7836_4782_add6_8d92387ee831,
              &v36);
      v6 = v21;
      if ( v21 < 0 )
      {
        v22 = 2052LL;
LABEL_40:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v21);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
        goto LABEL_41;
      }
      v21 = (*(__int64 (__fastcall **)(void *, void *, BOOL, int *))(*(_QWORD *)v36 + 96LL))(v36, v35, v19, &v40);
      v6 = v21;
      if ( v21 < 0 )
      {
        v22 = 2055LL;
        goto LABEL_40;
      }
      v23 = v40 != 0;
      if ( v40 )
      {
        v21 = ViewModePreferencesHelpers::SetTargetViewMode(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v34,
                v37);
        v6 = v21;
        if ( v21 < 0 )
        {
          v22 = 2060LL;
          goto LABEL_40;
        }
        v21 = ViewModePreferencesHelpers::SetSizeHintWidth((ViewModePreferencesHelpers *)&v34, v24, a3);
        v6 = v21;
        if ( v21 < 0 )
        {
          v22 = 2061LL;
          goto LABEL_40;
        }
        v21 = ViewModePreferencesHelpers::SetSizeHintHeight((ViewModePreferencesHelpers *)&v34, v25, a3);
        v6 = v21;
        if ( v21 < 0 )
        {
          v22 = 2062LL;
          goto LABEL_40;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v35);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      if ( !v23 )
      {
        v26 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64))(*(_QWORD *)a2 + 88LL))(
                a2,
                1LL);
        v6 = v26;
        if ( v26 < 0 )
        {
          v27 = 2096LL;
LABEL_50:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v27,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v26);
          goto LABEL_61;
        }
LABEL_58:
        if ( *v48 == 1 )
          wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((CFramePresentationTelemetry::SetSystemVisual *)v47);
        v6 = 0;
        goto LABEL_61;
      }
    }
    else if ( !(_DWORD)v37 )
    {
      v26 = ViewModePreferencesHelpers::SetTargetViewMode((Windows::Internal::ShellHelpers::PropertySetHelper *)&v34, 0);
      v6 = v26;
      if ( v26 < 0 )
      {
        v27 = 2068LL;
        goto LABEL_50;
      }
    }
    v36 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v36);
    ppvOut = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&ppvOut);
    v28 = 0LL;
    v29 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v30 = v29;
    if ( v29 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v29);
      v30[2] = 0LL;
      if ( v30 + 2 != &ppvOut )
      {
        v30[2] = a2;
        ppvOut = 0LL;
      }
      *v30 = off_180325D08;
      v28 = v30;
    }
    v35 = v28;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v31 = CAppViewManager::_ShowViewAsyncWorker(
            (CAppViewManager *)this,
            v13,
            v43[0],
            v41,
            0,
            0LL,
            v34,
            (struct IAsyncCallback *)v28);
    if ( v31 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2092LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v31);
    Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    goto LABEL_58;
  }
  v7 = 2012LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_64:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v39);
  return v6;
}
