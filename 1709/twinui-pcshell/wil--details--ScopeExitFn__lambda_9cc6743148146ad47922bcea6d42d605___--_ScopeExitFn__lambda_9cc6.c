/*
 * XREFs of wil::details::ScopeExitFn__lambda_9cc6743148146ad47922bcea6d42d605___::_ScopeExitFn__lambda_9cc6743148146ad47922bcea6d42d605___ @ 0x18019DE20
 * Callers:
 *     _TouchKeyboardExperienceManager::OnViewCreated_::_1_::dtor$8 @ 0x1801F6679 (_TouchKeyboardExperienceManager--OnViewCreated_--_1_--dtor$8.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_9cc6743148146ad47922bcea6d42d605___::_ScopeExitFn__lambda_9cc6743148146ad47922bcea6d42d605___(
        _QWORD **a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)**a1 + 88LL))(**a1, *(_QWORD *)(*a1[1] + 24LL));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x52C,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    *(_QWORD *)(*a1[1] + 24LL) = 0LL;
  }
}
