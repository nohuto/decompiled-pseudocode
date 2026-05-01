/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a890f62688af3452d50a342979396cc9___::Run @ 0x180154C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a890f62688af3452d50a342979396cc9___::Run(
        __int64 a1)
{
  HRESULT v2; // eax
  __int64 v3; // rdx
  void *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  void *ppvOut; // [rsp+40h] [rbp+10h] BYREF
  __int64 v7; // [rsp+48h] [rbp+18h] BYREF

  ppvOut = 0LL;
  v2 = IUnknown_QueryService(
         *(IUnknown **)(*(_QWORD *)(a1 + 24) + 64LL),
         (const GUID *const)&SID_AllUpView,
         &GUID_e053969d_e07d_482d_ae3b_17d1f01bf1ad,
         &ppvOut);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 64LL) + 40LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL),
           &v7);
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v7, 0LL);
      if ( v2 >= 0 )
        goto LABEL_8;
      v3 = 105LL;
    }
    else
    {
      v3 = 103LL;
    }
  }
  else
  {
    v3 = 100LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v3,
    (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarproxy.cpp",
    (const char *)(unsigned int)v2);
LABEL_8:
  v4 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
