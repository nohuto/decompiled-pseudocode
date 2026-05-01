/*
 * XREFs of ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18019ABC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004258 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800DDB4C (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18019B950 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 *     ??$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVTouchKeyboardExperienceManager@@@SmartCookie@@QEAAJPEAUITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVTouchKeyboardExperienceManager@@@Z @ 0x18019E81C (--$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP8_ea_18019E81C.c)
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1801A012C (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::SubscribeToServices(
        TouchKeyboardExperienceManager *this,
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
  _QWORD *v16; // r12
  __int64 v17; // rcx
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rbx
  _QWORD *v23; // r15
  __int64 v24; // rcx
  int v25; // eax
  const char *v26; // r9
  HANDLE v27; // rdx
  int take_hevent_ownership; // eax
  _QWORD *v29; // rdx
  unsigned __int64 v30; // r9
  __int64 v31; // rcx
  _QWORD *v32; // r15
  __int64 v33; // rcx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rcx
  HANDLE hObject; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v40; // [rsp+48h] [rbp-C0h]
  _BYTE v41[24]; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+70h] [rbp-98h]
  __int64 v43; // [rsp+78h] [rbp-90h]
  HSTRING string; // [rsp+80h] [rbp-88h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v46[13]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD *v47; // [rsp+110h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v42 = -2LL;
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
      (void *)0x285,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  *(_QWORD *)&v40 = TouchKeyboardExperienceManager::OnViewEvent;
  DWORD2(v40) = 0;
  *(_QWORD *)v41 = (char *)this - 48;
  *(_OWORD *)&v41[8] = v40;
  v10 = 0LL;
  v43 = 0LL;
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
    *((_OWORD *)v12 + 1) = *(_OWORD *)v41;
    *((_QWORD *)v12 + 4) = *(_QWORD *)&v41[16];
    *(_QWORD *)v12 = off_1802110D8;
    v10 = v12;
  }
  *(_QWORD *)&v40 = v10;
  v13 = *v6;
  if ( WindowsCreateStringReference(L"TouchKeyboardExperienceId", 0x19u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v14 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, HSTRING, char *))(*(_QWORD *)v13 + 48LL))(
          v13,
          v10,
          0LL,
          string,
          (char *)this + 176);
  v9 = v14;
  if ( v14 >= 0 )
  {
    v16 = (_QWORD *)((char *)this + 368);
    v17 = *((_QWORD *)this + 46);
    if ( v17 )
    {
      *v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            (char *)this + 368);
    v9 = v14;
    if ( v14 < 0 )
    {
      v15 = 654LL;
      goto LABEL_22;
    }
    v39 = 0LL;
    lpVtbl = a2->lpVtbl;
    v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v39);
    v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            v19);
    v9 = v20;
    if ( v20 < 0 )
    {
      v21 = 660LL;
      goto LABEL_59;
    }
    v22 = v39;
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
    if ( v20 < 0 )
    {
      v21 = 661LL;
      goto LABEL_59;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(*(_QWORD *)*v16 + 40LL))(
            *v16,
            -(__int64)(this != (TouchKeyboardExperienceManager *)48) & ((unsigned __int64)this + 72),
            (char *)this + 184);
    v9 = v20;
    if ( v20 < 0 )
    {
      v21 = 663LL;
      goto LABEL_59;
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v23 + 40LL))(
            *v23,
            10LL,
            ((unsigned __int64)this + 80) & -(__int64)(this != (TouchKeyboardExperienceManager *)48),
            (char *)this + 188);
    v9 = v20;
    if ( v20 < 0 )
    {
      v21 = 666LL;
      goto LABEL_59;
    }
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v23 + 72LL))(*v23, (char *)this + 384);
    v20 = TouchKeyboardExperienceManager::WorkAreaChanged(
            (TouchKeyboardExperienceManager *)((char *)this + 80),
            0,
            (const struct tagRECT *)this + 24);
    v9 = v20;
    if ( v20 < 0 )
    {
      v21 = 670LL;
      goto LABEL_59;
    }
    v46[0] = off_18020F9B8;
    v46[1] = (char *)this - 48;
    v47 = v46;
    hObject = 0LL;
    v25 = wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
            &hObject,
            1,
            0LL);
    v9 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15E1,
        (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v25);
      if ( !hObject || CloseHandle(hObject) )
      {
LABEL_41:
        if ( v47 )
        {
          v29 = v46;
          LOBYTE(v29) = v47 != v46;
          (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v47 + 24LL))(v47, v29);
        }
        if ( (v9 & 0x80000000) != 0 )
        {
          v30 = v9;
          v21 = 676LL;
LABEL_60:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v21,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)v30);
          goto LABEL_62;
        }
        v20 = RegisterScaleChangeEvent(*(_QWORD *)(*((_QWORD *)this + 26) + 112LL), (char *)this + 192);
        v9 = v20;
        if ( v20 >= 0 )
        {
          v31 = *((_QWORD *)this + 31);
          if ( v31 )
          {
            *((_QWORD *)this + 31) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                  a2,
                  &SID_InputHostLayout,
                  &GUID_260b6f30_f9bc_452d_be7e_d8bdc0ea3a0a,
                  (char *)this + 248);
          v9 = v20;
          if ( v20 >= 0 )
          {
            v32 = (_QWORD *)((char *)this + 440);
            v33 = *((_QWORD *)this + 55);
            if ( v33 )
            {
              *v32 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
            }
            v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                    a2,
                    &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                    &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                    (char *)this + 440);
            v9 = v20;
            if ( v20 >= 0 )
            {
              v20 = SmartCookie::Register<ITabletModeController,long (ITabletModeController::*)(ITabletModeChangeListener *,unsigned long *),long (ITabletModeController::*)(unsigned long),TouchKeyboardExperienceManager *>(
                      (int)this + 448,
                      *v32,
                      v34,
                      v35,
                      (__int64)this - 48);
              v9 = v20;
              if ( v20 >= 0 )
              {
                v20 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v32 + 24LL))(*v32, (char *)this + 432);
                v9 = v20;
                if ( v20 >= 0 )
                {
                  v9 = 0;
LABEL_62:
                  v36 = v39;
                  if ( v39 )
                  {
                    v39 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
                  }
                  goto LABEL_64;
                }
                v21 = 688LL;
              }
              else
              {
                v21 = 687LL;
              }
            }
            else
            {
              v21 = 683LL;
            }
          }
          else
          {
            v21 = 681LL;
          }
        }
        else
        {
          v21 = 678LL;
        }
LABEL_59:
        v30 = (unsigned int)v20;
        goto LABEL_60;
      }
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x878,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v26);
    }
    v27 = hObject;
    hObject = 0LL;
    take_hevent_ownership = wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_take_hevent_ownership(
                              (char *)this + 208,
                              v27,
                              v46);
    v9 = take_hevent_ownership;
    if ( take_hevent_ownership < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15E1,
        (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)take_hevent_ownership);
    goto LABEL_41;
  }
  v15 = 652LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v14);
LABEL_64:
  if ( v10 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  return v9;
}
