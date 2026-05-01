/*
 * XREFs of ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800CA7A8
 * Callers:
 *     ?GetExperienceManager@VirtualTouchpadExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800CCAD0 (-GetExperienceManager@VirtualTouchpadExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1800216CC (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180077658 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x1800CDAD4 (--$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1801CF740 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801CFEC4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualTouchpadExperienceManager::RuntimeClassInitialize(
        struct IUnknown *this,
        struct IServiceProvider *a2)
{
  struct IWeakReferenceSource *v4; // rbx
  HRESULT v5; // eax
  HRESULT v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  HRESULT v10; // eax
  struct IUnknownVtbl *lpVtbl; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // esi
  __int64 v16; // rbx
  int wnf_subscription; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  struct IUnknownVtbl *v20; // rcx
  struct IUnknownVtbl *v21; // rcx
  _QWORD v22[2]; // [rsp+38h] [rbp-89h] BYREF
  HSTRING_HEADER v23; // [rsp+48h] [rbp-79h] BYREF
  HSTRING v24; // [rsp+60h] [rbp-61h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-59h] BYREF
  HSTRING string; // [rsp+80h] [rbp-41h] BYREF
  _QWORD v27[13]; // [rsp+88h] [rbp-39h] BYREF
  _QWORD *v28; // [rsp+F0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v22[1] = -2LL;
  v4 = (struct IWeakReferenceSource *)((unsigned __int64)&this[1] & -(__int64)(this != 0LL));
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.VirtualTouchpad", 0x30u, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v24 = 0LL;
  v6 = WindowsCreateStringReference(L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App", 0x37u, &v23, &v24);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = CSingleViewShellExperience::RuntimeClassInitialize((HSTRING *)&this[7], v4, a2, v24, string);
  if ( v7 < 0 )
  {
    v8 = 140LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v24 = 0LL;
  v10 = WindowsCreateStringReference(L"ShellExperienceHostVS_ccv6fwk6gx0xp!App", 0x27u, &v23, &v24);
  if ( v10 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
  v7 = CSingleViewShellExperience::AddTestAumid((CSingleViewShellExperience *)&this[7], v24);
  if ( v7 < 0 )
  {
    v8 = 141LL;
    goto LABEL_7;
  }
  HIDWORD(this[14].lpVtbl) = 2;
  lpVtbl = this[42].lpVtbl;
  if ( lpVtbl )
  {
    this[42].lpVtbl = 0LL;
    (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
  }
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, struct IUnknown *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
         &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
         &this[42]);
  if ( v7 < 0 )
  {
    v8 = 147LL;
    goto LABEL_7;
  }
  ((void (__fastcall *)(struct IUnknown *))this->lpVtbl->AddRef)(this);
  v22[0] = 0LL;
  v12 = AgileGitPtr::Initialize((AgileGitPtr *)v22, &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414, this);
  v15 = v12;
  v16 = v22[0];
  if ( v12 >= 0 )
  {
    if ( v22[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 8LL))(v22[0]);
    v27[0] = off_180204AF0;
    v27[1] = v16;
    v28 = v27;
    wnf_subscription = wil::details::make_wnf_subscription_state<unsigned long>(v13, v27, v14, v22);
    v18 = 0LL;
    if ( wnf_subscription >= 0 )
      v18 = v22[0];
    v22[0] = v18;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
      &this[93],
      v22);
    if ( v22[0] )
      (**(void (__fastcall ***)(_QWORD, __int64))v22[0])(v22[0], 1LL);
    if ( v28 )
    {
      v19 = v27;
      LOBYTE(v19) = v28 != v27;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v28 + 24LL))(v28, v19);
    }
    if ( this[93].lpVtbl )
    {
      if ( (struct IUnknown *)this[32].lpVtbl != this )
      {
        ((void (__fastcall *)(struct IUnknown *))this->lpVtbl->AddRef)(this);
        v20 = this[32].lpVtbl;
        this[32].lpVtbl = (struct IUnknownVtbl *)this;
        if ( v20 )
          (*((void (__fastcall **)(struct IUnknownVtbl *))v20->QueryInterface + 2))(v20);
      }
      if ( (struct IServiceProvider *)this[41].lpVtbl != a2 )
      {
        ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
        v21 = this[41].lpVtbl;
        this[41].lpVtbl = (struct IUnknownVtbl *)a2;
        if ( v21 )
          (*((void (__fastcall **)(struct IUnknownVtbl *))v21->QueryInterface + 2))(v21);
      }
      v15 = 0;
    }
    else
    {
      v15 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)0x80004005LL);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x97,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  ((void (__fastcall *)(struct IUnknown *))this->lpVtbl->Release)(this);
  return v15;
}
