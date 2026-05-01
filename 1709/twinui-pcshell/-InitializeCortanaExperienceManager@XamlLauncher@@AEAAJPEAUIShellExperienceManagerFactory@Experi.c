/*
 * XREFs of ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1801819EC
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180180310 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall XamlLauncher::InitializeCortanaExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2)
{
  _QWORD *v4; // r14
  HRESULT v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  _DWORD *v11; // r13
  _DWORD *v12; // rbx
  int v13; // eax
  _QWORD *v14; // r12
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  int v17; // eax
  _QWORD *v18; // r15
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  int v21; // eax
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  int v24; // eax
  _QWORD *v25; // rsi
  _QWORD *v26; // rax
  _QWORD *v27; // rbx
  int v28; // eax
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // rbx
  XamlLauncher *v32; // r8
  int v33; // eax
  __int64 (__fastcall ***v34)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall ***v36)(_QWORD, GUID *, char *); // [rsp+28h] [rbp-79h] BYREF
  XamlLauncher *v37; // [rsp+30h] [rbp-71h]
  __int64 v38; // [rsp+38h] [rbp-69h]
  __int64 v39; // [rsp+40h] [rbp-61h]
  __int64 v40; // [rsp+48h] [rbp-59h]
  __int64 v41; // [rsp+50h] [rbp-51h]
  __int64 v42; // [rsp+58h] [rbp-49h]
  __int64 v43; // [rsp+60h] [rbp-41h]
  _DWORD *v44; // [rsp+68h] [rbp-39h]
  _QWORD *v45; // [rsp+70h] [rbp-31h]
  _QWORD *v46; // [rsp+78h] [rbp-29h]
  _QWORD *v47; // [rsp+80h] [rbp-21h]
  _QWORD *v48; // [rsp+88h] [rbp-19h]
  __int64 v49; // [rsp+90h] [rbp-11h]
  _QWORD *v50; // [rsp+98h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-1h] BYREF
  HSTRING string; // [rsp+B8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v43 = -2LL;
  v37 = this;
  v4 = 0LL;
  v36 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.Cortana", 0x28u, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, HSTRING, _QWORD))(*(_QWORD *)a2 + 48LL))(
         a2,
         string,
         &v36);
  v7 = v6;
  string = 0LL;
  if ( v6 < 0 )
  {
    v8 = 731LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_60;
  }
  v9 = (_QWORD *)((char *)this + 112);
  v10 = *((_QWORD *)this + 14);
  if ( v10 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v6 = (**v36)(v36, &GUID_cc316ad0_3e56_4dcb_bf02_8c10ea8bfbbe, (char *)this + 112);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 732LL;
    goto LABEL_9;
  }
  v11 = 0LL;
  v38 = 0LL;
  v12 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    *(_QWORD *)v12 = &IAppViewDataSourceAdapter::`vftable';
    v12[3] = 1;
    *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v12 + 2) = this;
    *(_QWORD *)v12 = off_18020E3F0;
    v11 = v12;
  }
  v44 = v11;
  v38 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, char *))(*(_QWORD *)*v9 + 216LL))(*v9, v11, (char *)this + 184);
  v7 = v13;
  if ( v13 >= 0 )
  {
    v14 = 0LL;
    v39 = 0LL;
    v15 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15;
    if ( v15 )
    {
      *v15 = &IAppViewDataSourceAdapter::`vftable';
      *((_DWORD *)v15 + 3) = 1;
      *v15 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v16[2] = this;
      *v16 = off_18020E328;
      v14 = v16;
    }
    v45 = v14;
    v39 = 0LL;
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v9 + 232LL))(*v9, v14, (char *)this + 192);
    v7 = v17;
    if ( v17 >= 0 )
    {
      v18 = 0LL;
      v40 = 0LL;
      v19 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v20 = v19;
      if ( v19 )
      {
        *v19 = &IAppViewDataSourceAdapter::`vftable';
        *((_DWORD *)v19 + 3) = 1;
        *v19 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v20[2] = this;
        *v20 = off_18020E300;
        v18 = v20;
      }
      v46 = v18;
      v40 = 0LL;
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v9 + 264LL))(*v9, v18, (char *)this + 200);
      v7 = v21;
      if ( v21 >= 0 )
      {
        v41 = 0LL;
        v22 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v23 = v22;
        if ( v22 )
        {
          *v22 = &IAppViewDataSourceAdapter::`vftable';
          *((_DWORD *)v22 + 3) = 1;
          *v22 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::`vftable';
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
          v23[2] = this;
          *v23 = off_18020E378;
          v4 = v23;
        }
        v47 = v4;
        v41 = 0LL;
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(*(_QWORD *)*v9 + 280LL))(
                *v9,
                v4,
                (char *)this + 208);
        v7 = v24;
        if ( v24 >= 0 )
        {
          v25 = 0LL;
          v42 = 0LL;
          v26 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          v27 = v26;
          if ( v26 )
          {
            *v26 = &IAppViewDataSourceAdapter::`vftable';
            *((_DWORD *)v26 + 3) = 1;
            *v26 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            v27[2] = this;
            *v27 = off_18020E350;
            v25 = v27;
          }
          v48 = v25;
          v42 = 0LL;
          v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, char *))(**((_QWORD **)this + 14) + 168LL))(
                  *((_QWORD *)this + 14),
                  v25,
                  (char *)this + 216);
          v7 = v28;
          if ( v28 >= 0 )
          {
            v29 = 0LL;
            v49 = 0LL;
            v30 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
            v31 = v30;
            if ( v30 )
            {
              *v30 = &IAppViewDataSourceAdapter::`vftable';
              *((_DWORD *)v30 + 3) = 1;
              *v30 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::`vftable';
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
              v32 = v37;
              v31[2] = v37;
              *v31 = off_18020E210;
              v29 = v31;
            }
            else
            {
              v32 = v37;
            }
            v50 = v29;
            v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(**((_QWORD **)v32 + 14) + 200LL))(
                    *((_QWORD *)v32 + 14),
                    v29,
                    (__int64)v32 + 224);
            v7 = v33;
            if ( v33 >= 0 )
              v7 = 0;
            else
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x319,
                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                (const char *)(unsigned int)v33);
            if ( v29 )
              (*(void (__fastcall **)(_QWORD *))(*v29 + 16LL))(v29);
          }
          else
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x308,
              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              (const char *)(unsigned int)v28);
          }
          if ( v25 )
            (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x300,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            (const char *)(unsigned int)v24);
        }
        if ( v4 )
          (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x2F6,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v21);
      }
      if ( v18 )
        (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2EC,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v17);
    }
    if ( v14 )
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2E4,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v13);
  }
  if ( v11 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_60:
  v34 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v34)[2])(v34);
  }
  return v7;
}
