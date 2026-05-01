/*
 * XREFs of ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800423A0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___1_long_::Invoke @ 0x180046C80 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_180046C80.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z @ 0x18003D68C (-SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x18003DA38 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x180041168 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?StartActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAXPEBGW4CompactOverlayEnterStyle@@@Z @ 0x1800470EC (-StartActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAXPEBGW4CompactOverla.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800491CC (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180049650 (--4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180049860 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180049A78 (--1-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAppViewManager::_ShowAsViewModeWorker(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  HWND v9; // r15
  HWND v10; // r12
  IUnknown *v11; // rbx
  __int64 *v12; // rax
  HRESULT Service; // eax
  int v14; // eax
  int v15; // eax
  HRESULT v16; // eax
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v20; // rcx
  bool v21; // bl
  void *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  HRESULT v26; // eax
  int v27; // eax
  HRESULT v28; // eax
  int v29; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v30; // rsi
  struct IAsyncCallback *v31; // rbx
  struct IAsyncCallback *v32; // rax
  struct IAsyncCallback *v33; // rdi
  int v34; // eax
  struct Windows::Foundation::Collections::IPropertySet *v35; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v36; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v37; // rcx
  __int64 v39; // [rsp+68h] [rbp-A0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v40; // [rsp+70h] [rbp-98h] BYREF
  void *ppvOut; // [rsp+78h] [rbp-90h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v42; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v43; // [rsp+88h] [rbp-80h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v44; // [rsp+90h] [rbp-78h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v45; // [rsp+98h] [rbp-70h] BYREF
  LPVOID pv; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  int v49; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v50; // [rsp+BCh] [rbp-4Ch] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v51; // [rsp+C0h] [rbp-48h] BYREF
  float v52[2]; // [rsp+C8h] [rbp-40h] BYREF
  HWND v53; // [rsp+D0h] [rbp-38h] BYREF
  HWND v54; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v55[5]; // [rsp+E0h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+108h] [rbp+0h] BYREF
  HSTRING string; // [rsp+120h] [rbp+18h] BYREF
  HSTRING_HEADER v58; // [rsp+128h] [rbp+20h] BYREF
  HSTRING v59; // [rsp+140h] [rbp+38h] BYREF
  _QWORD v60[4]; // [rsp+148h] [rbp+40h] BYREF
  int v61; // [rsp+168h] [rbp+60h]
  int *v62; // [rsp+170h] [rbp+68h]
  int *v63; // [rsp+178h] [rbp+70h]
  int v64; // [rsp+180h] [rbp+78h] BYREF
  char v65; // [rsp+184h] [rbp+7Ch]
  int v66; // [rsp+1A8h] [rbp+A0h] BYREF
  const char *v67; // [rsp+1B0h] [rbp+A8h]
  __int64 v68; // [rsp+1B8h] [rbp+B0h]
  char v69; // [rsp+1C0h] [rbp+B8h]
  __int64 v70; // [rsp+1C8h] [rbp+C0h]
  _BYTE v71[144]; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v72; // [rsp+260h] [rbp+158h]
  __int64 v73; // [rsp+268h] [rbp+160h]
  __int64 v74; // [rsp+270h] [rbp+168h]
  __int64 v75; // [rsp+278h] [rbp+170h]
  _QWORD v76[4]; // [rsp+288h] [rbp+180h] BYREF
  int v77; // [rsp+2A8h] [rbp+1A0h]
  int *v78; // [rsp+2B0h] [rbp+1A8h]
  int *v79; // [rsp+2B8h] [rbp+1B0h]
  int v80; // [rsp+2C0h] [rbp+1B8h] BYREF
  char v81; // [rsp+2C4h] [rbp+1BCh]
  int v82; // [rsp+2E8h] [rbp+1E0h] BYREF
  const char *v83; // [rsp+2F0h] [rbp+1E8h]
  __int64 v84; // [rsp+2F8h] [rbp+1F0h]
  char v85; // [rsp+300h] [rbp+1F8h]
  __int64 v86; // [rsp+308h] [rbp+200h]
  _BYTE v87[144]; // [rsp+310h] [rbp+208h] BYREF
  __int64 v88; // [rsp+3A0h] [rbp+298h]
  __int64 v89; // [rsp+3A8h] [rbp+2A0h]
  __int64 v90; // [rsp+3B0h] [rbp+2A8h]
  __int64 v91; // [rsp+3B8h] [rbp+2B0h]
  wil::details::in1diag3 *retaddr; // [rsp+410h] [rbp+308h]

  v55[1] = -2LL;
  v45 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v45);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1715LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_84;
  }
  v4 = WindowFromViewWrapper(v45, &v53);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1716LL;
    goto LABEL_5;
  }
  v44 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)a2 + 56LL))(
         a2,
         &v44);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 1720LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_82;
  }
  v7 = WindowFromViewWrapper(v44, &v54);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 1721LL;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, unsigned int *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v43);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 1724LL;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, unsigned int *))(*(_QWORD *)a2 + 72LL))(
         a2,
         &v50);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 1727LL;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, float *))(*(_QWORD *)a2 + 80LL))(
         a2,
         v52);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 1730LL;
    goto LABEL_16;
  }
  v60[1] = 0LL;
  v60[2] = v60;
  v60[3] = 0LL;
  v61 = 0;
  v62 = &v66;
  v63 = &v64;
  v64 = 0;
  v65 = 0;
  v69 = 0;
  v66 = 0;
  v67 = "EnterCompactOverlayModeForView";
  v68 = 0LL;
  v70 = 1LL;
  v72 = 0LL;
  v73 = 0LL;
  memset(v71, 0, sizeof(v71));
  v74 = 0LL;
  v75 = 0LL;
  v60[0] = &CAppViewManagerTelemetry::EnterCompactOverlayModeForView::`vftable';
  v9 = v53;
  v10 = v54;
  if ( v43 == 1 )
  {
    v42 = 0LL;
    v11 = (IUnknown *)*((_QWORD *)this + 16);
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v42);
    Service = IUnknown_QueryService(
                v11,
                &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
                &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
                (void **)v12);
    v5 = Service;
    if ( Service < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6CB,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)Service);
      goto LABEL_35;
    }
    v39 = 0LL;
    v14 = (*(__int64 (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *, HWND, __int64 *))(*(_QWORD *)v42 + 48LL))(
            v42,
            v9,
            &v39);
    v5 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6CE,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_33:
      v19 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
LABEL_35:
      v20 = v42;
      if ( v42 )
      {
        v42 = 0LL;
LABEL_61:
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v20 + 16LL))(v20);
        goto LABEL_81;
      }
      goto LABEL_81;
    }
    pv = 0LL;
    v47 = -1LL;
    v48 = -1LL;
    v15 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v39 + 112LL))(v39, &pv);
    v5 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6D0,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v15);
LABEL_30:
      if ( pv )
      {
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v47 = 0LL;
      v48 = 0LL;
      goto LABEL_33;
    }
    v76[1] = 0LL;
    v76[2] = v76;
    v76[3] = 0LL;
    v77 = 0;
    v78 = &v82;
    v79 = &v80;
    v80 = 0;
    v81 = 0;
    v85 = 0;
    v82 = 0;
    v83 = "EnterCompactOverlayModeForView";
    v84 = 0LL;
    v86 = 1LL;
    v88 = 0LL;
    v89 = 0LL;
    memset(v87, 0, sizeof(v87));
    v90 = 0LL;
    v91 = 0LL;
    v76[0] = &CAppViewManagerTelemetry::EnterCompactOverlayModeForView::`vftable';
    CAppViewManagerTelemetry::EnterCompactOverlayModeForView::StartActivity(v76, pv, v10 == v9);
    CAppViewManagerTelemetry::EnterCompactOverlayModeForView::operator=(v60, v76);
    v76[0] = &CAppViewManagerTelemetry::EnterCompactOverlayModeForView::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v76);
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v76);
    ppvOut = 0LL;
    v16 = IUnknown_QueryService(
            *((IUnknown **)this + 16),
            &GUID_4d20c9ad_7836_4782_add6_8d92387ee831,
            &GUID_4d20c9ad_7836_4782_add6_8d92387ee831,
            &ppvOut);
    v5 = v16;
    if ( v16 < 0 )
    {
      v17 = 1749LL;
      goto LABEL_28;
    }
    v16 = (*(__int64 (__fastcall **)(void *, __int64, bool, int *))(*(_QWORD *)ppvOut + 80LL))(
            ppvOut,
            v39,
            v10 != v9,
            &v49);
    v5 = v16;
    if ( v16 < 0 )
    {
      v17 = 1752LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v16);
      v18 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_30;
    }
    v21 = v49 != 0;
    v22 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v47 = 0LL;
    v48 = 0LL;
    v23 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = (__int64)v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( !v21 )
    {
      v25 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64))(*(_QWORD *)a2 + 88LL))(
              a2,
              1LL);
      v5 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x701,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v25);
        goto LABEL_81;
      }
LABEL_78:
      if ( *v63 == 1 )
        wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v60);
      v5 = 0;
      goto LABEL_81;
    }
  }
  v40 = 0LL;
  string = 0LL;
  v26 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v26 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26);
    __debugbreak();
  }
  v27 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          string,
          &v40);
  v5 = v27;
  string = 0LL;
  if ( v27 >= 0 )
  {
    v51 = v40;
    if ( v40 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v40 + 8LL))(v40);
    v59 = 0LL;
    v28 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &v58, &v59);
    if ( v28 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v28);
    v29 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v51,
            v59,
            2u);
    v5 = v29;
    v59 = 0LL;
    if ( v29 >= 0 )
    {
      v55[2] = a2;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)a2 + 8LL))(a2);
      v30 = a2;
      v55[0] = a2;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)a2 + 8LL))(a2);
      v31 = 0LL;
      v55[3] = 0LL;
      v32 = (struct IAsyncCallback *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v33 = v32;
      if ( v32 )
      {
        *((_DWORD *)v32 + 3) = 1;
        *(_QWORD *)v32 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *((_QWORD *)v33 + 2) = 0LL;
        if ( (_QWORD *)((char *)v33 + 16) != v55 )
        {
          *((_QWORD *)v33 + 2) = a2;
          v30 = 0LL;
        }
        *(_QWORD *)v33 = off_1801FC630;
        v31 = v33;
      }
      v55[4] = v31;
      if ( v30 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)v30 + 16LL))(v30);
      v34 = CAppViewManager::_ShowViewAsyncWorker(this, v9, v10, v50, 0, 1, v43, v52[0], v52[1], 0LL, v40, v31);
      if ( v34 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6FD,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v34);
      if ( v31 )
        (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v31 + 16LL))(v31);
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)a2 + 16LL))(a2);
      if ( v51 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v51 + 16LL))(v51);
      v35 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v35 + 16LL))(v35);
      }
      goto LABEL_78;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6E4,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v29);
    if ( v51 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v51 + 16LL))(v51);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6E1,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v27);
  }
  v20 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    goto LABEL_61;
  }
LABEL_81:
  v60[0] = &CAppViewManagerTelemetry::EnterCompactOverlayModeForView::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v60);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v60);
LABEL_82:
  v36 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v36 + 16LL))(v36);
  }
LABEL_84:
  v37 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v37 + 16LL))(v37);
  }
  return v5;
}
