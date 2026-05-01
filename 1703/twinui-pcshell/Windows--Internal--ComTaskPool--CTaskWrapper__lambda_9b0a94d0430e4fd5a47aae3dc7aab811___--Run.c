/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9b0a94d0430e4fd5a47aae3dc7aab811___::Run @ 0x18012A830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047C58 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     CreateAsyncCallbackWithLambda__lambda_955195b19bdf183231ed606863dab04a___ @ 0x18012A7A4 (CreateAsyncCallbackWithLambda__lambda_955195b19bdf183231ed606863dab04a___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9b0a94d0430e4fd5a47aae3dc7aab811___::Run(
        _QWORD *a1)
{
  volatile signed __int32 *v2; // rdx
  bool i; // zf
  signed __int32 v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  volatile signed __int32 *v8; // rdx
  bool j; // zf
  signed __int32 v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  void *v13; // rcx
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // [rsp+28h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-20h]
  volatile signed __int32 *v18; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *v21; // [rsp+70h] [rbp+20h] BYREF
  __int64 v22; // [rsp+78h] [rbp+28h] BYREF
  volatile signed __int32 **v23; // [rsp+80h] [rbp+30h]

  v2 = (volatile signed __int32 *)a1[2];
  v16 = v2;
  for ( i = v2 == 0LL; !i; i = v4 == _InterlockedCompareExchange(v2 + 9, v4 + 1, v4) )
  {
    v4 = *((_DWORD *)v2 + 9);
    if ( v4 == 0x7FFFFFFF )
      break;
  }
  v5 = a1[3];
  v17 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v23 = &v16;
  v6 = a1[4];
  v21 = 0LL;
  v7 = AgileGitPtr::CopyLocal((AgileGitPtr *)(v6 + 32), &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, &v21);
  if ( v7 >= 0 )
  {
    v8 = v16;
    v18 = v16;
    for ( j = v16 == 0LL; !j; j = v10 == _InterlockedCompareExchange(v8 + 9, v10 + 1, v10) )
    {
      v10 = *((_DWORD *)v8 + 9);
      if ( v10 == 0x7FFFFFFF )
        break;
    }
    v19 = v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    CreateAsyncCallbackWithLambda__lambda_955195b19bdf183231ed606863dab04a_(&v22);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v18);
    v11 = v22;
    if ( v22 )
    {
      v12 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v21 + 24LL))(v21, v22);
      if ( v12 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4D,
          (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
          (const char *)(unsigned int)v12);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
        (const char *)0x8007000ELL);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x43,
      (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v7);
  }
  v13 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v15);
  }
}
