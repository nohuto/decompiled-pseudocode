/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_403a39f84d2665c6c6e66947b8b7190c___ @ 0x180176678
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6079dd018c0e01e5b20aac36b268c02a___::Run @ 0x1801771A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6079dd018c0e01e5b20aac36b268c02a___--Run.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_403a39f84d2665c6c6e66947b8b7190c___(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  char *v7; // rdi
  char *v8; // rax
  char *v9; // rsi
  _QWORD *v10; // rdi
  void *v11; // rcx
  _QWORD *v12; // rcx
  int v13; // eax
  void *v14; // rcx
  _QWORD *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  void *v18; // [rsp+60h] [rbp+30h] BYREF
  _QWORD *v19; // [rsp+68h] [rbp+38h]
  __int64 v20; // [rsp+70h] [rbp+40h]
  __int64 v21; // [rsp+78h] [rbp+48h]

  v19 = a2;
  v18 = 0LL;
  v3 = AgileGitPtr::CopyLocal((AgileGitPtr *)(a1 + 48), &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, &v18);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x43,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v3);
LABEL_21:
    v14 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = (_QWORD *)*a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v15 + 16LL))(v15, v5);
    }
    return v4;
  }
  v6 = *a2;
  v20 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = 0LL;
  v21 = 0LL;
  v8 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v10 = v8 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 8));
    *((_DWORD *)v9 + 13) = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
    *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v9 = off_1802B5A98;
    *v10 = off_1802B5AC0;
    *((_QWORD *)v9 + 7) = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = v9;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
  {
    v13 = (*(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)v18 + 24LL))(v18, v7);
    v4 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
        (const char *)(unsigned int)v13);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
    goto LABEL_21;
  }
  v4 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4A,
    (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
    (const char *)0x8007000ELL);
  v11 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (_QWORD *)*a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v12 + 16LL))(v12, *v12);
  }
  return v4;
}
