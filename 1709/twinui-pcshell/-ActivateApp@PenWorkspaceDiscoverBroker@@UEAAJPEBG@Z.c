/*
 * XREFs of ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x1800E4590
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1801C1F4C (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PenWorkspaceDiscoverBroker::ActivateApp(
        PenWorkspaceDiscoverBroker *this,
        const unsigned __int16 *a2)
{
  int IsShellExperience; // eax
  int v4; // ebx
  int v5; // eax
  void *v6; // r14
  struct IUnknownVtbl *v7; // r12
  struct IUnknownVtbl *v8; // r13
  struct IUnknownVtbl *v9; // r15
  struct IUnknownVtbl *v10; // rsi
  IUnknown *v11; // rdi
  IUnknown *v12; // rax
  IUnknown *v13; // rbx
  DWORD CurrentThreadId; // eax
  LPVOID pv; // [rsp+40h] [rbp-31h] BYREF
  struct IUnknownVtbl *v17; // [rsp+48h] [rbp-29h]
  struct IUnknownVtbl *v18; // [rsp+50h] [rbp-21h]
  struct IUnknownVtbl *v19; // [rsp+58h] [rbp-19h]
  struct IUnknownVtbl *v20; // [rsp+60h] [rbp-11h]
  struct IUnknownVtbl *v21; // [rsp+68h] [rbp-9h]
  char v22; // [rsp+70h] [rbp-1h]
  __int64 v23; // [rsp+78h] [rbp+7h]
  __int64 v24; // [rsp+80h] [rbp+Fh]
  __int64 v25; // [rsp+88h] [rbp+17h]
  char v26; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(this);
  v4 = IsShellExperience;
  if ( IsShellExperience >= 0 )
  {
    pv = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)&pv,
           (__int64)a2,
           0xFFFFFFFFFFFFFFFFuLL);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v7 = v17;
      v8 = v18;
      v9 = (struct IUnknownVtbl *)pv;
      v6 = 0LL;
      pv = 0LL;
      v18 = 0LL;
      v17 = 0LL;
      v20 = v7;
      v21 = v8;
      v23 = 0LL;
      v25 = 0LL;
      v24 = 0LL;
      v10 = v9;
      v19 = v9;
      v22 = 0;
      v26 = 1;
      v11 = 0LL;
      v12 = (IUnknown *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v13 = v12;
      if ( v12 )
      {
        v12->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
        HIDWORD(v12[1].lpVtbl) = 1;
        v12->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v13->lpVtbl = (struct IUnknownVtbl *)off_1802060D8;
        v13[3].lpVtbl = v7;
        v13[4].lpVtbl = v8;
        v10 = 0LL;
        v19 = 0LL;
        v21 = 0LL;
        v20 = 0LL;
        v13[2].lpVtbl = v9;
        LOBYTE(v13[5].lpVtbl) = 0;
        v22 = 1;
        v11 = v13;
      }
      CurrentThreadId = GetCurrentThreadId();
      v4 = Windows::Internal::ComTaskPool::RunTask(0, 0, CurrentThreadId, 0, v11, 0LL);
      if ( v11 )
        ((void (__fastcall *)(IUnknown *))v11->lpVtbl->Release)(v11);
      if ( v10 )
        CoTaskMemFree(v10);
      if ( v4 >= 0 )
        v4 = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x97,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
          (const char *)(unsigned int)v4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x90,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v5);
      v6 = pv;
    }
    if ( v6 )
      CoTaskMemFree(v6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x8D,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)IsShellExperience);
  }
  return (unsigned int)v4;
}
