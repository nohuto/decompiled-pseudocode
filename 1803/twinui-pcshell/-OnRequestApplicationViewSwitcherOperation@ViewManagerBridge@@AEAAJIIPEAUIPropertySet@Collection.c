/*
 * XREFs of ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180055748
 * Callers:
 *     ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x180057FC0 (-OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBl.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390__&___ptr64__1_long___lambda_18f2e6e28967ea052376c138380b4390__&___ptr64_ @ 0x18000471C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCal.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800083E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180036674 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180058E0C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18006CF20 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18006D160 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TryShowAsStandaloneAsync@AEAIAEAIAEAIAEAIAEA_K@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEA_K@Z @ 0x180091AE8 (--$TryShowAsStandaloneAsync@AEAIAEAIAEAIAEAIAEA_K@OnRequestApplicationViewSwitcherOperation@View.c)
 *     ?StartActivity@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x180091C20 (-StartActivity@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXKK.c)
 *     ??1OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180091E50 (--1OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BMA@AA @ 0x1800A481C (--_9IPropertyValue@Foundation@Windows@@$BMA@AA.c)
 *     ??_9ISwitchItemController@@$BHA@AA @ 0x1800AE850 (--_9ISwitchItemController@@$BHA@AA.c)
 *     ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1801CEF80 (-SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Win.c)
 *     ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x1801CF328 (-TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wind.c)
 *     ??$SwitchAsync@AEAIAEAIAEAI@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI00@Z @ 0x1801DB028 (--$SwitchAsync@AEAIAEAIAEAI@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLog.c)
 *     ??$TryShowAsViewModeAsync@AEAIAEAIAEAIAEAIAEAMAEAM@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEAM1@Z @ 0x1801DB290 (--$TryShowAsViewModeAsync@AEAIAEAIAEAIAEAIAEAMAEAM@OnRequestApplicationViewSwitcherOperation@Vie.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall ViewManagerBridge::OnRequestApplicationViewSwitcherOperation(
        ViewManagerBridge *this,
        unsigned int a2,
        unsigned int a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v8; // rbx
  _QWORD *v9; // rax
  volatile int *v10; // rdx
  _QWORD *v11; // rbx
  struct Windows::Foundation::IPropertyValue *v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  int PropVal; // edi
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // r8
  int v23; // eax
  HSTRING v24; // rdi
  int v25; // eax
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // r8
  int v34; // eax
  HSTRING v35; // rdi
  int v36; // eax
  __int64 v37; // r8
  int v38; // eax
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // r8
  int v42; // eax
  int v43; // [rsp+20h] [rbp-E0h]
  unsigned int v44; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v45; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v46; // [rsp+48h] [rbp-B8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v47; // [rsp+50h] [rbp-B0h] BYREF
  struct Windows::Foundation::IPropertyValue *v48; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v49; // [rsp+60h] [rbp-A0h] BYREF
  struct Windows::Foundation::IPropertyValue *v50; // [rsp+68h] [rbp-98h] BYREF
  int v51; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v53; // [rsp+80h] [rbp-80h]
  unsigned int v54; // [rsp+84h] [rbp-7Ch]
  _QWORD *v55; // [rsp+88h] [rbp-78h] BYREF
  __int64 v56[2]; // [rsp+90h] [rbp-70h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING v58; // [rsp+B8h] [rbp-48h]
  _QWORD v59[40]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v56[1] = -2LL;
  v49 = a3;
  v8 = *((_QWORD *)this + 13);
  v56[0] = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v52 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v53 = a2;
  v54 = a3;
  v9 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390______ptr64__1_long___lambda_18f2e6e28967ea052376c138380b4390______ptr64_(
         &v48,
         &v52);
  v11 = (_QWORD *)*v9;
  v55 = (_QWORD *)*v9;
  *v9 = 0LL;
  v12 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback>::Release(
      (__int64)v12,
      v10);
  }
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    v59,
    "OnRequestApplicationViewSwitcherOperation");
  v59[0] = &ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::`vftable';
  ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::StartActivity(
    (ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation *)v59,
    a2,
    a3);
  v47 = a4;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v47);
  v58 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"ClientRequestedNavigationType",
    0x1Eu,
    0x1Du);
  v14 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, v58, v13, &v51);
  PropVal = v14;
  if ( v14 < 0 )
  {
    v27 = (unsigned int)v14;
    v28 = 1449LL;
    goto LABEL_53;
  }
  if ( v51 )
  {
    if ( v51 == 1 )
    {
      v58 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
      v38 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, v58, v37, &v44);
      PropVal = v38;
      if ( v38 >= 0 )
      {
        v58 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
        v40 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, v58, v39, &v45);
        PropVal = v40;
        if ( v40 >= 0 )
        {
          v58 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_vsp", 0x10u, 0xFu);
          v42 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, v58, v41, &v46);
          PropVal = v42;
          if ( v42 >= 0 )
          {
            ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::SwitchAsync<unsigned int &,unsigned int &,unsigned int &>(
              v59,
              &v44,
              &v45,
              &v46);
            ViewEventDispatcher::SwitchAsync(*((_QWORD *)this + 10), v44, v45, v46, v11);
            goto LABEL_18;
          }
          v27 = (unsigned int)v42;
          v28 = 1490LL;
        }
        else
        {
          v27 = (unsigned int)v40;
          v28 = 1487LL;
        }
      }
      else
      {
        v27 = (unsigned int)v38;
        v28 = 1484LL;
      }
    }
    else
    {
      if ( v51 != 2 )
      {
        PropVal = -2147024809;
        v28 = 1527LL;
LABEL_52:
        v27 = (unsigned int)PropVal;
        goto LABEL_53;
      }
      v58 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"TryShowAsViewModeAsync_ViewId",
        0x1Eu,
        0x1Du);
      v30 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, v58, v29, &v46);
      PropVal = v30;
      if ( v30 >= 0 )
      {
        v58 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"TryShowAsViewModeAsync_ApplicationViewMode",
          0x2Bu,
          0x2Au);
        v32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, v58, v31, &v45);
        PropVal = v32;
        if ( v32 >= 0 )
        {
          v58 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"TryShowAsViewModeAsync_ViewModePreferences_ViewSizePreference",
            0x3Eu,
            0x3Du);
          v34 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, v58, v33, &v44);
          PropVal = v34;
          if ( v34 >= 0 )
          {
            v58 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"TryShowAsViewModeAsync_ViewModePreferences_CustomSize",
              0x36u,
              0x35u);
            v35 = v58;
            v48 = 0LL;
            v50 = 0LL;
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v50);
            PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v47,
                        v35,
                        &v50);
            if ( PropVal >= 0 )
            {
              v36 =  Windows::Foundation::IPropertyValue::`vcall'{192,{flat}}(v50, &v48);
              PropVal = v36;
              if ( v36 >= 0 )
                PropVal = 0;
              else
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x2F,
                  (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
                  (const char *)(unsigned int)v36,
                  v43);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v50);
            if ( PropVal >= 0 )
            {
              ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsViewModeAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,float &,float &>(
                (unsigned int)v59,
                (unsigned int)&v46,
                (unsigned int)&v49,
                (unsigned int)&v45,
                (__int64)&v44,
                (__int64)&v48,
                (__int64)&v48 + 4);
              ViewEventDispatcher::TryShowAsViewModeAsync(*((_QWORD *)this + 10), v46, a3, v45, v44, v48, v11);
              goto LABEL_18;
            }
            v28 = 1513LL;
            goto LABEL_52;
          }
          v27 = (unsigned int)v34;
          v28 = 1510LL;
        }
        else
        {
          v27 = (unsigned int)v32;
          v28 = 1507LL;
        }
      }
      else
      {
        v27 = (unsigned int)v30;
        v28 = 1504LL;
      }
    }
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)v27,
      v43);
    goto LABEL_19;
  }
  v58 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"TryShowAsStandaloneAsync_IdToShow",
    0x22u,
    0x21u);
  v17 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, v58, v16, &v49);
  PropVal = v17;
  if ( v17 < 0 )
  {
    v27 = (unsigned int)v17;
    v28 = 1455LL;
    goto LABEL_53;
  }
  v58 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"TryShowAsStandaloneAsync_IdAnchor",
    0x22u,
    0x21u);
  v19 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, v58, v18, &v44);
  PropVal = v19;
  if ( v19 < 0 )
  {
    v27 = (unsigned int)v19;
    v28 = 1458LL;
    goto LABEL_53;
  }
  v58 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"TryShowAsStandaloneAsync_avspToShow",
    0x24u,
    0x23u);
  v21 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, v58, v20, &v45);
  PropVal = v21;
  if ( v21 < 0 )
  {
    v27 = (unsigned int)v21;
    v28 = 1461LL;
    goto LABEL_53;
  }
  v58 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"TryShowAsStandaloneAsync_avspAnchor",
    0x24u,
    0x23u);
  v23 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v47, v58, v22, &v46);
  PropVal = v23;
  if ( v23 < 0 )
  {
    v27 = (unsigned int)v23;
    v28 = 1465LL;
    goto LABEL_53;
  }
  v58 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"NavigationRequestIdForBaseActivation",
    0x25u,
    0x24u);
  v24 = v58;
  v50 = 0LL;
  v48 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v48);
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v47,
              v24,
              &v48);
  if ( PropVal >= 0 )
  {
    v25 =  ISwitchItemController::`vcall'{112,{flat}}(v48, &v50);
    PropVal = v25;
    if ( v25 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (unsigned int)"internal\\onecoreshell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v25,
        v43);
    else
      PropVal = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v48);
  if ( PropVal < 0 )
  {
    v28 = 1469LL;
    goto LABEL_52;
  }
  ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsStandaloneAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &>(
    (unsigned int)v59,
    (unsigned int)&v49,
    (unsigned int)&v44,
    (unsigned int)&v45,
    (__int64)&v46,
    (__int64)&v50);
  ViewEventDispatcher::TryShowAsStandaloneAsync(*((RTL_SRWLOCK **)this + 10), v49, v44, v45, v46, (__int64)v50, v11);
LABEL_18:
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v59);
  PropVal = 0;
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
  ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::~OnRequestApplicationViewSwitcherOperation((ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation *)v59);
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease((void **)&v55);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v52);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v56);
  return (unsigned int)PropVal;
}
