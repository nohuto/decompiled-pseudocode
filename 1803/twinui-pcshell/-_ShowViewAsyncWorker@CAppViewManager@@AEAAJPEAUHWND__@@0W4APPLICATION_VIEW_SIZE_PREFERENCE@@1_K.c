/*
 * XREFs of ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18000A1F8
 * Callers:
 *     _lambda_cc443415f5ecfa248de51aa242c4a017_::operator() @ 0x180003950 (_lambda_cc443415f5ecfa248de51aa242c4a017_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_a27a9a7cc32edd27e62d9bbcd3541f9f__&___ptr64__1_long_::Invoke @ 0x180120A40 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_180120A40.c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180127238 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180127904 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CompletePendingActivation@CAppViewManager@@AEAAJ_K@Z @ 0x1800093D8 (-_CompletePendingActivation@CAppViewManager@@AEAAJ_K@Z.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180009888 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180009BE4 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180009F28 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000A04C (-_TrySwitchToApplication@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIPropertyS.c)
 *     ?StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x18000CFC8 (-StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000FE20 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010008 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180010108 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?IsApplicationForeground@CImmersiveApp@@UEBA_NXZ @ 0x180049870 (-IsApplicationForeground@CImmersiveApp@@UEBA_NXZ.c)
 *     ?IsViewGhosted@CImmersiveApp@@UEBA_NXZ @ 0x18004C360 (-IsViewGhosted@CImmersiveApp@@UEBA_NXZ.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18006D160 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@E@Z @ 0x18007F25C (-SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x1800810EC (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x180081130 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x180095A90 (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180112178 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180112280 (WPP_SF_d.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1801217D4 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x180128074 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 *     WPP_SF_ll @ 0x1801282B4 (WPP_SF_ll.c)
 *     WPP_SF_qqLL @ 0x180128364 (WPP_SF_qqLL.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAppViewManager::_ShowViewAsyncWorker(
        CAppViewManager *a1,
        HWND a2,
        HWND a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        CImmersiveApp *a7,
        struct IAsyncCallback *a8)
{
  char v12; // r15
  bool v13; // bl
  __int64 v14; // r8
  int v15; // eax
  int v16; // ecx
  CImmersiveApp *v17; // rdi
  RTL_SRWLOCK *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  int GlomForWindow; // r14d
  CImmersiveApp *v22; // rsi
  bool v23; // di
  CAppViewManager *v24; // rcx
  bool (__fastcall *v25)(CImmersiveApp *__hidden); // rax
  char v27; // r15
  struct Windows::Foundation::Collections::IPropertySet *v28; // rax
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v29; // rdx
  unsigned __int8 v30; // r8
  int v31; // eax
  int v32; // r15d
  RTL_SRWLOCK *v33; // rbx
  char v34; // di
  struct IAsyncCallback *v35; // r12
  bool (__fastcall *v36)(CImmersiveApp *__hidden); // rax
  char v37; // al
  unsigned __int8 v39; // al
  __int64 v40; // rdx
  __int64 v41; // r8
  void (__fastcall ***v42)(_QWORD, _QWORD, _QWORD); // r14
  unsigned int v43; // eax
  unsigned int v44; // ebx
  char v45; // [rsp+40h] [rbp-C0h]
  bool v46; // [rsp+41h] [rbp-BFh] BYREF
  bool v47; // [rsp+42h] [rbp-BEh] BYREF
  char v48; // [rsp+43h] [rbp-BDh]
  struct Windows::Foundation::Collections::IPropertySet *v49; // [rsp+48h] [rbp-B8h] BYREF
  CImmersiveApp *v50; // [rsp+50h] [rbp-B0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v51; // [rsp+58h] [rbp-A8h] BYREF
  CImmersiveApp *v52; // [rsp+60h] [rbp-A0h] BYREF
  int v53; // [rsp+68h] [rbp-98h]
  struct IImmersiveApplicationInternal *v54; // [rsp+70h] [rbp-90h] BYREF
  struct IAsyncCallback *v55; // [rsp+78h] [rbp-88h]
  struct IIAMServiceProvider *v56; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v57; // [rsp+88h] [rbp-78h]
  HWND v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  _BYTE v60[16]; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v62; // [rsp+C8h] [rbp-38h]
  _QWORD v63[40]; // [rsp+D0h] [rbp-30h] BYREF

  v59 = -2LL;
  v57 = a4;
  v58 = a2;
  v51 = a7;
  v55 = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    v63,
    "ShowViewAsyncWorker");
  v63[0] = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  CAppViewManagerTelemetry::ShowViewAsyncWorker::StartActivity((CAppViewManagerTelemetry::ShowViewAsyncWorker *)v63);
  v12 = 0;
  v13 = 0;
  if ( a7 )
  {
    v52 = a7;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v52);
    v62 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"ClientRequestedNavigationType",
      0x1Eu,
      0x1Du);
    v15 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v52, v62, v14, &v49);
    v16 = (int)v49;
    if ( v15 < 0 )
      v16 = 0;
    v13 = v16 == 2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
  }
  if ( (a6 || v13) && a2 == a3 )
    v12 = 1;
  v56 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
  (***((void (__fastcall ****)(_QWORD, GUID *, struct IIAMServiceProvider **))a1 + 15))(
    *((_QWORD *)a1 + 15),
    &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
    &v56);
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v60,
    v56);
  v45 = 1;
  v53 = 0;
  v17 = 0LL;
  v54 = 0LL;
  v50 = 0LL;
  v52 = 0LL;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v18 = CApplicationManagerUtility::g_pIAMGlobals;
  v49 = (struct Windows::Foundation::Collections::IPropertySet *)CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_qqLL(*((_QWORD *)WPP_GLOBAL_Control + 2), v19, v20, a2, a3, a4, a5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a3, &v52, &v46);
  v22 = v52;
  if ( GlomForWindow < 0 )
    goto LABEL_16;
  v23 = v46;
  if ( v12 && !v46 )
    a3 = (HWND)(*(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v52 + 384LL))(v52);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, v58, &v54, &v47);
  if ( GlomForWindow >= 0 )
  {
    if ( v23 || v12 )
    {
      v17 = v54;
      if ( !CAppViewManager::_IsMultiViewOperationAllowed(v24, v54) )
      {
        v45 = 0;
        v53 = -2147024891;
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_30bd9181394d37182917d8f42fc22ff1_Traceguids);
      }
      goto LABEL_16;
    }
    v45 = 0;
    v53 = 1;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v39 = (*(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v22 + 416LL))(v22);
      WPP_SF_ll(*((_QWORD *)WPP_GLOBAL_Control + 2), v40, v41, 0LL, v39);
    }
  }
  v17 = v54;
LABEL_16:
  if ( GlomForWindow < 0 || !v45 )
    goto LABEL_23;
  if ( v47 )
  {
    Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v50, &v54);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_30bd9181394d37182917d8f42fc22ff1_Traceguids);
  }
  else
  {
    v42 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))*((_QWORD *)a1 + 15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
    v43 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD), HWND, CImmersiveApp *, struct Windows::Foundation::Collections::IPropertySet *, CImmersiveApp **))(*v42)[11])(
            v42,
            v58,
            v17,
            v51,
            &v50);
    GlomForWindow = v43;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_30bd9181394d37182917d8f42fc22ff1_Traceguids, v43);
    if ( GlomForWindow < 0 )
      goto LABEL_23;
    (*(void (__fastcall **)(CImmersiveApp *, __int64))(*(_QWORD *)v50 + 368LL))(v50, 2LL);
    v48 = 1;
  }
  v25 = *(bool (__fastcall **)(CImmersiveApp *__hidden))(*(_QWORD *)v22 + 416LL);
  if ( !(v25 == CImmersiveApp::IsApplicationForeground ? CImmersiveApp::IsApplicationForeground(v22) : v25(v22)) )
  {
LABEL_23:
    v27 = 0;
    goto LABEL_24;
  }
  v27 = 1;
LABEL_24:
  if ( v18 )
    ReleaseSRWLockExclusive(v18);
  if ( GlomForWindow >= 0 && v45 )
  {
    v49 = v51;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v49);
    v28 = v49;
    if ( !v49 )
    {
      v62 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Foundation.Collections.ValueSet",
        0x28u,
        0x27u);
      GlomForWindow = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
                        v62,
                        &v49);
      v62 = 0LL;
      v28 = v49;
    }
    if ( GlomForWindow >= 0 )
    {
      v51 = v28;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v51);
      GlomForWindow = ViewSizePreferenceHelpers::SetTargetViewSizePreference(&v51, v57);
      if ( GlomForWindow >= 0 )
      {
        if ( a6 )
        {
          LOBYTE(v29) = 1;
          v31 = PositionerPropertySetHelpers::SetAppActivationResponse((PositionerPropertySetHelpers *)&v51, v29, v30);
        }
        else
        {
          v31 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(&v51, a3, a5);
        }
        GlomForWindow = v31;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v51);
      if ( GlomForWindow >= 0 )
      {
        if ( v27 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
        if ( v48 )
          GlomForWindow = (*(__int64 (__fastcall **)(_QWORD, CImmersiveApp *, struct Windows::Foundation::Collections::IPropertySet *))(**((_QWORD **)a1 + 15) + 152LL))(
                            *((_QWORD *)a1 + 15),
                            v50,
                            v49);
        if ( GlomForWindow >= 0 )
          GlomForWindow = CAppViewManager::_TrySwitchToApplication((IUnknown **)a1, v50, (struct IUnknown *)v49);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v49);
  }
  v32 = 0;
  LODWORD(v49) = 0;
  v33 = CApplicationManagerUtility::g_pIAMGlobals;
  v51 = (struct Windows::Foundation::Collections::IPropertySet *)CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( GlomForWindow < 0 )
  {
    if ( v50 && v17 && v17 != v50 )
      (*(void (__fastcall **)(_QWORD, CImmersiveApp *, CImmersiveApp *, _QWORD))(**((_QWORD **)a1 + 15) + 104LL))(
        *((_QWORD *)a1 + 15),
        v50,
        v17,
        0LL);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_30bd9181394d37182917d8f42fc22ff1_Traceguids,
        (unsigned int)GlomForWindow);
    v34 = v45;
    goto LABEL_89;
  }
  v34 = v45;
  if ( !v45 )
  {
LABEL_89:
    v35 = v55;
    goto LABEL_50;
  }
  v35 = v55;
  if ( v55 )
  {
    v36 = *(bool (__fastcall **)(CImmersiveApp *__hidden))(*(_QWORD *)v50 + 472LL);
    v37 = v36 == CImmersiveApp::IsViewGhosted ? CImmersiveApp::IsViewGhosted(v50) : ((__int64 (*)(void))v36)();
    if ( v37 )
    {
      GlomForWindow = CAppViewManager::_AddPresentedWindowCallbackTrigger(
                        (__int64)a1,
                        1,
                        (__int64)v50,
                        (__int64)v58,
                        (__int64)v35,
                        &v49);
      v32 = (int)v49;
    }
  }
LABEL_50:
  if ( v33 )
    ReleaseSRWLockExclusive(v33);
  if ( v35 && !v32 )
  {
    v44 = GlomForWindow;
    if ( GlomForWindow >= 0 )
      v44 = v53;
    CAppViewManager::_s_QueueCallback(v22, v35, v44);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_30bd9181394d37182917d8f42fc22ff1_Traceguids, v44);
  }
  if ( GlomForWindow >= 0 )
    GlomForWindow = v34 != 0;
  if ( a6 )
    CAppViewManager::_CompletePendingActivation((IUnknown **)a1, a6);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v63,
    (unsigned int)GlomForWindow);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
  CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v60);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v56);
  v63[0] = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v63);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v63);
  return (unsigned int)GlomForWindow;
}
