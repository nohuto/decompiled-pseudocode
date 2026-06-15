/*
 * XREFs of _lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_ @ 0x180006E70
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800069A4 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

void lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_()
{
  if ( wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_18004F288);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    byte_18004F298 = 0;
    ReleaseSRWLockExclusive(&stru_18004F288);
  }
}
