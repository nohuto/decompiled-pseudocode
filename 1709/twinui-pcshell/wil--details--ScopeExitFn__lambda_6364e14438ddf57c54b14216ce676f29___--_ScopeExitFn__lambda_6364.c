/*
 * XREFs of wil::details::ScopeExitFn__lambda_6364e14438ddf57c54b14216ce676f29___::_ScopeExitFn__lambda_6364e14438ddf57c54b14216ce676f29___ @ 0x1801A5C0C
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize_::_1_::dtor$1 @ 0x1801F6906 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedResize_--_1_--dtor$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_6364e14438ddf57c54b14216ce676f29___::_ScopeExitFn__lambda_6364e14438ddf57c54b14216ce676f29___(
        _QWORD *a1)
{
  _BYTE *v2; // rdx
  int v3; // eax
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v2 = (_BYTE *)a1[1];
    LOBYTE(v2) = *v2;
    v3 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a1 + 368LL))(*a1, v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D0,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v3);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
