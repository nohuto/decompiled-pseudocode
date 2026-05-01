/*
 * XREFs of ?SwitchTo@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180076AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationViewManager::SwitchTo(CApplicationViewManager *this, struct IApplicationView *a2)
{
  char v2; // si
  IUnknown *v3; // rbx
  struct IApplicationView *v4; // r14
  __int64 *v5; // rax
  HRESULT Service; // eax
  int v7; // edi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  IUnknown *v11; // rbx
  char *v12; // rax
  char *v13; // rdi
  _QWORD *v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  IUnknown *v18; // rcx
  int v19; // eax
  IUnknown *punk[5]; // [rsp+20h] [rbp-38h] BYREF
  char v22; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  struct IApplicationView *v24; // [rsp+98h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+50h] BYREF

  v24 = a2;
  punk[1] = (IUnknown *)-2LL;
  punk[4] = (IUnknown *)&v24;
  v2 = 1;
  v22 = 1;
  punk[0] = 0LL;
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 15) + 32LL))(
    (char *)this - 120,
    &GUID_00000000_0000_0000_c000_000000000046,
    punk);
  v3 = punk[0];
  v4 = v24;
  v25 = 0LL;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v25);
  Service = IUnknown_QueryService(
              v3,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              (void **)v5);
  v7 = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x52,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)Service);
LABEL_3:
    v8 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_22;
  }
  v26 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, __int64 *))(*(_QWORD *)v25 + 48LL))(v25, v4, &v26);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x56,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v9);
    goto LABEL_7;
  }
  v11 = 0LL;
  punk[2] = 0LL;
  v12 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( v12 )
  {
    v14 = v12 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v12 + 8));
    *((_DWORD *)v13 + 13) = 1;
    *(_QWORD *)v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IShellPositionerCallback'};
    *v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v13 = off_1801FF888;
    *v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v13 + 7) = &v24;
    v11 = (IUnknown *)v13;
  }
  punk[3] = v11;
  if ( !v11 )
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)0x8007000ELL);
    goto LABEL_7;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, IUnknown *))(*(_QWORD *)v26 + 24LL))(v26, v11);
  v7 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5D,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v15);
    ((void (__fastcall *)(IUnknown *))v11->lpVtbl->Release)(v11);
LABEL_7:
    v10 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_3;
  }
  ((void (__fastcall *)(IUnknown *))v11->lpVtbl->Release)(v11);
  v16 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v7 = 0;
LABEL_22:
  v18 = punk[0];
  if ( punk[0] )
  {
    punk[0] = 0LL;
    ((void (__fastcall *)(IUnknown *))v18->lpVtbl->Release)(v18);
  }
  if ( v7 >= 0 )
  {
    v2 = 0;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x295,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( v2 )
  {
    v19 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v24 + 32LL))(v24);
    if ( v19 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28B,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v19);
  }
  return (unsigned int)v7;
}
