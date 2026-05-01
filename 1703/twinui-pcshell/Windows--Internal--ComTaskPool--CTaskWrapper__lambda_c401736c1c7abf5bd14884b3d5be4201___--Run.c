/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c401736c1c7abf5bd14884b3d5be4201___::Run @ 0x1800E1060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047C58 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CreateAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___ @ 0x1800E0EFC (CreateAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c401736c1c7abf5bd14884b3d5be4201___::Run(
        __int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rbx
  int v4; // eax
  void *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  void *v7; // [rsp+60h] [rbp+10h] BYREF
  __int64 v8; // [rsp+68h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v7 = 0LL;
  v2 = AgileGitPtr::CopyLocal((AgileGitPtr *)(v1 + 32), &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, &v7);
  if ( v2 >= 0 )
  {
    CreateAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc_(&v8);
    v3 = v8;
    if ( v8 )
    {
      v4 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v7 + 24LL))(v7, v8);
      if ( v4 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4D,
          (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
          (const char *)(unsigned int)v4);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
        (const char *)0x8007000ELL);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x43,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v2);
  }
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
