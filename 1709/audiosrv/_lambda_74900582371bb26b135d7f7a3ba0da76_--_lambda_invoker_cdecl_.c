/*
 * XREFs of _lambda_74900582371bb26b135d7f7a3ba0da76_::_lambda_invoker_cdecl_ @ 0x18008A060
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18008C304 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

__int64 __fastcall lambda_74900582371bb26b135d7f7a3ba0da76_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( *(_BYTE *)a4 )
    wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)(a4 + 80), (PSRWLOCK)(a4 + 32));
  return 0LL;
}
