/*
 * XREFs of ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180005164
 * Callers:
 *     _lambda_d920a0a3d4a387d1d77e21b11a8b43bc_::_lambda_invoker_cdecl_ @ 0x180006010 (_lambda_d920a0a3d4a387d1d77e21b11a8b43bc_--_lambda_invoker_cdecl_.c)
 *     _lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_ @ 0x18006CA50 (_lambda_87c8d85798ea78242f0953b15d7cc197_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180005064 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

void __fastcall wil::details::EnabledStateManager::OnTimer(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // r9d

  if ( LOBYTE(this->Ptr) )
  {
    v2 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)this, v3, v4, v5);
    LOBYTE(this[3].Ptr) = 0;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
