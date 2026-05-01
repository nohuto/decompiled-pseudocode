/*
 * XREFs of ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18016CE70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ @ 0x18015C4D4 (--0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ.c)
 *     ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@@Z @ 0x180178BC8 (--0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImme.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180192594 (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationVie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall XamlAltTabViewHost::Initialize(
        XamlAltTabViewHost *this,
        struct XamlViewHostInitializeArgs *a2,
        __int64 a3,
        void **a4)
{
  XamlAltTabViewHost *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rdi
  void *v13; // rbx
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
  void *v29; // rdi
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 (__fastcall ***v38)(_QWORD, void *, void **); // [rsp+70h] [rbp+8h] BYREF
  void *v39; // [rsp+78h] [rbp+10h] BYREF
  struct IInspectable *v40; // [rsp+80h] [rbp+18h]
  void *v41; // [rsp+88h] [rbp+20h]

  v5 = this;
  try
  {
    v6 = *(_QWORD *)a2;
    if ( *((_QWORD *)this - 5) != *(_QWORD *)a2 )
    {
      if ( v6 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)a2);
      this = (XamlAltTabViewHost *)*((_QWORD *)v5 - 5);
      *((_QWORD *)v5 - 5) = v6;
      if ( this )
        (*(void (__fastcall **)(XamlAltTabViewHost *))(*(_QWORD *)this + 16LL))(this);
    }
    v7 = *((_QWORD *)a2 + 6);
    if ( *((_QWORD *)v5 - 4) != v7 )
    {
      if ( v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*((_QWORD *)a2 + 6));
      this = (XamlAltTabViewHost *)*((_QWORD *)v5 - 4);
      *((_QWORD *)v5 - 4) = v7;
      if ( this )
        (*(void (__fastcall **)(XamlAltTabViewHost *))(*(_QWORD *)this + 16LL))(this);
    }
    v8 = *((_QWORD *)a2 + 5);
    if ( *((_QWORD *)v5 + 7) != v8 )
    {
      if ( v8 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)a2 + 5));
      this = (XamlAltTabViewHost *)*((_QWORD *)v5 + 7);
      *((_QWORD *)v5 + 7) = v8;
      if ( this )
        (*(void (__fastcall **)(XamlAltTabViewHost *))(*(_QWORD *)this + 16LL))(this);
    }
    v9 = *((_QWORD *)a2 + 3);
    if ( *((_QWORD *)v5 + 5) != v9 )
    {
      if ( v9 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)a2 + 3));
      this = (XamlAltTabViewHost *)*((_QWORD *)v5 + 5);
      *((_QWORD *)v5 + 5) = v9;
      if ( this )
        (*(void (__fastcall **)(XamlAltTabViewHost *))(*(_QWORD *)this + 16LL))(this);
    }
    v10 = *((_QWORD *)a2 + 4);
    if ( *((_QWORD *)v5 + 6) != v10 )
    {
      if ( v10 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)a2 + 4));
      this = (XamlAltTabViewHost *)*((_QWORD *)v5 + 6);
      *((_QWORD *)v5 + 6) = v10;
      if ( this )
        (*(void (__fastcall **)(XamlAltTabViewHost *))(*(_QWORD *)this + 16LL))(this);
    }
    v39 = 0LL;
    v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice::DesktopThumbnailDevice(
                                                              (__int64)this,
                                                              (__int64)a2,
                                                              a3,
                                                              a4);
    v12 = v11;
    v40 = (struct IInspectable *)v11;
    v13 = 0LL;
    v39 = 0LL;
    if ( v11 )
    {
      v14 = (**v11)(v11, &GUID_1a799508_e9ca_48aa_b2f1_d6101190fb84, &v39);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      v13 = v39;
    }
    v41 = v13;
    if ( v13 != *((void **)v5 + 4) )
    {
      if ( v13 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
      v15 = *((_QWORD *)v5 + 4);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      *((_QWORD *)v5 + 4) = v13;
    }
    if ( v13 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v12)[2])(v12);
    v16 = (struct IInspectable *)*((_QWORD *)v5 + 4);
    v40 = v16;
    if ( v16 )
      ((void (__fastcall *)(struct IInspectable *))v16->lpVtbl->AddRef)(v16);
    v17 = (__int64 **)((char *)v5 + 72);
    v18 = *((_QWORD *)v5 + 9);
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
                 (struct IAppViewDataSourceAdapter **)v5 + 9);
    v20 = Instance;
    if ( Instance >= 0 )
    {
      v38 = 0LL;
      v23 = *v17;
      v24 = **v17;
      v25 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v38);
      v26 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v24 + 24))(
              v23,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              v25);
      v27 = v26;
      if ( v26 >= 0 )
      {
        v29 = 0LL;
        v39 = 0LL;
        if ( v38 )
        {
          v30 = (**v38)(v38, &_uuidof__AUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__, &v39);
          if ( v30 < 0 )
            __abi_WinRTraiseException(v30);
          v29 = v39;
        }
        v41 = v29;
        if ( v29 != *((void **)v5 + 2) )
        {
          if ( v29 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v29 + 8LL))(v29);
          v31 = *((_QWORD *)v5 + 2);
          if ( v31 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          *((_QWORD *)v5 + 2) = v29;
        }
        if ( v29 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v29 + 16LL))(v29);
        v39 = Platform::Details::Heap::Allocate(0x68uLL, 0x98uLL);
        v32 = XamlAltTabViewController::XamlAltTabViewController(
                v39,
                (char *)v5 - 120,
                *((_QWORD *)v5 + 5),
                *((_QWORD *)v5 + 6),
                *((_QWORD *)v5 - 5));
        v33 = v32;
        v39 = (void *)v32;
        if ( v32 )
          v34 = v32 + 16;
        else
          v34 = 0LL;
        if ( v34 != *((_QWORD *)v5 + 3) )
        {
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
          v35 = *((_QWORD *)v5 + 3);
          if ( v35 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
          *((_QWORD *)v5 + 3) = v34;
        }
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        v36 = (__int64)v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        }
        if ( v16 )
          ((void (__fastcall *)(struct IInspectable *))v16->lpVtbl->Release)(v16);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x52,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
          (const char *)(unsigned int)v26);
        v28 = (__int64)v38;
        if ( v38 )
        {
          v38 = 0LL;
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
        (void *)0x4F,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
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
                           (void *)0x59,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                           v21);
  }
  return result;
}
