/*
 * XREFs of _lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_ @ 0x1800C0EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  wil::details::EnabledStateManager::OnTimer(Context);
}
