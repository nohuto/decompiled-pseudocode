/*
 * XREFs of _lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_ @ 0x18002AAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18001E798 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

void lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_()
{
  if ( wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_1802B8FD8);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    byte_1802B8FE8 = 0;
    ReleaseSRWLockExclusive(&stru_1802B8FD8);
  }
}
