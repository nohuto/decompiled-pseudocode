/*
 * XREFs of wil::details::ScopeExitFn__lambda_4fb40d042feee4205e75461957cba9db___::_ScopeExitFn__lambda_4fb40d042feee4205e75461957cba9db___ @ 0x180126480
 * Callers:
 *     _ViewEventDispatcher::OverrideNavigationLevelForView_::_1_::dtor$1 @ 0x1801EE9B4 (_ViewEventDispatcher--OverrideNavigationLevelForView_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_4fb40d042feee4205e75461957cba9db___::_ScopeExitFn__lambda_4fb40d042feee4205e75461957cba9db___(
        __int64 a1)
{
  _QWORD *v1; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v1 + 728LL))(*v1, 2LL);
  }
  return result;
}
