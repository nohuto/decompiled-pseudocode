/*
 * XREFs of wil::details::ScopeExitFn__lambda_553dc37ebe8d06cdbf02ae1bc7473959___::_ScopeExitFn__lambda_553dc37ebe8d06cdbf02ae1bc7473959___ @ 0x1801B26FC
 * Callers:
 *     _AccessibilityExperienceManager::_OnViewCreated_::_1_::dtor$2 @ 0x1801F6C32 (_AccessibilityExperienceManager--_OnViewCreated_--_1_--dtor$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_553dc37ebe8d06cdbf02ae1bc7473959___::_ScopeExitFn__lambda_553dc37ebe8d06cdbf02ae1bc7473959___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)a1 + 336LL))(**(_QWORD **)a1, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x289,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
