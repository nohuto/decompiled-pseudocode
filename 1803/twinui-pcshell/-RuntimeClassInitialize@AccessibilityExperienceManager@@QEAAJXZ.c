/*
 * XREFs of ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1802596A0
 * Callers:
 *     ??$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAccessibilityExperienceManager@@@Z @ 0x180257318 (--$MakeAndInitialize@VAccessibilityExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAc.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180098DA4 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010A094 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x18013D280 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18013D2F4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x18018028C (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x180180A54 (--4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x18018CAE4 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18018D5B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802413A0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@wil@@CAX_N.c)
 *     ?EnsureInputDeviceWatcher@AccessibilityExperienceManager@@AEAAJXZ @ 0x180258994 (-EnsureInputDeviceWatcher@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?Subscribe@WnfHelper@@QEAAJPEAUIWnfCallback@@@Z @ 0x18025B10C (-Subscribe@WnfHelper@@QEAAJPEAUIWnfCallback@@@Z.c)
 *     ?Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z @ 0x18030B990 (-Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibilityExperienceManager::RuntimeClassInitialize(AccessibilityExperienceManager *this)
{
  HWND Window; // rax
  _DWORD *v3; // rax
  std::_Ref_count_base *v4; // rcx
  WnfHelper *v5; // rcx
  int AgileReference; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx
  wil::details **wnf_subscription; // rax
  struct wil::details::wnf_subscription_state_base *v13; // rdx
  wil::details **v14; // rbx
  __int64 v15; // rdx
  EyeControlApp *v16; // rax
  EyeControlApp *v17; // rbx
  EyeControlApp *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v26; // [rsp+70h] [rbp-90h] BYREF
  wil::details *v27[3]; // [rsp+78h] [rbp-88h] BYREF
  WNDCLASSEXW v28; // [rsp+90h] [rbp-70h] BYREF
  __int128 v29; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall **v32)(); // [rsp+100h] [rbp+0h] BYREF
  __int64 v33[12]; // [rsp+108h] [rbp+8h] BYREF
  __int64 (__fastcall ***v34)(); // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v27[1] = (wil::details *)-2LL;
  memset_0(&v28, 0, sizeof(v28));
  v28.cbSize = 80;
  v28.lpfnWndProc = (WNDPROC)_AccessibilityEMWndProc;
  v28.lpszClassName = L"AccessibilityEMWndClass";
  RegisterClassExW(&v28);
  Window = CreateWindowExW(
             0,
             L"AccessibilityEMWndClass",
             L"AccessibilityEMWnd",
             0,
             0,
             0,
             0,
             0,
             HWND_MESSAGE,
             0LL,
             0LL,
             0LL);
  *((_QWORD *)this + 54) = Window;
  SetWindowLongPtrW(Window, -21, (LONG_PTR)this);
  v3 = operator new(0x20uLL);
  v26 = v3;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj<WnfHelper>::`vftable';
  *((_QWORD *)v3 + 2) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)this + 38) = v3 + 4;
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 39);
  *((_QWORD *)this + 39) = v3;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (WnfHelper *)*((_QWORD *)this + 38);
  if ( v5 )
    WnfHelper::Subscribe(v5, (AccessibilityExperienceManager *)((char *)this + 136));
  v26 = (_DWORD *)((char *)this + 152);
  if ( this != (AccessibilityExperienceManager *)-152LL )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 19) + 8LL))((char *)this + 152);
  v25 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v25);
  if ( this == (AccessibilityExperienceManager *)-152LL )
  {
    v8 = v25;
  }
  else
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v24);
    AgileReference = RoGetAgileReference(0LL, &GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c, (char *)this + 152, &v24);
    if ( AgileReference < 0 )
    {
      v8 = v25;
    }
    else
    {
      v7 = v25;
      v8 = v24;
      v25 = v24;
      v24 = v7;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v24);
    if ( AgileReference < 0 )
    {
      v9 = (unsigned int)AgileReference;
      v10 = 76LL;
      goto LABEL_38;
    }
  }
  v24 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v34 = 0LL;
  v32 = off_180321BA8;
  v33[0] = 0LL;
  AgileGitPtr::operator=(v33, &v24);
  v34 = &v32;
  wnf_subscription = (wil::details **)wil::make_wnf_subscription_nothrow<unsigned long>(v27, v11, (__int64)&v32);
  v14 = wnf_subscription;
  if ( (wil::details **)((char *)this + 320) != wnf_subscription )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 40,
      *wnf_subscription);
    *v14 = 0LL;
  }
  if ( v27[0] )
    wil::details::delete_wnf_subscription_state(v27[0], v13);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v32,
    (__int64)v13);
  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)&v32,
    v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v24);
  if ( *((_QWORD *)this + 40) )
  {
    v16 = (EyeControlApp *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v16;
    if ( v16 )
    {
      memset_0(v16, 0, 0x40uLL);
      *(_QWORD *)v17 = &EyeControlApp::`vftable';
      *((_QWORD *)v17 + 1) = 0LL;
      *((_QWORD *)v17 + 2) = 0LL;
      *((_QWORD *)v17 + 3) = 0LL;
      *((_QWORD *)v17 + 4) = 0LL;
      *((_QWORD *)v17 + 5) = 0LL;
      *((_QWORD *)v17 + 6) = 0LL;
      *((_QWORD *)v17 + 7) = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
    v18 = (EyeControlApp *)*((_QWORD *)this + 52);
    if ( v17 != v18 )
    {
      if ( v18 )
        (**(void (__fastcall ***)(EyeControlApp *, __int64))v18)(v18, 1LL);
      *((_QWORD *)this + 52) = v17;
      v18 = v17;
    }
    if ( v18 )
    {
      v19 = EyeControlApp::Initialize(v18, (AccessibilityExperienceManager *)((char *)this + 152));
      AgileReference = v19;
      if ( v19 >= 0 )
      {
        v29 = *(_OWORD *)&SID_AccessibilityExperienceManager.Revision;
        v30 = 0LL;
        v31 = 0LL;
        v19 = CImmersiveShellComponent::RegisterServiceInformation(
                (AccessibilityExperienceManager *)((char *)this + 48),
                (const struct CImmersiveShellComponent::ISC_SERVICE *)&v29,
                1LL);
        AgileReference = v19;
        if ( v19 >= 0 )
        {
          Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 37);
          v19 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((CreationThreadDispatcher **)this + 37);
          AgileReference = v19;
          if ( v19 >= 0 )
          {
            AccessibilityExperienceManager::EnsureInputDeviceWatcher(this);
            wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::ReportUsageToService(v21, v20, v22);
            AgileReference = 0;
            goto LABEL_40;
          }
          v10 = 98LL;
        }
        else
        {
          v10 = 96LL;
        }
      }
      else
      {
        v10 = 94LL;
      }
      v9 = (unsigned int)v19;
    }
    else
    {
      AgileReference = -2147024882;
      v9 = 2147942414LL;
      v10 = 92LL;
    }
  }
  else
  {
    AgileReference = -2147467259;
    v9 = 2147500037LL;
    v10 = 88LL;
  }
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)v9);
LABEL_40:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
  return (unsigned int)AgileReference;
}
