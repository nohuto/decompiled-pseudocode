/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_e5d643bc643c8a09454132ff8d011188___ @ 0x180154A60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4e6ec5e621d214863c0330f55e9deefa___::Run @ 0x180154F40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4e6ec5e621d214863c0330f55e9deefa___--Run.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _lambda_e5d643bc643c8a09454132ff8d011188_::__lambda_e5d643bc643c8a09454132ff8d011188_ @ 0x180153050 (_lambda_e5d643bc643c8a09454132ff8d011188_--__lambda_e5d643bc643c8a09454132ff8d011188_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_e5d643bc643c8a09454132ff8d011188___(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // r14
  char *v7; // rbx
  char *v8; // rax
  char *v9; // rdi
  _QWORD *v10; // rbx
  void *v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  void *v14; // rcx
  __int64 v16; // [rsp+28h] [rbp-20h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  void *v19; // [rsp+80h] [rbp+38h] BYREF
  _QWORD *v20; // [rsp+88h] [rbp+40h]
  __int64 v21; // [rsp+90h] [rbp+48h]
  char *v22; // [rsp+98h] [rbp+50h]

  v20 = a2;
  v19 = 0LL;
  v3 = AgileGitPtr::CopyLocal((AgileGitPtr *)(a1 + 48), &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, &v19);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x43,
      (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v3);
    goto LABEL_17;
  }
  v5 = *a2;
  v16 = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 52));
    v5 = v16;
  }
  v6 = a2[1];
  v17 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
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
    *(_QWORD *)v9 = off_1802B35D0;
    *v10 = off_1802B3648;
    *((_QWORD *)v9 + 7) = v5;
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 52));
      v6 = v17;
    }
    *((_QWORD *)v9 + 8) = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = v9;
  }
  v22 = v7;
  lambda_e5d643bc643c8a09454132ff8d011188_::__lambda_e5d643bc643c8a09454132ff8d011188_((__int64)&v16);
  if ( !v7 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
      (const char *)0x8007000ELL);
LABEL_17:
    v11 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_24;
  }
  v12 = (*(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)v19 + 24LL))(v19, v7);
  v13 = v12;
  if ( v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v12);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v4 = v13;
LABEL_24:
  lambda_e5d643bc643c8a09454132ff8d011188_::__lambda_e5d643bc643c8a09454132ff8d011188_((__int64)a2);
  return v4;
}
