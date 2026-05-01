/*
 * XREFs of wil::details::ScopeExitFn__lambda_e9721e9574ff8d61f93eb23ce88e634e___::_ScopeExitFn__lambda_e9721e9574ff8d61f93eb23ce88e634e___ @ 0x1801264B0
 * Callers:
 *     _ViewEventDispatcher::RecoverViews_::_1_::dtor$4 @ 0x1801EE912 (_ViewEventDispatcher--RecoverViews_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_e9721e9574ff8d61f93eb23ce88e634e___::_ScopeExitFn__lambda_e9721e9574ff8d61f93eb23ce88e634e___(
        __int64 a1)
{
  _QWORD *v1; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 336LL))(*v1, 0LL);
  }
  return result;
}
