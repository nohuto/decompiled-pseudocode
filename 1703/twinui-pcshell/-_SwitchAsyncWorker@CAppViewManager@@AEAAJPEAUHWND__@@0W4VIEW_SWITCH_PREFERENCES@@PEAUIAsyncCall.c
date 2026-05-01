/*
 * XREFs of ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180040140
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_a2ae839437c916c2354fd63e03dea370__&___ptr64_1__1_::Invoke @ 0x180044BA0 (Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_a2ae839437c916c2354fd63e03dea370__-.c)
 *     Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_5c0a758f57e829e2a3714a928ba33c70__&___ptr64_1__1_::Invoke @ 0x180044E30 (Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_5c0a758f57e829e2a3714a928ba33c70__-.c)
 * Callees:
 *     WPP_SF_ @ 0x180006A8C (WPP_SF_.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z @ 0x18003C58C (-SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180040B88 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800411BC (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180041C6C (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x1800422CC (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180043C50 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPosit.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043D94 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$Start@$$V@SwitchAsyncWorker@CAppViewManagerTelemetry@@SA?AV01@XZ @ 0x1800445C4 (--$Start@$$V@SwitchAsyncWorker@CAppViewManagerTelemetry@@SA-AV01@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CAppViewManager::_SwitchAsyncWorker(
        CAppViewManager *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        struct IAsyncCallback *a5)
{
  int v9; // esi
  int v10; // r12d
  int v11; // edi
  struct IImmersiveApplicationInternal *v12; // rbx
  __int64 v13; // rdi
  __int64 *v14; // rax
  struct Windows::Foundation::Collections::IPropertySet *v15; // rcx
  HRESULT v16; // eax
  int v17; // eax
  HRESULT v18; // eax
  int v19; // eax
  HRESULT v20; // eax
  HRESULT v21; // eax
  HRESULT v22; // eax
  struct Windows::Foundation::Collections::IPropertySet *v23; // rcx
  char v25; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v26[7]; // [rsp+41h] [rbp-BFh] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v29; // [rsp+54h] [rbp-ACh]
  _QWORD v30[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-98h]
  struct IImmersiveApplicationInternal *v32; // [rsp+70h] [rbp-90h] BYREF
  CAppViewManager *v33; // [rsp+78h] [rbp-88h]
  _QWORD v34[3]; // [rsp+80h] [rbp-80h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-68h] BYREF
  HSTRING string; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING_HEADER v37; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING v38; // [rsp+D0h] [rbp-30h] BYREF
  HSTRING_HEADER v39; // [rsp+D8h] [rbp-28h] BYREF
  HSTRING v40; // [rsp+F0h] [rbp-10h] BYREF
  HSTRING_HEADER v41; // [rsp+F8h] [rbp-8h] BYREF
  HSTRING v42; // [rsp+110h] [rbp+10h] BYREF
  HSTRING_HEADER v43; // [rsp+118h] [rbp+18h] BYREF
  HSTRING v44; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v45[40]; // [rsp+140h] [rbp+40h] BYREF

  v34[2] = -2LL;
  v31 = a4;
  v33 = a1;
  CAppViewManagerTelemetry::SwitchAsyncWorker::Start<>((CAppViewManagerTelemetry::SwitchAsyncWorker *)v45);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = 0;
  v32 = 0LL;
  v34[1] = 0LL;
  v34[0] = a3;
  v10 = CAppViewManager::_PrepareToSwitchHelper(a1, a2, a3, a4, v34, &v32, &v25, v26);
  v11 = 0;
  v28 = 0;
  v12 = v32;
  if ( v10 == 1 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_99aca6d361263e91c27c68872c80b102_Traceguids);
    v9 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, __int64, bool))(*(_QWORD *)v12 + 112LL))(
           v12,
           a3,
           2LL,
           (v31 & 1) == 0);
    if ( v9 < 0 )
      goto LABEL_13;
    if ( a5 )
    {
      v27 = 0LL;
      v13 = *(_QWORD *)v12;
      v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v27);
      if ( (*(int (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *))(v13 + 352))(
             v12,
             3LL,
             &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
             v14) >= 0 )
        v9 = CAppViewManager::_AddPresentedWindowCallbackTrigger(v33, 2LL, v12, a3, a5, &v28);
      v15 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v11 = v28;
    }
    if ( v9 < 0 )
LABEL_13:
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, _QWORD))(*(_QWORD *)v12 + 224LL))(
        v12,
        a3,
        0LL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v10 >= 0 && v25 )
  {
    v27 = 0LL;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::GetCachedFeatureEnabledState();
    LODWORD(v30[0]) = 0;
    BYTE4(v30[0]) = 3;
    v28 = 0;
    v29 = WORD2(v30[0]);
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::GetFeaturePropertyCache'::`2'::data,
      0x92369Cu,
      (const struct FEATURE_LOGGED_TRAITS *)&v28,
      1,
      3);
    string = 0LL;
    v16 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v16 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
      __debugbreak();
    }
    v17 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            string,
            &v27);
    string = 0LL;
    if ( v17 < 0 )
      goto LABEL_41;
    v30[0] = v27;
    if ( v27 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v27 + 8LL))(v27);
    v38 = 0LL;
    v18 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &v37, &v38);
    if ( v18 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
    v19 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)v30,
            v38,
            1u);
    v38 = 0LL;
    if ( a2 && v19 >= 0 )
    {
      v40 = 0LL;
      v20 = WindowsCreateStringReference(L"SwitchAsync_IdFrom", 0x12u, &v39, &v40);
      if ( v20 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
      v19 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)v30,
              v40,
              a2);
      v40 = 0LL;
    }
    if ( a3 )
    {
      if ( v19 < 0 )
      {
LABEL_39:
        if ( v30[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30[0] + 16LL))(v30[0]);
LABEL_41:
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[19].Ptr);
        CAppViewManager::_TrySwitchToApplication(v33, v12, v27);
        v23 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v23 + 16LL))(v23);
        }
        goto LABEL_43;
      }
      v42 = 0LL;
      v21 = WindowsCreateStringReference(L"SwitchAsync_IdTo", 0x10u, &v41, &v42);
      if ( v21 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
      v19 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)v30,
              v42,
              a3);
      v42 = 0LL;
    }
    if ( v19 >= 0 )
    {
      v44 = 0LL;
      v22 = WindowsCreateStringReference(L"SwitchAsync_vsp", 0xFu, &v43, &v44);
      if ( v22 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
      Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)v30,
        v44,
        v31);
      v44 = 0LL;
    }
    goto LABEL_39;
  }
LABEL_43:
  if ( v10 < 0 )
    v9 = v10;
  if ( a5 && !v11 )
    CAppViewManager::_s_QueueCallback(v12, a5, v9);
  if ( v9 >= 0 )
    v9 = v26[0] != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v45, v9);
  if ( v12 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v12 + 16LL))(v12);
  v45[0] = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v45);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v45);
  return (unsigned int)v9;
}
