/*
 * XREFs of ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1801807A0
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180180310 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlLauncher::InitializeStartExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2)
{
  HRESULT v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  IUnknown **v8; // r12
  __int64 v9; // rcx
  _DWORD *v10; // r14
  _DWORD *v11; // rbx
  int v12; // eax
  _QWORD *v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  int v16; // eax
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  int v20; // eax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, char *); // [rsp+28h] [rbp-39h] BYREF
  __int64 v24; // [rsp+30h] [rbp-31h]
  __int64 v25; // [rsp+38h] [rbp-29h]
  __int64 v26; // [rsp+40h] [rbp-21h]
  _DWORD *v27; // [rsp+48h] [rbp-19h]
  _QWORD *v28; // [rsp+50h] [rbp-11h]
  __int64 v29; // [rsp+58h] [rbp-9h]
  _QWORD *v30; // [rsp+60h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+7h] BYREF
  HSTRING string; // [rsp+80h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v26 = -2LL;
  v23 = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.StartMenu", 0x2Au, &hstringHeader, &string);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, HSTRING, _QWORD))(*(_QWORD *)a2 + 48LL))(
         a2,
         string,
         &v23);
  v6 = v5;
  string = 0LL;
  if ( v5 < 0 )
  {
    v7 = 427LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_35;
  }
  v8 = (IUnknown **)((char *)this + 104);
  v9 = *((_QWORD *)this + 13);
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v5 = (**v23)(v23, &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee, (char *)this + 104);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 428LL;
    goto LABEL_9;
  }
  IUnknown_SetSite(*v8, *((IUnknown **)this + 2));
  v10 = 0LL;
  v24 = 0LL;
  v11 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    *(_QWORD *)v11 = &IAppViewDataSourceAdapter::`vftable';
    v11[3] = 1;
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v11 + 2) = this;
    *(_QWORD *)v11 = off_18020E3C8;
    v10 = v11;
  }
  v27 = v10;
  v24 = 0LL;
  v12 = ((__int64 (__fastcall *)(IUnknown *, _DWORD *, char *))(*v8)->lpVtbl[8].AddRef)(*v8, v10, (char *)this + 160);
  v6 = v12;
  if ( v12 >= 0 )
  {
    v13 = 0LL;
    v25 = 0LL;
    v14 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      *v14 = &IAppViewDataSourceAdapter::`vftable';
      *((_DWORD *)v14 + 3) = 1;
      *v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v15[2] = this;
      *v15 = off_18020E3A0;
      v13 = v15;
    }
    v28 = v13;
    v25 = 0LL;
    v16 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *, char *))(*v8)->lpVtbl[9].QueryInterface)(
            *v8,
            v13,
            (char *)this + 168);
    v6 = v16;
    if ( v16 >= 0 )
    {
      v17 = 0LL;
      v29 = 0LL;
      v18 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v19 = v18;
      if ( v18 )
      {
        *v18 = &IAppViewDataSourceAdapter::`vftable';
        *((_DWORD *)v18 + 3) = 1;
        *v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v19[2] = this;
        *v19 = off_18020E418;
        v17 = v19;
      }
      v30 = v17;
      v20 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *, char *))(*v8)->lpVtbl[7].Release)(
              *v8,
              v17,
              (char *)this + 176);
      v6 = v20;
      if ( v20 >= 0 )
        v6 = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1D8,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v20);
      if ( v17 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1C2,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v16);
    }
    if ( v13 )
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1B7,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v12);
  }
  if ( v10 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_35:
  v21 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v21)[2])(v21);
  }
  return v6;
}
