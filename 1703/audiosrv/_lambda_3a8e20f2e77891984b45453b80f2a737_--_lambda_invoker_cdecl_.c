/*
 * XREFs of _lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_ @ 0x18002F580
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180028A78 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180028F44 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

void __fastcall lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        wil::details::EnabledStateManager *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // r9d
  RTL_SRWLOCK *v7; // rcx
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)Context )
  {
    wil::srwlock::lock_exclusive((__int64)Context + 8, (__int64)&SRWLock);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock(Context, v4, v5, v6);
    v7 = SRWLock;
    *((_BYTE *)Context + 24) = 0;
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
  }
}
