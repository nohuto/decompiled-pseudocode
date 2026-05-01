/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa___ @ 0x180145E50
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_abcfc8534c890962120398bd9654b364___::Run @ 0x180146530 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_abcfc8534c890962120398bd9654b364___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047C58 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_ @ 0x180144794 (_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_--_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_.c)
 *     CreateAsyncCallbackWithLambda__lambda_9d14f4c5953655842eb18c10ba19f0b4___ @ 0x180146378 (CreateAsyncCallbackWithLambda__lambda_9d14f4c5953655842eb18c10ba19f0b4___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa___(
        __int64 a1,
        __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rbx
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // esi
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h]
  __int64 v21; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v23; // [rsp+60h] [rbp+20h] BYREF
  __int64 *v24; // [rsp+68h] [rbp+28h]
  __int64 v25; // [rsp+70h] [rbp+30h] BYREF

  v24 = a2;
  v23 = 0LL;
  v3 = AgileGitPtr::CopyLocal((AgileGitPtr *)(a1 + 32), &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, &v23);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x43,
      (__int64)"internal\\Shell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v3);
    v5 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = a2[2];
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = a2[1];
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = *a2;
    if ( !*a2 )
      return v4;
    goto LABEL_9;
  }
  lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_(&v19, a2);
  CreateAsyncCallbackWithLambda__lambda_9d14f4c5953655842eb18c10ba19f0b4_(&v25, &v19);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v10 = v25;
  if ( !v25 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"internal\\Shell\\inc\\creationthreaddispatcher.h",
      (const char *)0x8007000ELL);
    v11 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = a2[2];
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = a2[1];
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v8 = *a2;
    if ( !*a2 )
      return v4;
LABEL_9:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return v4;
  }
  v14 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v23 + 24LL))(v23, v25);
  v15 = v14;
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (__int64)"internal\\Shell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v14);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = a2[2];
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = a2[1];
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
  return v15;
}
