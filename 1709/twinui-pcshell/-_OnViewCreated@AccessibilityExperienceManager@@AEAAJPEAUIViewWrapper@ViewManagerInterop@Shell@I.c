/*
 * XREFs of ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x1801B1E68
 * Callers:
 *     ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1801B1CA0 (-_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AccessibilityExperienceManager::_OnViewCreated(
        AccessibilityExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct EventRegistrationToken a3)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  char v8; // r15
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  _DWORD *v13; // rsi
  _DWORD *v14; // rax
  _DWORD *v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // [rsp+28h] [rbp-59h] BYREF
  __int64 v23; // [rsp+30h] [rbp-51h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v24; // [rsp+38h] [rbp-49h] BYREF
  char v25[8]; // [rsp+40h] [rbp-41h] BYREF
  __int128 v26; // [rsp+48h] [rbp-39h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v27; // [rsp+58h] [rbp-29h]
  char v28; // [rsp+60h] [rbp-21h]
  _BYTE v29[24]; // [rsp+68h] [rbp-19h]
  __int64 v30; // [rsp+80h] [rbp-1h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v31; // [rsp+88h] [rbp+7h]
  __int64 v32; // [rsp+90h] [rbp+Fh]
  _BYTE v33[16]; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v30 = -2LL;
  v24 = a2;
  v31 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v22 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))a2)(
         a2,
         &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
         &v22);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x276,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_38;
  }
  if ( !*((_QWORD *)this + 47)
    && *((struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)this + 47) != a2 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *((_QWORD *)this + 47);
    *((_QWORD *)this + 47) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( !*((_QWORD *)this + 48) )
  {
    v6 = 0;
    goto LABEL_38;
  }
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v22 + 48LL))(v22, v25);
  v27 = &v24;
  v8 = 1;
  v28 = 1;
  v9 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(**((_QWORD **)this + 48) + 104LL))(
         *((_QWORD *)this + 48),
         v24);
  v6 = v9;
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 48) + 56LL))(*((_QWORD *)this + 48), v33);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 655LL;
      goto LABEL_15;
    }
    v23 = 0LL;
    v11 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))a2)(
            a2,
            &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
            &v23);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 658LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_33:
      v18 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_35;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 32LL))(v23, v33);
    v6 = v11;
    if ( v11 < 0 )
    {
      v12 = 659LL;
      goto LABEL_20;
    }
    *(_QWORD *)&v26 = AccessibilityExperienceManager::_OnClientWindowReadyForPresentationChanged;
    DWORD2(v26) = 0;
    *(_QWORD *)v29 = this;
    *(_OWORD *)&v29[8] = v26;
    v13 = 0LL;
    v32 = 0LL;
    v14 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      *(_QWORD *)v14 = &IAppViewDataSourceAdapter::`vftable';
      v14[3] = 1;
      *(_QWORD *)v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_OWORD *)v15 + 1) = *(_OWORD *)v29;
      *((_QWORD *)v15 + 4) = *(_QWORD *)&v29[16];
      *(_QWORD *)v15 = off_180201DF0;
      v13 = v15;
    }
    *(_QWORD *)&v26 = v13;
    v16 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v22 + 80LL))(v22, v13, (char *)this + 392);
    v6 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64))(*(_QWORD *)v24 + 336LL))(
              v24,
              4LL);
      v6 = v16;
      if ( v16 >= 0 )
      {
        v8 = 0;
        v28 = 0;
        v6 = 0;
LABEL_31:
        if ( v13 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
        goto LABEL_33;
      }
      v17 = 668LL;
    }
    else
    {
      v17 = 665LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_31;
  }
  v10 = 652LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_35:
  if ( v8 )
  {
    v19 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, _QWORD))(*(_QWORD *)v24 + 336LL))(
            v24,
            0LL);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x289,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
  }
LABEL_38:
  v20 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
  return v6;
}
