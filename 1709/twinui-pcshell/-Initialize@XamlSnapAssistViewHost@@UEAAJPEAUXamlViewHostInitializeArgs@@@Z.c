/*
 * XREFs of ?Initialize@XamlSnapAssistViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18016E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ @ 0x18015C4D4 (--0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180192594 (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationVie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall XamlSnapAssistViewHost::Initialize(
        XamlSnapAssistViewHost *this,
        struct XamlViewHostInitializeArgs *a2,
        __int64 a3,
        void **a4)
{
  XamlSnapAssistViewHost *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  struct IInspectable *v16; // rbx
  __int64 **v17; // r12
  __int64 v18; // rcx
  int Instance; // eax
  unsigned int v20; // edi
  const char *v21; // r9
  __int64 result; // rax
  __int64 *v23; // rsi
  __int64 v24; // rdi
  __int64 *v25; // rax
  int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 (__fastcall ***v34)(_QWORD, void *, __int64 *); // [rsp+70h] [rbp+8h] BYREF
  __int64 v35; // [rsp+78h] [rbp+10h] BYREF
  struct IInspectable *v36; // [rsp+80h] [rbp+18h]
  __int64 v37; // [rsp+88h] [rbp+20h]

  v5 = this;
  try
  {
    v6 = *(_QWORD *)a2;
    if ( *((_QWORD *)this - 5) != *(_QWORD *)a2 )
    {
      if ( v6 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)a2);
      this = (XamlSnapAssistViewHost *)*((_QWORD *)v5 - 5);
      *((_QWORD *)v5 - 5) = v6;
      if ( this )
        (*(void (__fastcall **)(XamlSnapAssistViewHost *))(*(_QWORD *)this + 16LL))(this);
    }
    v7 = *((_QWORD *)a2 + 6);
    if ( *((_QWORD *)v5 - 4) != v7 )
    {
      if ( v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*((_QWORD *)a2 + 6));
      this = (XamlSnapAssistViewHost *)*((_QWORD *)v5 - 4);
      *((_QWORD *)v5 - 4) = v7;
      if ( this )
        (*(void (__fastcall **)(XamlSnapAssistViewHost *))(*(_QWORD *)this + 16LL))(this);
    }
    v8 = *((_QWORD *)a2 + 5);
    if ( *((_QWORD *)v5 + 5) != v8 )
    {
      if ( v8 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)a2 + 5));
      this = (XamlSnapAssistViewHost *)*((_QWORD *)v5 + 5);
      *((_QWORD *)v5 + 5) = v8;
      if ( this )
        (*(void (__fastcall **)(XamlSnapAssistViewHost *))(*(_QWORD *)this + 16LL))(this);
    }
    v9 = *((_QWORD *)a2 + 7);
    if ( *((_QWORD *)v5 + 6) != v9 )
    {
      if ( v9 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)a2 + 7));
      this = (XamlSnapAssistViewHost *)*((_QWORD *)v5 + 6);
      *((_QWORD *)v5 + 6) = v9;
      if ( this )
        (*(void (__fastcall **)(XamlSnapAssistViewHost *))(*(_QWORD *)this + 16LL))(this);
    }
    v10 = *((_QWORD *)a2 + 4);
    if ( *((_QWORD *)v5 + 7) != v10 )
    {
      if ( v10 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)a2 + 4));
      this = (XamlSnapAssistViewHost *)*((_QWORD *)v5 + 7);
      *((_QWORD *)v5 + 7) = v10;
      if ( this )
        (*(void (__fastcall **)(XamlSnapAssistViewHost *))(*(_QWORD *)this + 16LL))(this);
    }
    v35 = 0LL;
    v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice::DesktopThumbnailDevice(
                                                              (__int64)this,
                                                              (__int64)a2,
                                                              a3,
                                                              a4);
    v12 = v11;
    v36 = (struct IInspectable *)v11;
    v13 = 0LL;
    v35 = 0LL;
    if ( v11 )
    {
      v14 = (**v11)(v11, &GUID_1a799508_e9ca_48aa_b2f1_d6101190fb84, &v35);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      v13 = v35;
    }
    v37 = v13;
    if ( v13 != *((_QWORD *)v5 + 4) )
    {
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v15 = *((_QWORD *)v5 + 4);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      *((_QWORD *)v5 + 4) = v13;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v12)[2])(v12);
    v16 = (struct IInspectable *)*((_QWORD *)v5 + 4);
    v36 = v16;
    if ( v16 )
      ((void (__fastcall *)(struct IInspectable *))v16->lpVtbl->AddRef)(v16);
    v17 = (__int64 **)((char *)v5 + 80);
    v18 = *((_QWORD *)v5 + 10);
    if ( v18 )
    {
      *v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    Instance = AppViewDataSourceAdapter_CreateInstance(
                 *((struct IApplicationViewCollection **)a2 + 2),
                 *((struct IApplicationViewIconLoader **)a2 + 8),
                 0LL,
                 v16,
                 (struct IAppViewDataSourceAdapter **)v5 + 10);
    v20 = Instance;
    if ( Instance >= 0 )
    {
      v34 = 0LL;
      v23 = *v17;
      v24 = **v17;
      v25 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v34);
      v26 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v24 + 24))(
              v23,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              v25);
      v27 = v26;
      if ( v26 >= 0 )
      {
        v29 = 0LL;
        v35 = 0LL;
        v30 = (__int64)v34;
        if ( v34 )
        {
          v31 = (**v34)(v34, &_uuidof__AUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__, &v35);
          if ( v31 < 0 )
            __abi_WinRTraiseException(v31);
          v30 = (__int64)v34;
          v29 = v35;
        }
        v37 = v29;
        if ( v29 != *((_QWORD *)v5 + 2) )
        {
          if ( v29 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
            v30 = (__int64)v34;
          }
          v32 = *((_QWORD *)v5 + 2);
          if ( v32 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32 + 16LL))(*((_QWORD *)v5 + 2));
            v30 = (__int64)v34;
          }
          *((_QWORD *)v5 + 2) = v29;
        }
        if ( v29 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          v30 = (__int64)v34;
        }
        if ( v30 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        if ( v16 )
          ((void (__fastcall *)(struct IInspectable *))v16->lpVtbl->Release)(v16);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x50,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
          (const char *)(unsigned int)v26);
        v28 = (__int64)v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
        if ( v16 )
          ((void (__fastcall *)(struct IInspectable *))v16->lpVtbl->Release)(v16);
        result = v27;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x4D,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)Instance);
      if ( v16 )
        ((void (__fastcall *)(struct IInspectable *))v16->lpVtbl->Release)(v16);
      result = v20;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x55,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           v21);
  }
  return result;
}
