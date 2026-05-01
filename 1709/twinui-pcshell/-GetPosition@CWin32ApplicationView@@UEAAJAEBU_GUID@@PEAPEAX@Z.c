/*
 * XREFs of ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007F080
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetIam@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIImmersiveApplicationPresentation@@@WRL@Microsoft@@XZ @ 0x18007D560 (-GetIam@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIImmersiveApplicationPresentation@@@W.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWin32ApplicationView::GetPosition(CWin32ApplicationView *this, const struct _GUID *a2, void **a3)
{
  __int64 *Iam; // rax
  IUnknown *v7; // rbx
  __int64 *v8; // rax
  HRESULT Service; // eax
  int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  char *v14; // rbx
  char *v15; // rax
  char *v16; // rdi
  _QWORD *v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __m256i v23; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v25; // [rsp+80h] [rbp+30h] BYREF
  __int64 v26; // [rsp+88h] [rbp+38h] BYREF
  __int64 v27; // [rsp+90h] [rbp+40h] BYREF
  __int64 v28; // [rsp+98h] [rbp+48h]

  *a3 = 0LL;
  Iam = ApplicationViewManagement::CGlobals::GetIam(&v27);
  v23.m256i_i64[0] = (__int64)this;
  *(struct _GUID *)&v23.m256i_u64[1] = *a2;
  v23.m256i_i64[3] = (__int64)a3;
  v7 = (IUnknown *)*Iam;
  v25 = 0LL;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v25);
  Service = IUnknown_QueryService(
              v7,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              (void **)v8);
  v10 = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x52,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)Service);
LABEL_3:
    v11 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_22;
  }
  v26 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, CWin32ApplicationView *, __int64 *))(*(_QWORD *)v25 + 48LL))(
          v25,
          this,
          &v26);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x56,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v12);
    goto LABEL_7;
  }
  v14 = 0LL;
  v28 = 0LL;
  v15 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( v15 )
  {
    v17 = v15 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v15 + 8));
    *((_DWORD *)v16 + 13) = 1;
    *(_QWORD *)v16 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IShellPositionerCallback'};
    *v17 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v16 = off_180200158;
    *v17 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    *(__m256i *)(v16 + 56) = v23;
    v14 = v16;
  }
  if ( !v14 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)0x8007000ELL);
    goto LABEL_7;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v26 + 24LL))(v26, v14);
  v10 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5D,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v18);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_7:
    v13 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_3;
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 16LL))(v14);
  v19 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v10 = 0;
LABEL_22:
  v21 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x197,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
