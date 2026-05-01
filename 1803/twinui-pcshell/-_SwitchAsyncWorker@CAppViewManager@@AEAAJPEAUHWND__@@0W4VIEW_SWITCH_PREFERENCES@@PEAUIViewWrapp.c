/*
 * XREFs of ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180127904
 * Callers:
 *     _lambda_3c4ff4ccd576f8db880f0fb482543cc9_::operator() @ 0x18011DCEC (_lambda_3c4ff4ccd576f8db880f0fb482543cc9_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_969bc20e60ce3cfb522e54902316147a__&___ptr64__1_long_::Invoke @ 0x180120A00 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_180120A00.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18000A1F8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_K.c)
 *     ?InternalRelease@?$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC88 (-InternalRelease@-$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000FE20 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_2791fcf0aaab69d566675f60a729cea4_::_lambda_2791fcf0aaab69d566675f60a729cea4_ @ 0x18011D124 (_lambda_2791fcf0aaab69d566675f60a729cea4_--_lambda_2791fcf0aaab69d566675f60a729cea4_.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4__&___ptr64__1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4__&___ptr64__1_long_ @ 0x18011D2EC (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18011D2EC.c)
 *     _lambda_2791fcf0aaab69d566675f60a729cea4_::__lambda_2791fcf0aaab69d566675f60a729cea4_ @ 0x18011D760 (_lambda_2791fcf0aaab69d566675f60a729cea4_--__lambda_2791fcf0aaab69d566675f60a729cea4_.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18011DB74 (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?PopulateSwitchAsyncPropertySet@@YAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180121310 (-PopulateSwitchAsyncPropertySet@@YAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIPropertySet@Col.c)
 *     ?Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA?AV12@XZ @ 0x180121B64 (-Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x180122A4C (-StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x18012596C (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N2@Z @ 0x180125CD0 (-_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@V.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAppViewManager::_SwitchAsyncWorker(
        CAppViewManager *a1,
        HWND a2,
        HWND a3,
        unsigned int a4,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a5,
        void *a6)
{
  RTL_SRWLOCK *v10; // rbx
  int v11; // edi
  unsigned int v12; // esi
  struct IAsyncCallback *v13; // rbx
  void *v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  struct wil::details::IFailureCallback *v17; // rax
  bool v19; // [rsp+40h] [rbp-C0h] BYREF
  bool v20; // [rsp+41h] [rbp-BFh] BYREF
  CImmersiveApp *v21; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK v22; // [rsp+50h] [rbp-B0h] BYREF
  HWND v23; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-A0h] BYREF
  void *v25; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v26[2]; // [rsp+70h] [rbp-90h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-80h] BYREF
  __int64 v28; // [rsp+98h] [rbp-68h]
  _QWORD v29[40]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v30[40]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v31[352]; // [rsp+320h] [rbp+220h] BYREF

  v26[1] = -2LL;
  v23 = a2;
  v26[0] = a3;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v29,
    (__int64)"SwitchAsyncWorker");
  v29[0] = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  CAppViewManagerTelemetry::SwitchAsyncWorker::StartActivity((CAppViewManagerTelemetry::SwitchAsyncWorker *)v29);
  v19 = 0;
  v20 = 0;
  v10 = CApplicationManagerUtility::g_pIAMGlobals;
  v22 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = CAppViewManager::_EvaluateFrameworkViewTypeForSwitchHelper(a1, a2, a3, a5, &v19, &v20);
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  if ( v11 >= 0 && v19 )
  {
    v12 = a4 | 2;
    v24 = v12;
    v22 = (PSRWLOCK)a1;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v22);
    CAppViewManagerTelemetry::SwitchAsyncWorker::Split((__int64)v29, (struct wil::details::IFailureCallback *)v30);
    v25 = a6;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v25);
    lambda_2791fcf0aaab69d566675f60a729cea4_::_lambda_2791fcf0aaab69d566675f60a729cea4_(
      (__int64)v31,
      &v22,
      &v23,
      v26,
      &v24,
      v30,
      &v25);
    Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v25);
    v13 = 0LL;
    v14 = operator new(0x170uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v14 )
      v13 = (struct IAsyncCallback *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4______ptr64__1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4______ptr64__1_long_(
                                       (__int64)v14,
                                       (__int64)v31);
    v23 = (HWND)v13;
    v21 = 0LL;
    if ( v20 )
    {
      v28 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Foundation.Collections.ValueSet",
        0x28u,
        0x27u);
      if ( (int)Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
                  v28,
                  (__int64 *)&v21) >= 0 )
        PopulateSwitchAsyncPropertySet((__int64)a2, (__int64)a3, v12, (__int64)v21);
    }
    v15 = CAppViewManager::_ShowViewAsyncWorker(a1, a3, a2, 0, 0, 0LL, v21, v13);
    v16 = v15;
    if ( v15 < 0 )
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v29, v15);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v29, 0);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease((void **)&v23);
    lambda_2791fcf0aaab69d566675f60a729cea4_::__lambda_2791fcf0aaab69d566675f60a729cea4_((__int64)v31);
    CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)v30);
    Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease((__int64 *)&v22);
  }
  else
  {
    v17 = CAppViewManagerTelemetry::SwitchAsyncWorker::Split((__int64)v29, (struct wil::details::IFailureCallback *)v30);
    v16 = CAppViewManager::_ContinueSwitchAsyncWorker(
            a1,
            (__int64)a2,
            (__int64)a3,
            a4,
            v17,
            (struct IAsyncCallback *)a6);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v29, v16);
  }
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)v29);
  return v16;
}
