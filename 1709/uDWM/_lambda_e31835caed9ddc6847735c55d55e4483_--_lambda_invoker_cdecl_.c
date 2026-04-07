/*
 * XREFs of _lambda_e31835caed9ddc6847735c55d55e4483_::_lambda_invoker_cdecl_ @ 0x180068D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800693C0 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall lambda_e31835caed9ddc6847735c55d55e4483_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        wil::details **Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  wil::details *v6; // rcx

  wil::details::ResetEvent(Context[14], Context);
  v6 = Context[13];
  if ( !v6 )
    __fastfail(7u);
  (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v6 + 16LL))(v6);
  SetThreadpoolWait(Wait, Context[14], 0LL);
}
