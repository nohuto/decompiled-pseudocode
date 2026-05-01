/*
 * XREFs of ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18016BB50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@VCApplicationManager@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@01@PEAVCApplicationManager@@P83@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@5678@@Z@Z @ 0x1800182C0 (--$Callback@U-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PE.c)
 *     ?ScaleRectFromRegistry@@YAXPEAUtagRECT@@@Z @ 0x18016B7F0 (-ScaleRectFromRegistry@@YAXPEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::SubscribeToServices(
        TouchKeyboardExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  _QWORD *v14; // r15
  __int64 v15; // rcx
  struct IServiceProviderVtbl *lpVtbl; // rdi
  __int64 *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdi
  _QWORD *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v25; // [rsp+38h] [rbp-29h] BYREF
  __int128 v26; // [rsp+48h] [rbp-19h] BYREF
  __int64 v27; // [rsp+58h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v27 = -2LL;
  if ( *((struct IServiceProvider **)this + 19) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
    v4 = *((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 19);
  v6 = (__int64 *)((char *)this + 144);
  v7 = *((_QWORD *)this + 18);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v5 + 24LL))(
         v5,
         &SID_ViewEventDispatcher,
         &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e,
         (char *)this + 144);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1C7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  *(_QWORD *)&v26 = TouchKeyboardExperienceManager::_OnViewEvent;
  DWORD2(v26) = 0;
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = v26;
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,CApplicationManager,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>(
    &v26,
    (__int64)this - 40,
    (__int128 *)&hstringHeader);
  v10 = *v6;
  if ( WindowsCreateStringReference(
         L"TouchKeyboardExperienceId",
         0x19u,
         (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
         (HSTRING *)&hstringHeader) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v11 = v26;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, PVOID, char *))(*(_QWORD *)v10 + 48LL))(
          v10,
          v26,
          0LL,
          hstringHeader.Reserved.Reserved1,
          (char *)this + 128);
  v9 = v12;
  if ( v12 >= 0 )
  {
    v14 = (_QWORD *)((char *)this + 288);
    v15 = *((_QWORD *)this + 36);
    if ( v15 )
    {
      *v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            (char *)this + 288);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 464LL;
      goto LABEL_18;
    }
    v25 = 0LL;
    lpVtbl = a2->lpVtbl;
    v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v25);
    v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            v17);
    v9 = v18;
    if ( v18 >= 0 )
    {
      v20 = v25;
      v21 = (_QWORD *)((char *)this + 168);
      v22 = *((_QWORD *)this + 21);
      if ( v22 )
      {
        *v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *, char *))(*(_QWORD *)v20 + 72LL))(
              v20,
              0LL,
              &SID_ImmersiveLayout,
              &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c,
              (char *)this + 168);
      v9 = v18;
      if ( v18 >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v14 + 40LL))(
                *v14,
                ((unsigned __int64)this + 56) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64),
                (char *)this + 136);
        v9 = v18;
        if ( v18 >= 0 )
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v21 + 40LL))(
                  *v21,
                  10LL,
                  ((unsigned __int64)this + 64) & -(__int64)(this != (TouchKeyboardExperienceManager *)40),
                  (char *)this + 140);
          v9 = v18;
          if ( v18 >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v21 + 72LL))(*v21, (char *)this + 304);
            ScaleRectFromRegistry((struct tagRECT *)this + 19);
            v9 = 0;
LABEL_31:
            v23 = v25;
            if ( v25 )
            {
              v25 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            }
            goto LABEL_33;
          }
          v19 = 476LL;
        }
        else
        {
          v19 = 473LL;
        }
      }
      else
      {
        v19 = 471LL;
      }
    }
    else
    {
      v19 = 470LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_31;
  }
  v13 = 462LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
LABEL_33:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v9;
}
