/*
 * XREFs of wil::details::ScopeExitFn__lambda_d85d04d76097ceffa4b9f05e0d6250cf___::_ScopeExitFn__lambda_d85d04d76097ceffa4b9f05e0d6250cf___ @ 0x1801C854C
 * Callers:
 *     __lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_::operator()_::_1_::dtor$0 @ 0x1801C9672 (__lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_d85d04d76097ceffa4b9f05e0d6250cf___::_ScopeExitFn__lambda_d85d04d76097ceffa4b9f05e0d6250cf___(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 368LL) + 8LL * **(_QWORD **)(a1 + 8));
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 792LL))(v1, 0LL);
  }
  return result;
}
