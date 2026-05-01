/*
 * XREFs of ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x180158300
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

// Hidden C++ exception states: #wind=9
__int64 __fastcall XamlAllUpViewHost::Initialize(XamlAllUpViewHost *this, struct XamlViewHostInitializeArgs *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct IInspectable **); // rcx
  struct IInspectable *v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, struct IInspectable **); // rcx
  struct IInspectable *v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, struct IInspectable **); // rax
  __int64 (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // rsi
  struct IInspectable *v26; // rbx
  int v27; // eax
  __int64 v28; // rcx
  struct IInspectable *v29; // rbx
  __int64 **v30; // rsi
  __int64 v31; // rcx
  int Instance; // eax
  unsigned int v33; // edi
  const char *v34; // r9
  __int64 result; // rax
  __int64 *v36; // rsi
  __int64 v37; // rdi
  __int64 *v38; // rax
  int v39; // eax
  unsigned int v40; // edi
  __int64 v41; // rcx
  struct IInspectable *v42; // rdi
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 (__fastcall ***v47)(_QWORD, void *, struct IInspectable **); // [rsp+70h] [rbp+8h] BYREF
  struct IInspectable *v48; // [rsp+78h] [rbp+10h] BYREF
  struct IInspectable *v49; // [rsp+80h] [rbp+18h]
  struct IInspectable *v50; // [rsp+88h] [rbp+20h]

  try
  {
    v4 = *(_QWORD *)a2;
    if ( *((_QWORD *)this - 5) != *(_QWORD *)a2 )
    {
      if ( v4 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)a2);
      v5 = *((_QWORD *)this - 5);
      *((_QWORD *)this - 5) = v4;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = *((_QWORD *)a2 + 6);
    if ( *((_QWORD *)this - 4) != v6 )
    {
      if ( v6 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)a2 + 6));
      v7 = *((_QWORD *)this - 4);
      *((_QWORD *)this - 4) = v6;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = *((_QWORD *)a2 + 5);
    if ( *((_QWORD *)this + 11) != v8 )
    {
      if ( v8 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)a2 + 5));
      v9 = *((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = v8;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = *((_QWORD *)a2 + 3);
    if ( *((_QWORD *)this + 9) != v10 )
    {
      if ( v10 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)a2 + 3));
      v11 = *((_QWORD *)this + 9);
      *((_QWORD *)this + 9) = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = *((_QWORD *)a2 + 4);
    if ( *((_QWORD *)this + 10) != v12 )
    {
      if ( v12 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*((_QWORD *)a2 + 4));
      v13 = *((_QWORD *)this + 10);
      *((_QWORD *)this + 10) = v12;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = *((_QWORD *)a2 + 9);
    if ( *((_QWORD *)this + 14) != v14 )
    {
      if ( v14 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*((_QWORD *)a2 + 9));
      v15 = *((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = v14;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IInspectable **))*((_QWORD *)a2 + 10);
    v17 = 0LL;
    v48 = 0LL;
    if ( v16 )
    {
      v18 = (**v16)(v16, &_uuidof__AUIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows__, &v48);
      if ( v18 < 0 )
        __abi_WinRTraiseException(v18);
      v17 = v48;
    }
    v49 = v17;
    if ( v17 != *((struct IInspectable **)this + 6) )
    {
      if ( v17 )
        ((void (__fastcall *)(struct IInspectable *))v17->lpVtbl->AddRef)(v17);
      v19 = *((_QWORD *)this + 6);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      *((_QWORD *)this + 6) = v17;
    }
    if ( v17 )
      ((void (__fastcall *)(struct IInspectable *))v17->lpVtbl->Release)(v17);
    v20 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IInspectable **))*((_QWORD *)a2 + 11);
    v21 = 0LL;
    v48 = 0LL;
    if ( v20 )
    {
      v22 = (**v20)(v20, &_uuidof__AUIVirtualDesktopController_Multitasking_ComposableShell_Internal_Windows__, &v48);
      if ( v22 < 0 )
        __abi_WinRTraiseException(v22);
      v21 = v48;
    }
    v49 = v21;
    if ( v21 != *((struct IInspectable **)this + 7) )
    {
      if ( v21 )
        ((void (__fastcall *)(struct IInspectable *))v21->lpVtbl->AddRef)(v21);
      v23 = *((_QWORD *)this + 7);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      *((_QWORD *)this + 7) = v21;
    }
    if ( v21 )
      ((void (__fastcall *)(struct IInspectable *))v21->lpVtbl->Release)(v21);
    v48 = 0LL;
    v24 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IInspectable **))Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice::DesktopThumbnailDevice();
    v25 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v24;
    v49 = (struct IInspectable *)v24;
    v26 = 0LL;
    v48 = 0LL;
    if ( v24 )
    {
      v27 = (**v24)(v24, &GUID_1a799508_e9ca_48aa_b2f1_d6101190fb84, &v48);
      if ( v27 < 0 )
        __abi_WinRTraiseException(v27);
      v26 = v48;
    }
    v50 = v26;
    if ( v26 != *((struct IInspectable **)this + 4) )
    {
      if ( v26 )
        ((void (__fastcall *)(struct IInspectable *))v26->lpVtbl->AddRef)(v26);
      v28 = *((_QWORD *)this + 4);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      *((_QWORD *)this + 4) = v26;
    }
    if ( v26 )
      ((void (__fastcall *)(struct IInspectable *))v26->lpVtbl->Release)(v26);
    if ( v25 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v25)[2])(v25);
    v29 = (struct IInspectable *)*((_QWORD *)this + 4);
    v49 = v29;
    if ( v29 )
      ((void (__fastcall *)(struct IInspectable *))v29->lpVtbl->AddRef)(v29);
    v30 = (__int64 **)((char *)this + 120);
    v31 = *((_QWORD *)this + 15);
    if ( v31 )
    {
      *v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    Instance = AppViewDataSourceAdapter_CreateInstance(
                 *((struct IApplicationViewCollection **)a2 + 2),
                 *((struct IApplicationViewIconLoader **)a2 + 8),
                 0LL,
                 v29,
                 (struct IAppViewDataSourceAdapter **)this + 15);
    v33 = Instance;
    if ( Instance >= 0 )
    {
      v47 = 0LL;
      v36 = *v30;
      v37 = *v36;
      v38 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v47);
      v39 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v37 + 24))(
              v36,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              v38);
      v40 = v39;
      if ( v39 >= 0 )
      {
        v42 = 0LL;
        v48 = 0LL;
        v43 = (__int64)v47;
        if ( v47 )
        {
          v44 = (**v47)(v47, &_uuidof__AUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__, &v48);
          if ( v44 < 0 )
            __abi_WinRTraiseException(v44);
          v43 = (__int64)v47;
          v42 = v48;
        }
        v50 = v42;
        if ( v42 != *((struct IInspectable **)this + 5) )
        {
          if ( v42 )
          {
            ((void (__fastcall *)(struct IInspectable *))v42->lpVtbl->AddRef)(v42);
            v43 = (__int64)v47;
          }
          v45 = *((_QWORD *)this + 5);
          if ( v45 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v45 + 16LL))(*((_QWORD *)this + 5));
            v43 = (__int64)v47;
          }
          *((_QWORD *)this + 5) = v42;
        }
        if ( v42 )
        {
          ((void (__fastcall *)(struct IInspectable *))v42->lpVtbl->Release)(v42);
          v43 = (__int64)v47;
        }
        if ( v43 )
        {
          v47 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
        }
        if ( v29 )
          ((void (__fastcall *)(struct IInspectable *))v29->lpVtbl->Release)(v29);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x168,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)(unsigned int)v39);
        v41 = (__int64)v47;
        if ( v47 )
        {
          v47 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
        }
        if ( v29 )
          ((void (__fastcall *)(struct IInspectable *))v29->lpVtbl->Release)(v29);
        result = v40;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x165,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)Instance);
      if ( v29 )
        ((void (__fastcall *)(struct IInspectable *))v29->lpVtbl->Release)(v29);
      result = v33;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x16C,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
                           v34);
  }
  return result;
}
