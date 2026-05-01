/*
 * XREFs of ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18010C48C
 * Callers:
 *     ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x18010BAD0 (-OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetSize@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUSize@Foundation@4@@Z @ 0x18008D7D8 (-GetSize@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUSize@Foundatio.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800D6CF0 (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1800F2778 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1800F2AD4 (-SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Win.c)
 *     ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x1800F2D80 (-TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wind.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?GetUInt64@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEA_K@Z @ 0x180102078 (-GetUInt64@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEA_K@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390__&___ptr64_ @ 0x18010E344 (Microsoft--WRL--Callback_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390__-___ptr64_.c)
 *     ??$Start@AEAIAEAI@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@SA?AV01@AEAI0@Z @ 0x18010E380 (--$Start@AEAIAEAI@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@SA-A.c)
 *     ??$TryShowAsStandaloneAsync@AEAIAEAIAEAIAEAIAEA_K@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEA_K@Z @ 0x18010E44C (--$TryShowAsStandaloneAsync@AEAIAEAIAEAIAEAIAEA_K@OnRequestApplicationViewSwitcherOperation@View.c)
 *     ??$SwitchAsync@AEAIAEAIAEAI@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI00@Z @ 0x18010E548 (--$SwitchAsync@AEAIAEAIAEAI@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLog.c)
 *     ??$TryShowAsViewModeAsync@AEAIAEAIAEAIAEAIAEAMAEAM@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEAM1@Z @ 0x18010E618 (--$TryShowAsViewModeAsync@AEAIAEAIAEAIAEAIAEAMAEAM@OnRequestApplicationViewSwitcherOperation@Vie.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall ViewManagerBridge::OnRequestApplicationViewSwitcherOperation(
        ViewManagerBridge *this,
        unsigned int a2,
        unsigned int a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v8; // rbx
  HRESULT v9; // eax
  int UInt32; // eax
  unsigned int v11; // esi
  __int64 *v12; // rdi
  __int64 v13; // rdx
  HRESULT v14; // eax
  HRESULT v15; // eax
  HRESULT v16; // eax
  HRESULT v17; // eax
  HRESULT v18; // eax
  HRESULT v19; // eax
  HRESULT v20; // eax
  HRESULT v21; // eax
  HRESULT v22; // eax
  HRESULT v23; // eax
  HRESULT v24; // eax
  HRESULT v25; // eax
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v36; // [rsp+80h] [rbp-80h]
  unsigned int v37; // [rsp+84h] [rbp-7Ch]
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-68h] BYREF
  HSTRING string[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v42[40]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v38 = -2LL;
  v27 = a2;
  v31 = a3;
  v8 = *((_QWORD *)this + 12);
  v39 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v35 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v36 = a2;
  v37 = a3;
  Microsoft::WRL::Callback_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390______ptr64_(&v34, &v35);
  ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::Start<unsigned int &,unsigned int &>((ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation *)v42);
  v30 = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a4 + 8LL))(a4);
  string[0] = 0LL;
  v9 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, string);
  if ( v9 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
  UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
             string[0],
             &v33);
  v11 = UInt32;
  v12 = v34;
  if ( UInt32 < 0 )
  {
    v13 = 1398LL;
LABEL_65:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)UInt32);
    goto LABEL_68;
  }
  if ( v33 )
  {
    if ( v33 == 1 )
    {
      string[0] = 0LL;
      v18 = WindowsCreateStringReference(L"SwitchAsync_IdFrom", 0x12u, &hstringHeader, string);
      if ( v18 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                 string[0],
                 &v28);
      v11 = UInt32;
      if ( UInt32 < 0 )
      {
        v13 = 1433LL;
        goto LABEL_65;
      }
      string[0] = 0LL;
      v19 = WindowsCreateStringReference(L"SwitchAsync_IdTo", 0x10u, &hstringHeader, string);
      if ( v19 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                 string[0],
                 &v29);
      v11 = UInt32;
      if ( UInt32 < 0 )
      {
        v13 = 1436LL;
        goto LABEL_65;
      }
      string[0] = 0LL;
      v20 = WindowsCreateStringReference(L"SwitchAsync_vsp", 0xFu, &hstringHeader, string);
      if ( v20 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                 string[0],
                 &v27);
      v11 = UInt32;
      if ( UInt32 < 0 )
      {
        v13 = 1439LL;
        goto LABEL_65;
      }
      ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::SwitchAsync<unsigned int &,unsigned int &,unsigned int &>(
        v42,
        &v28,
        &v29,
        &v27);
      ViewEventDispatcher::SwitchAsync(*((_QWORD *)this + 9), v28, v29, v27, v12);
    }
    else
    {
      if ( v33 != 2 )
      {
        v11 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5C4,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)0x80070057LL);
        goto LABEL_68;
      }
      string[0] = 0LL;
      v14 = WindowsCreateStringReference(L"TryShowAsViewModeAsync_ViewId", 0x1Du, &hstringHeader, string);
      if ( v14 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                 string[0],
                 &v27);
      v11 = UInt32;
      if ( UInt32 < 0 )
      {
        v13 = 1453LL;
        goto LABEL_65;
      }
      string[0] = 0LL;
      v15 = WindowsCreateStringReference(L"TryShowAsViewModeAsync_ApplicationViewMode", 0x2Au, &hstringHeader, string);
      if ( v15 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                 string[0],
                 &v29);
      v11 = UInt32;
      if ( UInt32 < 0 )
      {
        v13 = 1456LL;
        goto LABEL_65;
      }
      string[0] = 0LL;
      v16 = WindowsCreateStringReference(
              L"TryShowAsViewModeAsync_ViewModePreferences_ViewSizePreference",
              0x3Du,
              &hstringHeader,
              string);
      if ( v16 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                 string[0],
                 &v28);
      v11 = UInt32;
      if ( UInt32 < 0 )
      {
        v13 = 1459LL;
        goto LABEL_65;
      }
      string[0] = 0LL;
      v17 = WindowsCreateStringReference(
              L"TryShowAsViewModeAsync_ViewModePreferences_CustomSize",
              0x35u,
              &hstringHeader,
              string);
      if ( v17 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetSize(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
                 string[0],
                 (struct Windows::Foundation::Size *)&v32);
      v11 = UInt32;
      if ( UInt32 < 0 )
      {
        v13 = 1462LL;
        goto LABEL_65;
      }
      ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsViewModeAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,float &,float &>(
        (unsigned int)v42,
        (unsigned int)&v27,
        (unsigned int)&v31,
        (unsigned int)&v29,
        (__int64)&v28,
        (__int64)&v32,
        (__int64)&v32 + 4);
      ViewEventDispatcher::TryShowAsViewModeAsync(*((_QWORD *)this + 9), v27, a3, v29, v28, v32, v12);
    }
  }
  else
  {
    string[0] = 0LL;
    v21 = WindowsCreateStringReference(L"TryShowAsStandaloneAsync_IdToShow", 0x21u, &hstringHeader, string);
    if ( v21 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
    UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
               string[0],
               &v31);
    v11 = UInt32;
    if ( UInt32 < 0 )
    {
      v13 = 1404LL;
      goto LABEL_65;
    }
    string[0] = 0LL;
    v22 = WindowsCreateStringReference(L"TryShowAsStandaloneAsync_IdAnchor", 0x21u, &hstringHeader, string);
    if ( v22 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
    UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
               string[0],
               &v28);
    v11 = UInt32;
    if ( UInt32 < 0 )
    {
      v13 = 1407LL;
      goto LABEL_65;
    }
    string[0] = 0LL;
    v23 = WindowsCreateStringReference(L"TryShowAsStandaloneAsync_avspToShow", 0x23u, &hstringHeader, string);
    if ( v23 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
    UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
               string[0],
               &v29);
    v11 = UInt32;
    if ( UInt32 < 0 )
    {
      v13 = 1410LL;
      goto LABEL_65;
    }
    string[0] = 0LL;
    v24 = WindowsCreateStringReference(L"TryShowAsStandaloneAsync_avspAnchor", 0x23u, &hstringHeader, string);
    if ( v24 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24);
    UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
               string[0],
               &v27);
    v11 = UInt32;
    if ( UInt32 < 0 )
    {
      v13 = 1414LL;
      goto LABEL_65;
    }
    string[0] = 0LL;
    v25 = WindowsCreateStringReference(L"NavigationRequestIdForBaseActivation", 0x24u, &hstringHeader, string);
    if ( v25 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25);
    UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt64(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
               string[0],
               &v32);
    v11 = UInt32;
    if ( UInt32 < 0 )
    {
      v13 = 1418LL;
      goto LABEL_65;
    }
    ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsStandaloneAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &>(
      (unsigned int)v42,
      (unsigned int)&v31,
      (unsigned int)&v28,
      (unsigned int)&v29,
      (__int64)&v27,
      (__int64)&v32);
    ViewEventDispatcher::TryShowAsStandaloneAsync(*((RTL_SRWLOCK **)this + 9), v31, v28, v29, v27, v32, v12);
  }
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v42);
  v11 = 0;
LABEL_68:
  if ( v30 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v30 + 16LL))(v30);
  v42[0] = &ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v42);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v42);
  if ( v12 )
    (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v11;
}
