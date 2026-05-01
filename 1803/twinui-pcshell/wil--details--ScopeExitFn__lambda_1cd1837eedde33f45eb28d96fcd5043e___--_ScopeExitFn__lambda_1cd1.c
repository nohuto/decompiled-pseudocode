/*
 * XREFs of wil::details::ScopeExitFn__lambda_1cd1837eedde33f45eb28d96fcd5043e___::_ScopeExitFn__lambda_1cd1837eedde33f45eb28d96fcd5043e___ @ 0x1801D2780
 * Callers:
 *     _WindowEventDispatcher::RecoverViews_::_1_::dtor$5 @ 0x1801D7CFD (_WindowEventDispatcher--RecoverViews_--_1_--dtor$5.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_1cd1837eedde33f45eb28d96fcd5043e___::_ScopeExitFn__lambda_1cd1837eedde33f45eb28d96fcd5043e___(
        __int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 336LL))(*v1, 0LL);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1303LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v2);
  }
}
