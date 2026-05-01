/*
 * XREFs of ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013751C
 * Callers:
 *     ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x1801368A0 (-OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetSize@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUSize@Foundation@4@@Z @ 0x18008FE1C (-GetSize@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUSize@Foundatio.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800FA0C8 (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x18011D36C (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x18011D6C8 (-SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Win.c)
 *     ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@PEAUIAsyncCallback@@@Z @ 0x18011D974 (-TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wind.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?GetUInt64@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEA_K@Z @ 0x18012C82C (-GetUInt64@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEA_K@Z.c)
 *     ?StartActivity@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x180131D6C (-StartActivity@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXKK.c)
 *     ??$TryShowAsStandaloneAsync@AEAIAEAIAEAIAEAIAEA_K@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEA_K@Z @ 0x1801389CC (--$TryShowAsStandaloneAsync@AEAIAEAIAEAIAEAIAEA_K@OnRequestApplicationViewSwitcherOperation@View.c)
 *     ??$SwitchAsync@AEAIAEAIAEAI@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI00@Z @ 0x180138AC8 (--$SwitchAsync@AEAIAEAIAEAI@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLog.c)
 *     ??$TryShowAsViewModeAsync@AEAIAEAIAEAIAEAIAEAMAEAM@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEAM1@Z @ 0x180138B98 (--$TryShowAsViewModeAsync@AEAIAEAIAEAIAEAIAEAMAEAM@OnRequestApplicationViewSwitcherOperation@Vie.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall ViewManagerBridge::OnRequestApplicationViewSwitcherOperation(
        ViewManagerBridge *this,
        int a2,
        int a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  unsigned __int64 v8; // rbx
  __int64 *v9; // rsi
  _DWORD *v10; // rax
  _DWORD *v11; // rdi
  HRESULT v12; // eax
  int UInt32; // eax
  unsigned int v14; // edi
  __int64 v15; // rdx
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
  HRESULT v26; // eax
  HRESULT v27; // eax
  struct Windows::Foundation::Collections::IPropertySet *v29; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v31; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v33; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v34; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v35; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v36; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v37; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v38; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v39; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v40; // [rsp+78h] [rbp-90h] BYREF
  int v41; // [rsp+80h] [rbp-88h] BYREF
  __int64 v42; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v43[2]; // [rsp+90h] [rbp-78h] BYREF
  int v44; // [rsp+A0h] [rbp-68h]
  int v45; // [rsp+A4h] [rbp-64h]
  unsigned __int64 v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  __int64 *v48; // [rsp+B8h] [rbp-50h]
  __int64 v49; // [rsp+C0h] [rbp-48h]
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp-40h] BYREF
  HSTRING string; // [rsp+E0h] [rbp-28h] BYREF
  HSTRING_HEADER v52; // [rsp+E8h] [rbp-20h] BYREF
  HSTRING v53; // [rsp+100h] [rbp-8h] BYREF
  HSTRING_HEADER v54; // [rsp+108h] [rbp+0h] BYREF
  HSTRING v55; // [rsp+120h] [rbp+18h] BYREF
  HSTRING_HEADER v56; // [rsp+128h] [rbp+20h] BYREF
  HSTRING v57; // [rsp+140h] [rbp+38h] BYREF
  HSTRING_HEADER v58; // [rsp+148h] [rbp+40h] BYREF
  HSTRING v59; // [rsp+160h] [rbp+58h] BYREF
  HSTRING_HEADER v60; // [rsp+168h] [rbp+60h] BYREF
  HSTRING v61; // [rsp+180h] [rbp+78h] BYREF
  HSTRING_HEADER v62; // [rsp+188h] [rbp+80h] BYREF
  HSTRING v63; // [rsp+1A0h] [rbp+98h] BYREF
  HSTRING_HEADER v64; // [rsp+1A8h] [rbp+A0h] BYREF
  HSTRING v65; // [rsp+1C0h] [rbp+B8h] BYREF
  HSTRING_HEADER v66; // [rsp+1C8h] [rbp+C0h] BYREF
  HSTRING v67; // [rsp+1E0h] [rbp+D8h] BYREF
  HSTRING_HEADER v68; // [rsp+1E8h] [rbp+E0h] BYREF
  HSTRING v69; // [rsp+200h] [rbp+F8h] BYREF
  HSTRING_HEADER v70; // [rsp+208h] [rbp+100h] BYREF
  HSTRING v71; // [rsp+220h] [rbp+118h] BYREF
  HSTRING_HEADER v72; // [rsp+228h] [rbp+120h] BYREF
  HSTRING v73; // [rsp+240h] [rbp+138h] BYREF
  HSTRING_HEADER v74; // [rsp+248h] [rbp+140h] BYREF
  HSTRING v75; // [rsp+260h] [rbp+158h] BYREF
  _QWORD v76[4]; // [rsp+268h] [rbp+160h] BYREF
  int v77; // [rsp+288h] [rbp+180h]
  int *v78; // [rsp+290h] [rbp+188h]
  int *v79; // [rsp+298h] [rbp+190h]
  int v80; // [rsp+2A0h] [rbp+198h] BYREF
  char v81; // [rsp+2A4h] [rbp+19Ch]
  int v82; // [rsp+2C8h] [rbp+1C0h] BYREF
  const char *v83; // [rsp+2D0h] [rbp+1C8h]
  __int64 v84; // [rsp+2D8h] [rbp+1D0h]
  char v85; // [rsp+2E0h] [rbp+1D8h]
  __int64 v86; // [rsp+2E8h] [rbp+1E0h]
  _BYTE v87[144]; // [rsp+2F0h] [rbp+1E8h] BYREF
  __int64 v88; // [rsp+380h] [rbp+278h]
  __int64 v89; // [rsp+388h] [rbp+280h]
  __int64 v90; // [rsp+390h] [rbp+288h]
  __int64 v91; // [rsp+398h] [rbp+290h]
  wil::details::in1diag3 *retaddr; // [rsp+3F0h] [rbp+2E8h]

  v49 = -2LL;
  v41 = a3;
  v8 = *((_QWORD *)this + 14);
  v46 = v8;
  if ( v8 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 8LL))(v8);
  v43[1] = v8;
  if ( v8 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 8LL))(v8);
  v44 = a2;
  v45 = a3;
  v9 = 0LL;
  v47 = 0LL;
  v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    v10[3] = 1;
    *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        0LL);
    *((_QWORD *)v11 + 2) = v8;
    if ( v8 )
      (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)v8 + 8LL))(v8, 0LL);
    v11[6] = a2;
    v11[7] = a3;
    *(_QWORD *)v11 = off_18020C868;
    v9 = (__int64 *)v11;
  }
  v48 = v9;
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
  v83 = "OnRequestApplicationViewSwitcherOperation";
  v84 = 0LL;
  v86 = 1LL;
  v88 = 0LL;
  v89 = 0LL;
  memset(v87, 0, sizeof(v87));
  v90 = 0LL;
  v91 = 0LL;
  v76[0] = &ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::`vftable';
  ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::StartActivity(
    (ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation *)v76,
    a2,
    a3);
  v29 = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a4 + 8LL))(a4);
  string = 0LL;
  v12 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, &string);
  if ( v12 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
  UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
             string,
             &v40);
  v14 = UInt32;
  if ( UInt32 < 0 )
  {
    v15 = 1401LL;
LABEL_71:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)UInt32);
    goto LABEL_74;
  }
  if ( v40 )
  {
    if ( v40 == 1 )
    {
      v61 = 0LL;
      v20 = WindowsCreateStringReference(L"SwitchAsync_IdFrom", 0x12u, &v60, &v61);
      if ( v20 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                 v61,
                 &v35);
      v14 = UInt32;
      if ( UInt32 < 0 )
      {
        v15 = 1436LL;
        goto LABEL_71;
      }
      v63 = 0LL;
      v21 = WindowsCreateStringReference(L"SwitchAsync_IdTo", 0x10u, &v62, &v63);
      if ( v21 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                 v63,
                 &v34);
      v14 = UInt32;
      if ( UInt32 < 0 )
      {
        v15 = 1439LL;
        goto LABEL_71;
      }
      v65 = 0LL;
      v22 = WindowsCreateStringReference(L"SwitchAsync_vsp", 0xFu, &v64, &v65);
      if ( v22 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                 v65,
                 &v33);
      v14 = UInt32;
      if ( UInt32 < 0 )
      {
        v15 = 1442LL;
        goto LABEL_71;
      }
      ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::SwitchAsync<unsigned int &,unsigned int &,unsigned int &>(
        v76,
        &v35,
        &v34,
        &v33);
      ViewEventDispatcher::SwitchAsync(*((_QWORD *)this + 11), v35, v34, v33, v9);
    }
    else
    {
      if ( v40 != 2 )
      {
        v14 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5C7,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)0x80070057LL);
        goto LABEL_74;
      }
      v53 = 0LL;
      v16 = WindowsCreateStringReference(L"TryShowAsViewModeAsync_ViewId", 0x1Du, &v52, &v53);
      if ( v16 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                 v53,
                 &v32);
      v14 = UInt32;
      if ( UInt32 < 0 )
      {
        v15 = 1456LL;
        goto LABEL_71;
      }
      v55 = 0LL;
      v17 = WindowsCreateStringReference(L"TryShowAsViewModeAsync_ApplicationViewMode", 0x2Au, &v54, &v55);
      if ( v17 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                 v55,
                 &v31);
      v14 = UInt32;
      if ( UInt32 < 0 )
      {
        v15 = 1459LL;
        goto LABEL_71;
      }
      v57 = 0LL;
      v18 = WindowsCreateStringReference(
              L"TryShowAsViewModeAsync_ViewModePreferences_ViewSizePreference",
              0x3Du,
              &v56,
              &v57);
      if ( v18 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                 v57,
                 &v30);
      v14 = UInt32;
      if ( UInt32 < 0 )
      {
        v15 = 1462LL;
        goto LABEL_71;
      }
      v59 = 0LL;
      v19 = WindowsCreateStringReference(L"TryShowAsViewModeAsync_ViewModePreferences_CustomSize", 0x35u, &v58, &v59);
      if ( v19 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
      UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetSize(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                 v59,
                 (struct Windows::Foundation::Size *)&v42);
      v14 = UInt32;
      if ( UInt32 < 0 )
      {
        v15 = 1465LL;
        goto LABEL_71;
      }
      ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsViewModeAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,float &,float &>(
        (unsigned int)v76,
        (unsigned int)&v32,
        (unsigned int)&v41,
        (unsigned int)&v31,
        (__int64)&v30,
        (__int64)&v42,
        (__int64)&v42 + 4);
      ViewEventDispatcher::TryShowAsViewModeAsync(*((_QWORD *)this + 11), v32, a3, v31, v30, v42, v9);
    }
  }
  else
  {
    v67 = 0LL;
    v23 = WindowsCreateStringReference(L"TryShowAsStandaloneAsync_IdToShow", 0x21u, &v66, &v67);
    if ( v23 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
    UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
               v67,
               &v39);
    v14 = UInt32;
    if ( UInt32 < 0 )
    {
      v15 = 1407LL;
      goto LABEL_71;
    }
    v69 = 0LL;
    v24 = WindowsCreateStringReference(L"TryShowAsStandaloneAsync_IdAnchor", 0x21u, &v68, &v69);
    if ( v24 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24);
    UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
               v69,
               &v38);
    v14 = UInt32;
    if ( UInt32 < 0 )
    {
      v15 = 1410LL;
      goto LABEL_71;
    }
    v71 = 0LL;
    v25 = WindowsCreateStringReference(L"TryShowAsStandaloneAsync_avspToShow", 0x23u, &v70, &v71);
    if ( v25 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25);
    UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
               v71,
               &v37);
    v14 = UInt32;
    if ( UInt32 < 0 )
    {
      v15 = 1413LL;
      goto LABEL_71;
    }
    v73 = 0LL;
    v26 = WindowsCreateStringReference(L"TryShowAsStandaloneAsync_avspAnchor", 0x23u, &v72, &v73);
    if ( v26 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26);
    UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
               v73,
               &v36);
    v14 = UInt32;
    if ( UInt32 < 0 )
    {
      v15 = 1417LL;
      goto LABEL_71;
    }
    v75 = 0LL;
    v27 = WindowsCreateStringReference(L"NavigationRequestIdForBaseActivation", 0x24u, &v74, &v75);
    if ( v27 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27);
    UInt32 = Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt64(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
               v75,
               v43);
    v14 = UInt32;
    if ( UInt32 < 0 )
    {
      v15 = 1421LL;
      goto LABEL_71;
    }
    ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsStandaloneAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &>(
      (unsigned int)v76,
      (unsigned int)&v39,
      (unsigned int)&v38,
      (unsigned int)&v37,
      (__int64)&v36,
      (__int64)v43);
    ViewEventDispatcher::TryShowAsStandaloneAsync(*((RTL_SRWLOCK **)this + 11), v39, v38, v37, v36, v43[0], v9);
  }
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v76);
  v14 = 0;
LABEL_74:
  if ( v29 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v29 + 16LL))(v29);
  v76[0] = &ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v76);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v76);
  if ( v9 )
    (*(void (__fastcall **)(__int64 *))(*v9 + 16))(v9);
  if ( v8 )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v14;
}
