/*
 * XREFs of ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801B0730
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x1801B16E8 (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibilityExperienceManager::SubscribeToServices(
        AccessibilityExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 *v6; // r15
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  _DWORD *v10; // rdi
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // r15
  __int64 v17; // rcx
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rbx
  _QWORD *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // [rsp+38h] [rbp-39h] BYREF
  __int128 v28; // [rsp+40h] [rbp-31h]
  _BYTE v29[24]; // [rsp+50h] [rbp-21h]
  __int64 v30; // [rsp+68h] [rbp-9h]
  __int64 v31; // [rsp+70h] [rbp-1h]
  HSTRING string; // [rsp+78h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v30 = -2LL;
  if ( *((struct IServiceProvider **)this + 28) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
    v4 = *((_QWORD *)this + 28);
    *((_QWORD *)this + 28) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 28);
  v6 = (__int64 *)((char *)this + 216);
  v7 = *((_QWORD *)this + 27);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v5 + 24LL))(
         v5,
         &SID_ViewEventDispatcher,
         &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e,
         (char *)this + 216);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x69,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  *(_QWORD *)&v28 = AccessibilityExperienceManager::_OnViewEvent;
  DWORD2(v28) = 0;
  *(_QWORD *)v29 = (char *)this - 48;
  *(_OWORD *)&v29[8] = v28;
  v10 = 0LL;
  v31 = 0LL;
  v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)v11 = &IAppViewDataSourceAdapter::`vftable';
    v11[3] = 1;
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v12 + 1) = *(_OWORD *)v29;
    *((_QWORD *)v12 + 4) = *(_QWORD *)&v29[16];
    *(_QWORD *)v12 = off_1802110D8;
    v10 = v12;
  }
  *(_QWORD *)&v28 = v10;
  v13 = *v6;
  if ( WindowsCreateStringReference(L"AccessibilityExperienceId", 0x19u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v14 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, HSTRING, char *))(*(_QWORD *)v13 + 48LL))(
          v13,
          v10,
          0LL,
          string,
          (char *)this + 200);
  v9 = v14;
  if ( v14 >= 0 )
  {
    v16 = (_QWORD *)((char *)this + 360);
    v17 = *((_QWORD *)this + 45);
    if ( v17 )
    {
      *v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            (char *)this + 360);
    v9 = v14;
    if ( v14 < 0 )
    {
      v15 = 114LL;
      goto LABEL_22;
    }
    v27 = 0LL;
    lpVtbl = a2->lpVtbl;
    v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v27);
    v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            v19);
    v9 = v20;
    if ( v20 >= 0 )
    {
      v22 = v27;
      v23 = (_QWORD *)((char *)this + 240);
      v24 = *((_QWORD *)this + 30);
      if ( v24 )
      {
        *v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *, char *))(*(_QWORD *)v22 + 72LL))(
              v22,
              0LL,
              &SID_ImmersiveLayout,
              &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c,
              (char *)this + 240);
      v9 = v20;
      if ( v20 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v16 + 40LL))(
                *v16,
                ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 48) >> 64),
                (char *)this + 208);
        v9 = v20;
        if ( v20 >= 0 )
        {
          v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v23 + 40LL))(
                  *v23,
                  10LL,
                  ((unsigned __int64)this + 80) & -(__int64)(this != (AccessibilityExperienceManager *)48),
                  (char *)this + 212);
          v9 = v20;
          if ( v20 >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v23 + 72LL))(*v23, (char *)this + 400);
            *((_OWORD *)this + 24) = 0LL;
            AccessibilityExperienceManager::RelaunchWithDelay((AccessibilityExperienceManager *)((char *)this - 48));
            v9 = 0;
LABEL_35:
            v25 = v27;
            if ( v27 )
            {
              v27 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
            }
            goto LABEL_37;
          }
          v21 = 126LL;
        }
        else
        {
          v21 = 123LL;
        }
      }
      else
      {
        v21 = 121LL;
      }
    }
    else
    {
      v21 = 120LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_35;
  }
  v15 = 112LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v14);
LABEL_37:
  if ( v10 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  return v9;
}
