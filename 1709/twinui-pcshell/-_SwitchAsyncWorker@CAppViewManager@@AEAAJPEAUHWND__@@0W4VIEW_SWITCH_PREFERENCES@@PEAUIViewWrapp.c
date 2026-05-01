/*
 * XREFs of ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180041DB0
 * Callers:
 *     _lambda_3c4ff4ccd576f8db880f0fb482543cc9_::operator() @ 0x18003E8A0 (_lambda_3c4ff4ccd576f8db880f0fb482543cc9_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a__&___ptr64__1_long_::Invoke @ 0x180046B80 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_180046B80.c)
 * Callees:
 *     WPP_SF_ @ 0x180006B2C (WPP_SF_.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z @ 0x18003D68C (-SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x180041168 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180042C54 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N@Z @ 0x1800432FC (-_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@V.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180043538 (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x18004401C (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x1800446C8 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800460F0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPosit.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x180047E50 (-StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CAppViewManager::_SwitchAsyncWorker(
        CAppViewManager *a1,
        HWND a2,
        HWND a3,
        unsigned int a4,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a5,
        struct IAsyncCallback *a6)
{
  struct IAsyncCallback *v10; // rdi
  int v11; // ebx
  int v12; // r12d
  int v13; // esi
  struct IImmersiveApplicationInternal *v14; // rbx
  __int64 v15; // rdi
  __int64 *v16; // rax
  int v17; // eax
  struct Windows::Foundation::Collections::IPropertySet *v18; // rcx
  HRESULT v19; // eax
  int v20; // eax
  HRESULT v21; // eax
  int v22; // eax
  HRESULT v23; // eax
  HRESULT v24; // eax
  HRESULT v25; // eax
  struct Windows::Foundation::Collections::IPropertySet *v26; // rcx
  bool v28; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[7]; // [rsp+61h] [rbp-9Fh] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v30; // [rsp+68h] [rbp-98h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v31; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+78h] [rbp-88h] BYREF
  struct IAsyncCallback *v33; // [rsp+80h] [rbp-80h] BYREF
  struct IImmersiveApplicationInternal *v34; // [rsp+88h] [rbp-78h] BYREF
  CAppViewManager *v35; // [rsp+90h] [rbp-70h]
  _QWORD v36[3]; // [rsp+98h] [rbp-68h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING string; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING_HEADER v39; // [rsp+D0h] [rbp-30h] BYREF
  HSTRING v40; // [rsp+E8h] [rbp-18h] BYREF
  HSTRING_HEADER v41; // [rsp+F0h] [rbp-10h] BYREF
  HSTRING v42; // [rsp+108h] [rbp+8h] BYREF
  HSTRING_HEADER v43; // [rsp+110h] [rbp+10h] BYREF
  HSTRING v44; // [rsp+128h] [rbp+28h] BYREF
  HSTRING_HEADER v45; // [rsp+130h] [rbp+30h] BYREF
  HSTRING v46; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v47[4]; // [rsp+150h] [rbp+50h] BYREF
  int v48; // [rsp+170h] [rbp+70h]
  int *v49; // [rsp+178h] [rbp+78h]
  int *v50; // [rsp+180h] [rbp+80h]
  int v51; // [rsp+188h] [rbp+88h] BYREF
  char v52; // [rsp+18Ch] [rbp+8Ch]
  int v53; // [rsp+1B0h] [rbp+B0h] BYREF
  const char *v54; // [rsp+1B8h] [rbp+B8h]
  __int64 v55; // [rsp+1C0h] [rbp+C0h]
  char v56; // [rsp+1C8h] [rbp+C8h]
  __int64 v57; // [rsp+1D0h] [rbp+D0h]
  _BYTE v58[144]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v59; // [rsp+268h] [rbp+168h]
  __int64 v60; // [rsp+270h] [rbp+170h]
  __int64 v61; // [rsp+278h] [rbp+178h]
  __int64 v62; // [rsp+280h] [rbp+180h]

  v36[2] = -2LL;
  v35 = a1;
  v10 = a6;
  v33 = a6;
  v47[1] = 0LL;
  v47[2] = v47;
  v47[3] = 0LL;
  v48 = 0;
  v49 = &v53;
  v50 = &v51;
  v51 = 0;
  v52 = 0;
  v56 = 0;
  v53 = 0;
  v54 = "SwitchAsyncWorker";
  v55 = 0LL;
  v57 = 1LL;
  v59 = 0LL;
  v60 = 0LL;
  memset(v58, 0, sizeof(v58));
  v61 = 0LL;
  v62 = 0LL;
  v47[0] = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  CAppViewManagerTelemetry::SwitchAsyncWorker::StartActivity((CAppViewManagerTelemetry::SwitchAsyncWorker *)v47);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v28 = 0;
  v11 = CAppViewManager::_EvaluateFrameworkViewTypeForSwitchHelper(a1, a2, a3, a5, &v28);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v11 >= 0
    && v28
    && (int)CAppViewManager::_ShowViewAsyncWorker(a1, a3, a2, 0, 0, 0, 0, 0.0, 0.0, 0LL, 0LL, 0LL) >= 0 )
  {
    a4 |= 2u;
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v34 = 0LL;
  v36[1] = 0LL;
  v36[0] = a3;
  v12 = CAppViewManager::_PrepareToSwitchHelper(a1, a2, a3, a4, v36, &v34, &v28, v29);
  v13 = 0;
  v32 = 0;
  v14 = v34;
  if ( v12 == 1 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_dd55687d9f3130295d495cf49017a234_Traceguids);
    v13 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, HWND, __int64, bool))(*(_QWORD *)v14 + 112LL))(
            v14,
            a3,
            2LL,
            (a4 & 1) == 0);
    if ( v13 < 0 )
      goto LABEL_16;
    if ( a6 )
    {
      v31 = 0LL;
      v15 = *(_QWORD *)v14;
      v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v31);
      v17 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *))(v15 + 352))(
              v14,
              3LL,
              &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
              v16);
      v10 = v33;
      if ( v17 >= 0 )
        v13 = CAppViewManager::_AddPresentedWindowCallbackTrigger(v35, 2LL, v14, a3, v33, &v32);
      v18 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    if ( v13 < 0 )
LABEL_16:
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, HWND, _QWORD))(*(_QWORD *)v14 + 224LL))(
        v14,
        a3,
        0LL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v12 >= 0 && v28 )
  {
    v31 = 0LL;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::GetCachedFeatureEnabledState();
    LODWORD(v30) = 0;
    BYTE4(v30) = 3;
    LODWORD(v33) = 0;
    WORD2(v33) = WORD2(v30);
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::GetFeaturePropertyCache'::`2'::data,
      0x92369Cu,
      (const struct FEATURE_LOGGED_TRAITS *)&v33,
      1,
      3);
    string = 0LL;
    v19 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v19 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
      __debugbreak();
    }
    v20 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            string,
            &v31);
    string = 0LL;
    if ( v20 < 0 )
      goto LABEL_44;
    v30 = v31;
    if ( v31 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v31 + 8LL))(v31);
    v40 = 0LL;
    v21 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &v39, &v40);
    if ( v21 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
    v22 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
            v40,
            1u);
    v40 = 0LL;
    if ( a2 && v22 >= 0 )
    {
      v42 = 0LL;
      v23 = WindowsCreateStringReference(L"SwitchAsync_IdFrom", 0x12u, &v41, &v42);
      if ( v23 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
      v22 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
              v42,
              (unsigned int)a2);
      v42 = 0LL;
    }
    if ( a3 )
    {
      if ( v22 < 0 )
      {
LABEL_42:
        if ( v30 )
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v30 + 16LL))(v30);
LABEL_44:
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[19].Ptr);
        CAppViewManager::_TrySwitchToApplication(v35, v14, v31);
        v26 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v26 + 16LL))(v26);
        }
        goto LABEL_46;
      }
      v44 = 0LL;
      v24 = WindowsCreateStringReference(L"SwitchAsync_IdTo", 0x10u, &v43, &v44);
      if ( v24 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24);
      v22 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
              v44,
              (unsigned int)a3);
      v44 = 0LL;
    }
    if ( v22 >= 0 )
    {
      v46 = 0LL;
      v25 = WindowsCreateStringReference(L"SwitchAsync_vsp", 0xFu, &v45, &v46);
      if ( v25 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25);
      Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
        v46,
        a4);
      v46 = 0LL;
    }
    goto LABEL_42;
  }
LABEL_46:
  if ( v12 < 0 )
    v13 = v12;
  if ( v10 && !v32 )
    CAppViewManager::_s_QueueCallback(v14, v10, v13);
  if ( v13 >= 0 )
    v13 = v29[0] != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v47, v13);
  if ( v14 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 16LL))(v14);
  v47[0] = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v47);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v47);
  return (unsigned int)v13;
}
