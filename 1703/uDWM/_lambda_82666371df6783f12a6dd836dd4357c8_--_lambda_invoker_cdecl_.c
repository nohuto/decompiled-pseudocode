/*
 * XREFs of _lambda_82666371df6783f12a6dd836dd4357c8_::_lambda_invoker_cdecl_ @ 0x18000E0F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180071144 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall lambda_82666371df6783f12a6dd836dd4357c8_::_lambda_invoker_cdecl_(
        __int64 a1,
        int a2,
        unsigned int a3,
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
      wil::details::in1diag3::FailFast_Unexpected(retaddr, (void *)0x1389, a3, (const char *)a4);
      __debugbreak();
    }
    v6 = *(_QWORD *)(a4 + 120);
    if ( !v6 )
      __fastfail(7u);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, a5);
  }
  return 0LL;
}
