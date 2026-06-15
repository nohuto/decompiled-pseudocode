/*
 * XREFs of _lambda_4acbc82402014b2d4c356edc25e0df58_::_lambda_invoker_cdecl_ @ 0x18002F630
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180028F44 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180029408 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall lambda_4acbc82402014b2d4c356edc25e0df58_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        _BYTE *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rcx
  wil::details_abi::FeatureStateData *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h] BYREF

  if ( *Context )
  {
    wil::srwlock::lock_exclusive((__int64)(Context + 32), (__int64)&SRWLock);
    v4 = SRWLock;
    Context[88] = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v5 = (wil::details_abi::FeatureStateData *)*((_QWORD *)Context + 3);
    if ( v5 )
      wil::details_abi::FeatureStateData::RecordUsage(v5);
  }
}
