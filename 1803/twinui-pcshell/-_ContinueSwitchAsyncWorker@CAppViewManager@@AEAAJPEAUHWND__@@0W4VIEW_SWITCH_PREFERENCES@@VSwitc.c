/*
 * XREFs of ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x18012596C
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4__&___ptr64__1_long_::Invoke @ 0x180120950 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_180120950.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180127904 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180009BE4 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000A04C (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1800F670C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_1800F670C.c)
 *     WPP_SF_ @ 0x180112178 (WPP_SF_.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18011DB74 (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?PopulateSwitchAsyncPropertySet@@YAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180121310 (-PopulateSwitchAsyncPropertySet@@YAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIPropertySet@Col.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180121638 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerAct.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180126C20 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x180128074 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppViewManager::_ContinueSwitchAsyncWorker(
        CAppViewManager *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        CAppViewManagerTelemetry::SwitchAsyncWorker *a5,
        struct IAsyncCallback *a6)
{
  int v9; // esi
  int v10; // r13d
  RTL_SRWLOCK *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r12d
  struct IImmersiveApplicationInternal *v16; // rbx
  int v17; // eax
  char v19; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[7]; // [rsp+41h] [rbp-BFh] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v21; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v22; // [rsp+50h] [rbp-B0h]
  struct IImmersiveApplicationInternal *v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h]
  CAppViewManager *v26; // [rsp+70h] [rbp-90h]
  CAppViewManagerTelemetry::SwitchAsyncWorker *v27; // [rsp+78h] [rbp-88h]
  __int64 v28; // [rsp+80h] [rbp-80h]
  PSRWLOCK v29; // [rsp+88h] [rbp-78h]
  CAppViewManagerTelemetry::SwitchAsyncWorker *v30; // [rsp+90h] [rbp-70h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-68h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-50h]
  _QWORD v33[40]; // [rsp+C0h] [rbp-40h] BYREF

  v28 = -2LL;
  v22 = a4;
  v25 = a2;
  v26 = a1;
  v27 = a5;
  v30 = a5;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v33,
    (__int64)a5,
    **((_DWORD **)a5 + 6) == 1);
  v33[0] = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  v9 = 0;
  v19 = 0;
  v20[0] = 0;
  v10 = 0;
  LODWORD(v21) = 0;
  v23 = 0LL;
  v11 = CApplicationManagerUtility::g_pIAMGlobals;
  v29 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = (unsigned __int64)a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v15 = CAppViewManager::_PrepareToSwitchHelper(a1, v25, a3, a4, &hstringHeader, &v23, &v19, v20);
  v16 = v23;
  if ( v15 == 1 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_30bd9181394d37182917d8f42fc22ff1_Traceguids);
    v9 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, __int64, bool))(*(_QWORD *)v16 + 112LL))(
           v16,
           a3,
           2LL,
           (v22 & 1) == 0);
    if ( v9 < 0 )
      goto LABEL_11;
    if ( a6 )
    {
      v24 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      if ( (*(int (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *))(*(_QWORD *)v16 + 352LL))(
             v16,
             3LL,
             &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
             &v24) >= 0 )
      {
        v9 = CAppViewManager::_AddPresentedWindowCallbackTrigger((__int64)v26, 2, (__int64)v16, a3, (__int64)a6, &v21);
        v10 = (int)v21;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    }
    if ( v9 < 0 )
LABEL_11:
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, _QWORD))(*(_QWORD *)v16 + 224LL))(
        v16,
        a3,
        0LL);
  }
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  if ( v15 < 0 )
  {
    v9 = v15;
  }
  else if ( v19 )
  {
    v21 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_AddSwitchAsyncContextToPositionerActivations>::ReportUsageToService(
      v13,
      v12,
      v14);
    v32 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v17 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v32,
            (__int64 *)&v21);
    v32 = 0LL;
    if ( v17 >= 0 )
      PopulateSwitchAsyncPropertySet(v25, a3, v22, (__int64)v21);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
    CAppViewManager::_TrySwitchToApplication((IUnknown **)v26, v16, (struct IUnknown *)v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  }
  if ( a6 && !v10 )
    CAppViewManager::_s_QueueCallback(v16, a6, v9);
  if ( v9 >= 0 )
    v9 = v20[0] != 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v33, v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)v33);
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker(v27);
  return (unsigned int)v9;
}
