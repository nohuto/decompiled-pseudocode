/*
 * XREFs of wil::details::ScopeExitFn__lambda_b77db96896d60668f0ec952b0722b473___::_ScopeExitFn__lambda_b77db96896d60668f0ec952b0722b473___ @ 0x1801264DC
 * Callers:
 *     __lambda_3e1390e1d2422aea3f572ae27706a686_::operator()_::_1_::dtor$0 @ 0x1801EE7C8 (__lambda_3e1390e1d2422aea3f572ae27706a686_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_b77db96896d60668f0ec952b0722b473___::_ScopeExitFn__lambda_b77db96896d60668f0ec952b0722b473___(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 368LL) + 8LL * **(_QWORD **)(a1 + 8));
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 760LL))(v1, 0LL);
  }
  return result;
}
