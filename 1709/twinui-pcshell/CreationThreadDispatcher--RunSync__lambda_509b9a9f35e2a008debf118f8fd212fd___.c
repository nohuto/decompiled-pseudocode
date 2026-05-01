/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_509b9a9f35e2a008debf118f8fd212fd___ @ 0x18017B25C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41fef8c72f572c123401c5ddda9f27d3___::Run @ 0x18017B4D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_41fef8c72f572c123401c5ddda9f27d3___--Run.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_509b9a9f35e2a008debf118f8fd212fd___(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // r15
  char *v7; // rdi
  char *v8; // rax
  char *v9; // rbx
  _QWORD *v10; // rdi
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  void *v15; // rcx
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  void *v19; // [rsp+70h] [rbp+38h] BYREF
  _QWORD *v20; // [rsp+78h] [rbp+40h]
  __int64 v21; // [rsp+80h] [rbp+48h]
  char *v22; // [rsp+88h] [rbp+50h]

  v20 = a2;
  v19 = 0LL;
  v3 = AgileGitPtr::CopyLocal((AgileGitPtr *)(a1 + 48), &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, &v19);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *a2;
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*a2);
    v6 = a2[1];
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(a2[1]);
    v7 = 0LL;
    v21 = 0LL;
    v8 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
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
      *(_QWORD *)v9 = off_1802B6F38;
      *v10 = off_1802B6E80;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *((_QWORD *)v9 + 7) = v5;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *((_QWORD *)v9 + 8) = v6;
      v7 = v9;
    }
    v22 = v7;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( !v7 )
    {
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
        (const char *)0x8007000ELL);
      v11 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = a2[1];
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v13 = *a2;
      if ( *a2 )
        goto LABEL_34;
      return v4;
    }
    v14 = (*(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)v19 + 24LL))(v19, v7);
    v4 = v14;
    if ( v14 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
        (const char *)(unsigned int)v14);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x43,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v3);
  }
  v15 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = a2[1];
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v13 = *a2;
  if ( *a2 )
LABEL_34:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v4;
}
