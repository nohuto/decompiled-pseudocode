/*
 * XREFs of ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800405FC
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74__1__1_::Invoke @ 0x180044DE0 (Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74__1.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z @ 0x18003C58C (-SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x18003C980 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x18003F7A8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043D94 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_92cd811acd1ff6aef67e8ea59a74ce1e___ @ 0x180044670 (Microsoft--WRL--Callback_IAsyncCallback__lambda_92cd811acd1ff6aef67e8ea59a74ce1e___.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAppViewManager::_ShowAsViewModeWorker(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  IUnknown *v9; // rbx
  __int64 *v10; // rax
  HRESULT Service; // eax
  int v12; // eax
  HRESULT v13; // eax
  __int64 v14; // rdx
  void *v15; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v16; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v17; // rcx
  bool v18; // bl
  void *v19; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v20; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v21; // rcx
  HRESULT v22; // eax
  int v23; // eax
  HRESULT v24; // eax
  int v25; // eax
  void *v26; // rbx
  int v27; // eax
  struct Windows::Foundation::Collections::IPropertySet *v28; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v29; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v30; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v32; // [rsp+68h] [rbp-49h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v33; // [rsp+70h] [rbp-41h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v34; // [rsp+78h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+80h] [rbp-31h] BYREF
  unsigned int v36; // [rsp+88h] [rbp-29h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v37; // [rsp+90h] [rbp-21h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v38; // [rsp+98h] [rbp-19h] BYREF
  unsigned int v39; // [rsp+A0h] [rbp-11h] BYREF
  float v40[2]; // [rsp+A8h] [rbp-9h] BYREF
  HWND v41; // [rsp+B0h] [rbp-1h] BYREF
  HWND v42[3]; // [rsp+B8h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D0h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+E8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v42[1] = (HWND)-2LL;
  v38 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v38);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1687LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_68;
  }
  v4 = WindowFromViewWrapper(v38, &v41);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1688LL;
    goto LABEL_5;
  }
  v37 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)a2 + 56LL))(
         a2,
         &v37);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 1692LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_66;
  }
  v7 = WindowFromViewWrapper(v37, v42);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 1693LL;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, unsigned int *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v36);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 1696LL;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, unsigned int *))(*(_QWORD *)a2 + 72LL))(
         a2,
         &v39);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 1699LL;
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, float *))(*(_QWORD *)a2 + 80LL))(
         a2,
         v40);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 1702LL;
    goto LABEL_16;
  }
  if ( v36 == 1 )
  {
    v32 = 0LL;
    v9 = (IUnknown *)*((_QWORD *)this + 14);
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v32);
    Service = IUnknown_QueryService(
                v9,
                &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
                &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
                (void **)v10);
    v5 = Service;
    if ( Service < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6AD,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)Service);
LABEL_30:
      v17 = v32;
      if ( !v32 )
        goto LABEL_66;
      v32 = 0LL;
LABEL_54:
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v17 + 16LL))(v17);
      goto LABEL_66;
    }
    v34 = 0LL;
    v12 = (*(__int64 (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *, HWND, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode **))(*(_QWORD *)v32 + 48LL))(
            v32,
            v41,
            &v34);
    v5 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6B0,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_28:
      v16 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)v16 + 16LL))(v16);
      }
      goto LABEL_30;
    }
    ppvOut = 0LL;
    v13 = IUnknown_QueryService(
            *((IUnknown **)this + 14),
            &GUID_5129a4c9_ab2d_400d_a466_0363c76b4179,
            &GUID_5129a4c9_ab2d_400d_a466_0363c76b4179,
            &ppvOut);
    v5 = v13;
    if ( v13 < 0 )
    {
      v14 = 1715LL;
      goto LABEL_26;
    }
    v13 = (*(__int64 (__fastcall **)(void *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)ppvOut + 80LL))(
            ppvOut,
            v34,
            &v33);
    v5 = v13;
    if ( v13 < 0 )
    {
      v14 = 1718LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v13);
      v15 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      goto LABEL_28;
    }
    v18 = (_DWORD)v33 != 0;
    v19 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    if ( !v18 )
    {
      v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64))(*(_QWORD *)a2 + 88LL))(
             a2,
             1LL);
      v5 = v7;
      if ( v7 < 0 )
      {
        v8 = 1759LL;
        goto LABEL_16;
      }
      goto LABEL_65;
    }
  }
  v33 = 0LL;
  string = 0LL;
  v22 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v22 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
    __debugbreak();
  }
  v23 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          string,
          &v33);
  v5 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6BF,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v23);
LABEL_52:
    v17 = v33;
    if ( !v33 )
      goto LABEL_66;
    v33 = 0LL;
    goto LABEL_54;
  }
  v32 = v33;
  if ( v33 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v33 + 8LL))(v33);
  string = 0LL;
  v24 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, &string);
  if ( v24 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24);
  v25 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v32,
          string,
          2u);
  v5 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6C2,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v25);
    if ( v32 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v32 + 16LL))(v32);
    goto LABEL_52;
  }
  v42[2] = (HWND)a2;
  (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)a2 + 8LL))(a2);
  v34 = a2;
  (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)a2 + 8LL))(a2);
  Microsoft::WRL::Callback_IAsyncCallback__lambda_92cd811acd1ff6aef67e8ea59a74ce1e___(&ppvOut, &v34);
  if ( v34 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)v34 + 16LL))(v34);
  v26 = ppvOut;
  v27 = CAppViewManager::_ShowViewAsyncWorker(
          this,
          v41,
          v42[0],
          v39,
          0,
          1,
          v36,
          v40[0],
          v40[1],
          0LL,
          v33,
          (struct IAsyncCallback *)ppvOut);
  if ( v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6DB,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v27);
  if ( v26 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 16LL))(v26);
  (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v32 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v32 + 16LL))(v32);
  v28 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v28 + 16LL))(v28);
  }
LABEL_65:
  v5 = 0;
LABEL_66:
  v29 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v29 + 16LL))(v29);
  }
LABEL_68:
  v30 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v30 + 16LL))(v30);
  }
  return v5;
}
