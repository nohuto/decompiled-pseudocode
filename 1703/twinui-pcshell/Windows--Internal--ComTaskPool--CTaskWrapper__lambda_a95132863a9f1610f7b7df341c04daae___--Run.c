/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a95132863a9f1610f7b7df341c04daae___::Run @ 0x18012A360
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a95132863a9f1610f7b7df341c04daae___::Run(
        __int64 a1)
{
  HRESULT v2; // eax
  __int64 v3; // rdx
  void *v4; // rcx
  void *ppvOut; // [rsp+20h] [rbp-60h] BYREF
  __int128 v6; // [rsp+30h] [rbp-50h] BYREF
  __int64 v7; // [rsp+40h] [rbp-40h]
  __int128 v8; // [rsp+50h] [rbp-30h] BYREF
  __int128 v9; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v7 = -2LL;
  ppvOut = 0LL;
  v2 = IUnknown_QueryService(
         *(IUnknown **)(*(_QWORD *)(a1 + 24) + 48LL),
         (const GUID *const)&SID_ImmersiveLauncher,
         &GUID_5ef7890f_319b_4259_8d0f_36e5ff0916ce,
         &ppvOut);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 48LL) + 72LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
           &v9);
    if ( v2 >= 0 )
    {
      v6 = 0uLL;
      v8 = v9;
      v2 = (*(__int64 (__fastcall **)(void *, __int128 *, __int128 *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, &v8, &v6);
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 48LL))(ppvOut, 0LL);
        if ( v2 >= 0 )
          goto LABEL_10;
        v3 = 89LL;
      }
      else
      {
        v3 = 88LL;
      }
    }
    else
    {
      v3 = 87LL;
    }
  }
  else
  {
    v3 = 84LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v3,
    (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarproxy.cpp",
    (const char *)(unsigned int)v2);
LABEL_10:
  v4 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
