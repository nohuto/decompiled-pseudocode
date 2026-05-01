/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_c12dfab9154669097a3cd6f4b2210f79___ @ 0x180142C1C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___::Run @ 0x180142EC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047C58 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CreateAsyncCallbackWithLambda__lambda_d0b6ea00cfdc93c641354d34aa8c8171___ @ 0x180142E40 (CreateAsyncCallbackWithLambda__lambda_d0b6ea00cfdc93c641354d34aa8c8171___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_c12dfab9154669097a3cd6f4b2210f79___(
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
  __int64 v18; // [rsp+28h] [rbp-18h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v21; // [rsp+60h] [rbp+20h] BYREF
  _QWORD *v22; // [rsp+68h] [rbp+28h]
  __int64 v23; // [rsp+70h] [rbp+30h] BYREF

  v22 = a2;
  v21 = 0LL;
  v3 = AgileGitPtr::CopyLocal((AgileGitPtr *)(a1 + 32), &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, &v21);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x43,
      (__int64)"internal\\Shell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v3);
    v5 = v21;
    if ( v21 )
    {
      v21 = 0LL;
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
  CreateAsyncCallbackWithLambda__lambda_d0b6ea00cfdc93c641354d34aa8c8171_(&v23, &v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v11 = v23;
  if ( !v23 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"internal\\Shell\\inc\\creationthreaddispatcher.h",
      (const char *)0x8007000ELL);
    v12 = v21;
    if ( v21 )
    {
      v21 = 0LL;
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
  v14 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v21 + 24LL))(v21, v23);
  v15 = v14;
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"internal\\Shell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v14);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v16 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = a2[1];
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return v15;
}
