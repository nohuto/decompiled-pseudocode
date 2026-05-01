/*
 * XREFs of ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B6500
 * Callers:
 *     ?GetExperienceManager@VirtualTouchpadExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800B8780 (-GetExperienceManager@VirtualTouchpadExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180020BE8 (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180074858 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1800B9470 (--$make_wnf_subscription_nothrow@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18018023C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180180944 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // rbx
  _QWORD *wnf_subscription; // rax
  _QWORD *v17; // rdx
  struct IUnknownVtbl *v18; // rcx
  struct IUnknownVtbl *v19; // rcx
  _QWORD v20[2]; // [rsp+38h] [rbp-89h] BYREF
  HSTRING_HEADER v21; // [rsp+48h] [rbp-79h] BYREF
  HSTRING v22; // [rsp+60h] [rbp-61h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-59h] BYREF
  HSTRING string; // [rsp+80h] [rbp-41h] BYREF
  _QWORD v25[13]; // [rsp+88h] [rbp-39h] BYREF
  _QWORD *v26; // [rsp+F0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v20[1] = -2LL;
  v4 = (struct IWeakReferenceSource *)((unsigned __int64)&this[1] & -(__int64)(this != 0LL));
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.VirtualTouchpad", 0x30u, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v22 = 0LL;
  v6 = WindowsCreateStringReference(L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App", 0x37u, &v21, &v22);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = CSingleViewShellExperience::RuntimeClassInitialize((HSTRING *)&this[7], v4, a2, v22, string);
  if ( v7 < 0 )
  {
    v8 = 139LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v22 = 0LL;
  v10 = WindowsCreateStringReference(L"ShellExperienceHostVS_ccv6fwk6gx0xp!App", 0x27u, &v21, &v22);
  if ( v10 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
  v7 = CSingleViewShellExperience::AddTestAumid((CSingleViewShellExperience *)&this[7], v22);
  if ( v7 < 0 )
  {
    v8 = 140LL;
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
    v8 = 146LL;
    goto LABEL_7;
  }
  ((void (__fastcall *)(struct IUnknown *))this->lpVtbl->AddRef)(this);
  v20[0] = 0LL;
  v12 = AgileGitPtr::Initialize((AgileGitPtr *)v20, &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414, this);
  v14 = v12;
  v15 = v20[0];
  if ( v12 >= 0 )
  {
    if ( v20[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 8LL))(v20[0]);
    v25[0] = off_1801B0020;
    v25[1] = v15;
    v26 = v25;
    wnf_subscription = (_QWORD *)wil::make_wnf_subscription_nothrow<unsigned long>(v20, v13, v25);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
      &this[93],
      wnf_subscription);
    if ( v20[0] )
      (**(void (__fastcall ***)(_QWORD, __int64))v20[0])(v20[0], 1LL);
    if ( v26 )
    {
      v17 = v25;
      LOBYTE(v17) = v26 != v25;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v26 + 24LL))(v26, v17);
    }
    if ( this[93].lpVtbl )
    {
      if ( (struct IUnknown *)this[32].lpVtbl != this )
      {
        ((void (__fastcall *)(struct IUnknown *))this->lpVtbl->AddRef)(this);
        v18 = this[32].lpVtbl;
        this[32].lpVtbl = (struct IUnknownVtbl *)this;
        if ( v18 )
          (*((void (__fastcall **)(struct IUnknownVtbl *))v18->QueryInterface + 2))(v18);
      }
      if ( (struct IServiceProvider *)this[41].lpVtbl != a2 )
      {
        ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
        v19 = this[41].lpVtbl;
        this[41].lpVtbl = (struct IUnknownVtbl *)a2;
        if ( v19 )
          (*((void (__fastcall **)(struct IUnknownVtbl *))v19->QueryInterface + 2))(v19);
      }
      v14 = 0;
    }
    else
    {
      v14 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)0x80004005LL);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x96,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  ((void (__fastcall *)(struct IUnknown *))this->lpVtbl->Release)(this);
  return v14;
}
