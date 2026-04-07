/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180074570
 * Callers:
 *     _lambda_e31835caed9ddc6847735c55d55e4483_::_lambda_invoker_cdecl_ @ 0x180072960 (_lambda_e31835caed9ddc6847735c55d55e4483_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180072454 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x872,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      v2);
    __debugbreak();
  }
}
