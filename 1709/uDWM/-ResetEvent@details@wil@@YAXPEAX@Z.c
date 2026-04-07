/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800693C0
 * Callers:
 *     _lambda_e31835caed9ddc6847735c55d55e4483_::_lambda_invoker_cdecl_ @ 0x180068D00 (_lambda_e31835caed9ddc6847735c55d55e4483_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180067A60 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  __int64 v2; // r8
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x873, v2, v3);
    __debugbreak();
  }
}
