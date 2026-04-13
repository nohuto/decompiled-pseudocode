/*
 * XREFs of _lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_ @ 0x18000C370
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000BD84 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

void lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_()
{
  if ( wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_18017C1F8);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    byte_18017C208 = 0;
    ReleaseSRWLockExclusive(&stru_18017C1F8);
  }
}
