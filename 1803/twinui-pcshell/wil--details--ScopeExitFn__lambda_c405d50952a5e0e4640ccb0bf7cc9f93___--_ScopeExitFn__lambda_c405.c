/*
 * XREFs of wil::details::ScopeExitFn__lambda_c405d50952a5e0e4640ccb0bf7cc9f93___::_ScopeExitFn__lambda_c405d50952a5e0e4640ccb0bf7cc9f93___ @ 0x180257F0C
 * Callers:
 *     _AccessibilityExperienceManager::_OnViewCreated_::_1_::dtor$2 @ 0x18025AD21 (_AccessibilityExperienceManager--_OnViewCreated_--_1_--dtor$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_c405d50952a5e0e4640ccb0bf7cc9f93___::_ScopeExitFn__lambda_c405d50952a5e0e4640ccb0bf7cc9f93___(
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
        732LL,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
