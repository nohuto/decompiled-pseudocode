/*
 * XREFs of _lambda_d920a0a3d4a387d1d77e21b11a8b43bc_::_lambda_invoker_cdecl_ @ 0x180008040
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800069A4 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

void __fastcall lambda_d920a0a3d4a387d1d77e21b11a8b43bc_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 1;
    AcquireSRWLockExclusive(Context + 1);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)Context);
    LOBYTE(Context[3].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
