/*
 * XREFs of _lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_ @ 0x180019140
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18000AAE8 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi
  RTL_SRWLOCK *Ptr; // rcx

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 4;
    AcquireSRWLockExclusive(Context + 4);
    BYTE1(Context[8].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    Ptr = (RTL_SRWLOCK *)Context[3].Ptr;
    if ( Ptr )
      wil::details_abi::FeatureStateData::RecordUsage(Ptr);
  }
}
