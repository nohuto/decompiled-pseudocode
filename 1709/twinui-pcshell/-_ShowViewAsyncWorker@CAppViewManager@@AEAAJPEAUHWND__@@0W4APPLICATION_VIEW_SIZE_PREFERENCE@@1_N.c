/*
 * XREFs of ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x180041168
 * Callers:
 *     _lambda_2e7b32d2edc288bf881b316e628c52db_::operator() @ 0x18003E2C0 (_lambda_2e7b32d2edc288bf881b316e628c52db_--operator().c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180041DB0 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800423A0 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_4d3db48dcfcb6d65bc97b5eb3c36596d__&___ptr64__1_long_::Invoke @ 0x180046C00 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_180046C00.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x180006B2C (WPP_SF_.c)
 *     WPP_SF_d @ 0x180006C40 (WPP_SF_d.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     WPP_SF_ll @ 0x18003D0CC (WPP_SF_ll.c)
 *     WPP_SF_qqLL @ 0x18003D17C (WPP_SF_qqLL.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003D338 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ?SetSingle@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@M@Z @ 0x18003D4E4 (-SetSingle@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@M@Z.c)
 *     ?SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z @ 0x18003D68C (-SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJPEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18003D94C (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJPEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180043538 (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180043660 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x18004401C (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x1800446C8 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18004521C (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1800480E0 (-StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CAppViewManager::_ShowViewAsyncWorker(
        CAppViewManager *a1,
        HWND a2,
        HWND a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        unsigned int a7,
        float a8,
        float a9,
        __int64 a10,
        struct Windows::Foundation::Collections::IPropertySet *a11,
        struct IAsyncCallback *a12)
{
  char v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  struct IImmersiveApplicationInternal *v19; // rbx
  bool v20; // r12
  CAppViewManager *v21; // rcx
  int GlomForWindow; // esi
  struct IImmersiveApplicationInternal *v23; // rdi
  bool v24; // r15
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  struct IImmersiveApplicationInternal *v28; // rcx
  __int64 v29; // rsi
  int v30; // eax
  char v31; // r14
  struct Windows::Foundation::Collections::IPropertySet *v32; // rcx
  bool v33; // r12
  HRESULT v34; // eax
  HRESULT v35; // eax
  int v36; // eax
  HRESULT v37; // eax
  int v38; // eax
  HRESULT v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  HRESULT v42; // eax
  HRESULT v43; // eax
  int v44; // eax
  CAppViewManager *v45; // r14
  unsigned int v46; // r14d
  struct IAsyncCallback *v47; // r15
  CAppViewManager *v48; // r15
  int v49; // r14d
  unsigned int v50; // r14d
  void *v51; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v52; // rcx
  struct IImmersiveApplicationInternal *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v57[2]; // [rsp+20h] [rbp-E0h]
  int v58[2]; // [rsp+20h] [rbp-E0h]
  bool v59; // [rsp+40h] [rbp-C0h] BYREF
  bool v60; // [rsp+41h] [rbp-BFh] BYREF
  char v61; // [rsp+42h] [rbp-BEh]
  struct IImmersiveApplicationInternal *v62; // [rsp+48h] [rbp-B8h] BYREF
  CAppViewManager *v63; // [rsp+50h] [rbp-B0h]
  void *ppvOut; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v65; // [rsp+60h] [rbp-A0h] BYREF
  int v66; // [rsp+64h] [rbp-9Ch]
  struct Windows::Foundation::Collections::IPropertySet *v67; // [rsp+68h] [rbp-98h] BYREF
  __int64 v68; // [rsp+70h] [rbp-90h] BYREF
  __int64 v69; // [rsp+78h] [rbp-88h] BYREF
  HWND v70; // [rsp+80h] [rbp-80h]
  struct IImmersiveApplicationInternal *v71; // [rsp+88h] [rbp-78h] BYREF
  struct IImmersiveApplicationInternal *v72; // [rsp+90h] [rbp-70h] BYREF
  struct IAsyncCallback *v73; // [rsp+98h] [rbp-68h]
  __int64 v74; // [rsp+A0h] [rbp-60h]
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING string; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING_HEADER v77; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING v78; // [rsp+E0h] [rbp-20h] BYREF
  HSTRING_HEADER v79; // [rsp+E8h] [rbp-18h] BYREF
  HSTRING v80; // [rsp+100h] [rbp+0h] BYREF
  HSTRING_HEADER v81; // [rsp+108h] [rbp+8h] BYREF
  HSTRING v82; // [rsp+120h] [rbp+20h] BYREF
  HSTRING_HEADER v83; // [rsp+128h] [rbp+28h] BYREF
  HSTRING v84; // [rsp+140h] [rbp+40h] BYREF
  HSTRING_HEADER v85; // [rsp+148h] [rbp+48h] BYREF
  HSTRING v86; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v87[4]; // [rsp+170h] [rbp+70h] BYREF
  int v88; // [rsp+190h] [rbp+90h]
  int *v89; // [rsp+198h] [rbp+98h]
  int *v90; // [rsp+1A0h] [rbp+A0h]
  int v91; // [rsp+1A8h] [rbp+A8h] BYREF
  char v92; // [rsp+1ACh] [rbp+ACh]
  int v93; // [rsp+1D0h] [rbp+D0h] BYREF
  const char *v94; // [rsp+1D8h] [rbp+D8h]
  __int64 v95; // [rsp+1E0h] [rbp+E0h]
  char v96; // [rsp+1E8h] [rbp+E8h]
  __int64 v97; // [rsp+1F0h] [rbp+F0h]
  _BYTE v98[144]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v99; // [rsp+288h] [rbp+188h]
  __int64 v100; // [rsp+290h] [rbp+190h]
  __int64 v101; // [rsp+298h] [rbp+198h]
  __int64 v102; // [rsp+2A0h] [rbp+1A0h]
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  v74 = -2LL;
  v65 = a4;
  v70 = a2;
  v63 = a1;
  v73 = a12;
  v87[1] = 0LL;
  v87[2] = v87;
  v87[3] = 0LL;
  v88 = 0;
  v89 = &v93;
  v90 = &v91;
  v91 = 0;
  v92 = 0;
  v96 = 0;
  v93 = 0;
  v94 = "ShowViewAsyncWorker";
  v95 = 0LL;
  v97 = 1LL;
  v99 = 0LL;
  v100 = 0LL;
  memset(v98, 0, sizeof(v98));
  v101 = 0LL;
  v102 = 0LL;
  v87[0] = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  CAppViewManagerTelemetry::ShowViewAsyncWorker::StartActivity((CAppViewManagerTelemetry::ShowViewAsyncWorker *)v87);
  if ( !a10 && !a6 || (v16 = 1, a2 != a3) )
    v16 = 0;
  v69 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))a1 + 16))(
    *((_QWORD *)a1 + 16),
    &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
    &v69);
  v68 = 0LL;
  (*(void (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v69 + 24LL))(
    v69,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &v68);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 40LL))(v68);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_qqLL(*((_QWORD *)WPP_GLOBAL_Control + 2), v17, v18, a2, a3, a4, a5);
  v19 = 0LL;
  v72 = 0LL;
  v62 = 0LL;
  v71 = 0LL;
  v61 = 0;
  v20 = 0;
  v60 = 0;
  v59 = 0;
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a3, &v71, &v59);
  v23 = v71;
  v24 = v59;
  if ( GlomForWindow >= 0 )
  {
    if ( v16 && !v59 )
      LODWORD(a3) = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v71 + 384LL))(v71);
    GlomForWindow = CAppViewManager::_GetGlomForWindow(v63, v70, &v72, &v60);
    v19 = v72;
    v20 = v60;
  }
  v59 = 1;
  v66 = 0;
  if ( GlomForWindow < 0 )
    goto LABEL_43;
  if ( v24 || v16 )
  {
    if ( CAppViewManager::_IsMultiViewOperationAllowed(v21, v19) )
      goto LABEL_23;
    v59 = 0;
    v66 = -2147024891;
    v25 = WPP_GLOBAL_Control;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_dd55687d9f3130295d495cf49017a234_Traceguids);
      goto LABEL_23;
    }
  }
  else
  {
    v59 = 0;
    v66 = 1;
    v25 = WPP_GLOBAL_Control;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v57[0] = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v23 + 416LL))(v23);
      WPP_SF_ll(*((_QWORD *)WPP_GLOBAL_Control + 2), v26, v27, 0, *(_QWORD *)v57);
LABEL_23:
      v25 = WPP_GLOBAL_Control;
    }
  }
  if ( v59 )
  {
    v28 = v62;
    if ( v20 )
    {
      if ( v62 != v19 )
      {
        if ( v19 )
        {
          (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v19 + 8LL))(v19);
          v28 = v62;
          v25 = WPP_GLOBAL_Control;
        }
        v62 = v19;
        if ( v28 )
        {
          (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v28 + 16LL))(v28);
          v25 = WPP_GLOBAL_Control;
        }
      }
      if ( (*((_BYTE *)v25 + 28) & 1) != 0 && *((_BYTE *)v25 + 25) >= 4u )
        WPP_SF_(v25[2], 0xDu, &WPP_dd55687d9f3130295d495cf49017a234_Traceguids);
    }
    else
    {
      v29 = *((_QWORD *)v63 + 16);
      if ( v62 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v28 + 16LL))(v28);
      }
      v30 = (*(__int64 (__fastcall **)(__int64, HWND, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal **))(*(_QWORD *)v29 + 80LL))(
              v29,
              v70,
              v19,
              &v62);
      GlomForWindow = v30;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_dd55687d9f3130295d495cf49017a234_Traceguids, v30);
      if ( GlomForWindow < 0 )
        goto LABEL_43;
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64))(*(_QWORD *)v62 + 368LL))(v62, 2LL);
      v61 = 1;
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v23 + 416LL))(v23) )
    {
      v31 = 1;
      goto LABEL_44;
    }
  }
LABEL_43:
  v31 = 0;
LABEL_44:
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v32 = a11;
  v67 = a11;
  if ( a11 )
  {
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a11 + 8LL))(a11);
    v32 = v67;
  }
  v33 = v59;
  if ( GlomForWindow >= 0 && v59 )
  {
    if ( !v32 )
    {
      string = 0LL;
      v34 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
      if ( v34 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v34);
        __debugbreak();
      }
      GlomForWindow = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
                        string,
                        &v67);
      string = 0LL;
      v32 = v67;
    }
    if ( GlomForWindow >= 0 )
    {
      ppvOut = v32;
      if ( v32 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v32 + 8LL))(v32);
      GlomForWindow = ViewSizePreferenceHelpers::SetSourceViewSizePreference(
                        (Windows::Internal::ShellHelpers::PropertySetHelper *)&ppvOut,
                        (unsigned int)a3,
                        a5);
      if ( GlomForWindow < 0 )
        goto LABEL_83;
      v78 = 0LL;
      v35 = WindowsCreateStringReference(L"ViewSizePreferences.TargetViewSizePreference", 0x2Cu, &v77, &v78);
      if ( v35 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v35);
      v36 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&ppvOut,
              v78,
              v65);
      GlomForWindow = v36;
      v78 = 0LL;
      if ( v36 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x22,
          (__int64)"internal\\shell\\private\\inc\\viewsizepreference_propertyset.h",
          (const char *)(unsigned int)v36);
      if ( GlomForWindow < 0 )
        goto LABEL_83;
      if ( a10 )
      {
        v80 = 0LL;
        v37 = WindowsCreateStringReference(L"AppActivationResponse", 0x15u, &v79, &v80);
        if ( v37 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v37);
        v38 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&ppvOut,
                v80,
                1);
        GlomForWindow = v38;
        v80 = 0LL;
        if ( v38 >= 0 )
          GlomForWindow = 0;
        else
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xBC,
            (__int64)"internal\\shell\\private\\inc\\positionerpropertysethelpers.h",
            (const char *)(unsigned int)v38);
      }
      if ( GlomForWindow < 0 || !a6 )
        goto LABEL_83;
      v82 = 0LL;
      v39 = WindowsCreateStringReference(L"ViewModePreferences.ViewMode", 0x1Cu, &v81, &v82);
      if ( v39 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v39);
      v40 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&ppvOut,
              v82,
              a7);
      GlomForWindow = v40;
      v82 = 0LL;
      if ( v40 >= 0 )
      {
        v84 = 0LL;
        v42 = WindowsCreateStringReference(L"ViewModePreferences.SizeHintWidth", 0x21u, &v83, &v84);
        if ( v42 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v42);
        v40 = Windows::Internal::ShellHelpers::PropertySetHelper::SetSingle(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&ppvOut,
                v84,
                a8);
        GlomForWindow = v40;
        v84 = 0LL;
        if ( v40 >= 0 )
          goto LABEL_78;
        v41 = 19LL;
      }
      else
      {
        v41 = 14LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v41,
        (__int64)"internal\\shell\\private\\inc\\viewmodepreferences_propertyset.h",
        (const char *)(unsigned int)v40);
LABEL_78:
      if ( GlomForWindow >= 0 )
      {
        v86 = 0LL;
        v43 = WindowsCreateStringReference(L"ViewModePreferences.SizeHintHeight", 0x22u, &v85, &v86);
        if ( v43 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v43);
        v44 = Windows::Internal::ShellHelpers::PropertySetHelper::SetSingle(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&ppvOut,
                v86,
                a9);
        GlomForWindow = v44;
        v86 = 0LL;
        if ( v44 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x18,
            (__int64)"internal\\shell\\private\\inc\\viewmodepreferences_propertyset.h",
            (const char *)(unsigned int)v44);
      }
LABEL_83:
      if ( ppvOut )
        (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 16LL))(ppvOut);
      if ( GlomForWindow >= 0 )
      {
        if ( v31 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[19].Ptr);
        v45 = v63;
        if ( v61 )
          GlomForWindow = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct Windows::Foundation::Collections::IPropertySet *))(**((_QWORD **)v63 + 16) + 144LL))(
                            *((_QWORD *)v63 + 16),
                            v62,
                            v67);
        if ( GlomForWindow >= 0 )
          GlomForWindow = CAppViewManager::_TrySwitchToApplication(v45, v62, v67);
      }
    }
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v46 = 0;
  v65 = 0;
  if ( GlomForWindow < 0 )
  {
    if ( v62 && v19 && v19 != v62 )
      (*(void (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)v63 + 16) + 96LL))(
        *((_QWORD *)v63 + 16),
        v62,
        v19,
        0LL);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        &WPP_dd55687d9f3130295d495cf49017a234_Traceguids,
        GlomForWindow);
    goto LABEL_104;
  }
  if ( !v33
    || (v47 = v73) == 0LL
    || !(*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v62 + 472LL))(v62) )
  {
LABEL_104:
    v48 = v63;
    goto LABEL_105;
  }
  *(_QWORD *)v58 = v47;
  v48 = v63;
  GlomForWindow = CAppViewManager::_AddPresentedWindowCallbackTrigger(v63, 1LL, v62, v70, *(_QWORD *)v58, &v65);
  v46 = v65;
LABEL_105:
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v73 && !v46 )
  {
    v49 = v66;
    if ( GlomForWindow < 0 )
      v49 = GlomForWindow;
    CAppViewManager::_s_QueueCallback(v23, v73, v49);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, &WPP_dd55687d9f3130295d495cf49017a234_Traceguids, v49);
  }
  v50 = v33;
  if ( GlomForWindow < 0 )
    v50 = GlomForWindow;
  if ( a10 )
  {
    ppvOut = 0LL;
    if ( IUnknown_QueryService(
           *((IUnknown **)v48 + 16),
           &SID_ViewEventDispatcher,
           &GUID_f36451a9_014a_43ea_9492_ff81c012e15f,
           &ppvOut) >= 0 )
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 56LL))(ppvOut, a10);
    v51 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v51 + 16LL))(v51);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v87, v50);
  v52 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v52 + 16LL))(v52);
  }
  if ( v23 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v23 + 16LL))(v23);
  v53 = v62;
  if ( v62 )
  {
    v62 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v53 + 16LL))(v53);
  }
  if ( v19 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v19 + 16LL))(v19);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 48LL))(v68);
  v54 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  }
  v55 = v69;
  if ( v69 )
  {
    v69 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  }
  v87[0] = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v87);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v87);
  return v50;
}
