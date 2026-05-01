/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x180176248
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_62cb6914ee50a6fc5c4c2b67443b7dbd___::Run @ 0x180177460 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_62cb6914ee50a6fc5c4c2b67443b7dbd___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CreateAsyncCallbackWithLambda__lambda_9b32178155644dca32c61cf47e9b5774___ @ 0x180176EA0 (CreateAsyncCallbackWithLambda__lambda_9b32178155644dca32c61cf47e9b5774___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  void *v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // esi
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+28h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-20h]
  int v20; // [rsp+38h] [rbp-18h]
  __int64 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *v23; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v24; // [rsp+78h] [rbp+28h]
  __int64 v25; // [rsp+80h] [rbp+30h] BYREF

  v24 = a2;
  v23 = 0LL;
  v3 = AgileGitPtr::CopyLocal((AgileGitPtr *)(a1 + 48), &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, &v23);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x43,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v3);
    v5 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = a2[1];
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = *a2;
    if ( !*a2 )
      return v4;
    goto LABEL_7;
  }
  v9 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*a2);
  v18 = v9;
  v10 = a2[1];
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(a2[1]);
  v19 = v10;
  v20 = *((_DWORD *)a2 + 4);
  v21 = a2[3];
  CreateAsyncCallbackWithLambda__lambda_9b32178155644dca32c61cf47e9b5774_(&v25, &v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v11 = v25;
  if ( !v25 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)0x8007000ELL);
    v12 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = a2[1];
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v7 = *a2;
    if ( !*a2 )
      return v4;
LABEL_7:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    return v4;
  }
  v14 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v23 + 24LL))(v23, v25);
  v15 = v14;
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v14);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = a2[1];
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return v15;
}
