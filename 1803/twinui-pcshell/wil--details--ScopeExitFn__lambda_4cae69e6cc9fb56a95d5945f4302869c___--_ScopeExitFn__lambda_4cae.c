/*
 * XREFs of wil::details::ScopeExitFn__lambda_4cae69e6cc9fb56a95d5945f4302869c___::_ScopeExitFn__lambda_4cae69e6cc9fb56a95d5945f4302869c___ @ 0x180247654
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize_::_1_::dtor$1 @ 0x18024B373 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedResize_--_1_--dtor$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_4cae69e6cc9fb56a95d5945f4302869c___::_ScopeExitFn__lambda_4cae69e6cc9fb56a95d5945f4302869c___(
        __int64 *a1)
{
  _BYTE *v2; // rdx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v2 = (_BYTE *)a1[1];
    LOBYTE(v2) = *v2;
    v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a1 + 416LL))(*a1, v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        661LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v3);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
