/*
 * XREFs of _lambda_0ae2b73647cc8a7a69dfd582220b371f_::_lambda_invoker_cdecl_ @ 0x1800B9960
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800040CC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180004100 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_0ae2b73647cc8a7a69dfd582220b371f_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( a6 != 4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1389,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        (const char *)a4);
      __debugbreak();
    }
    v6 = *(_QWORD *)(a4 + 120);
    if ( !v6 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, a5);
  }
  return 0LL;
}
