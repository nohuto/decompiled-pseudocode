/*
 * XREFs of _lambda_43e11fa879b2ec28bc1102f8a62053cb_::operator() @ 0x1800A17AC
 * Callers:
 *     wil::details::ScopeExitFn__lambda_43e11fa879b2ec28bc1102f8a62053cb___::_ScopeExitFn__lambda_43e11fa879b2ec28bc1102f8a62053cb___ @ 0x1800A1210 (wil--details--ScopeExitFn__lambda_43e11fa879b2ec28bc1102f8a62053cb___--_ScopeExitFn__lambda_43e1.c)
 *     _lambda_c3020acaf10c7144233ee4f2e713fc58_::operator() @ 0x1800A1BF0 (_lambda_c3020acaf10c7144233ee4f2e713fc58_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_43e11fa879b2ec28bc1102f8a62053cb_::operator()(_QWORD **a1)
{
  int v2; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)**a1 + 88LL))(**a1, *(_QWORD *)(*a1[1] + 24LL));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2016LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  result = 0LL;
  *(_QWORD *)(*a1[1] + 24LL) = 0LL;
  return result;
}
