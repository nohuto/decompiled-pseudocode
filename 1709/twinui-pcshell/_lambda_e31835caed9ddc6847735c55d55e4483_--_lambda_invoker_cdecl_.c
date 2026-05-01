/*
 * XREFs of _lambda_e31835caed9ddc6847735c55d55e4483_::_lambda_invoker_cdecl_ @ 0x1801A00C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004258 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800042AC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_e31835caed9ddc6847735c55d55e4483_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        HANDLE *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  const char *v6; // r9
  HANDLE v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(Context[14]) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x873,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      v6);
    __debugbreak();
  }
  v7 = Context[13];
  if ( !v7 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
  (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v7 + 16LL))(v7);
  SetThreadpoolWait(Wait, Context[14], 0LL);
}
