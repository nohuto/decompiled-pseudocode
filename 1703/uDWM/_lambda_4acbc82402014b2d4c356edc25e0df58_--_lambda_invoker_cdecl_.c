/*
 * XREFs of _lambda_4acbc82402014b2d4c356edc25e0df58_::_lambda_invoker_cdecl_ @ 0x180017520
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180017A90 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall lambda_4acbc82402014b2d4c356edc25e0df58_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi
  wil::details_abi::FeatureStateData *Ptr; // rcx

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 4;
    AcquireSRWLockExclusive(Context + 4);
    LOBYTE(Context[11].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    Ptr = (wil::details_abi::FeatureStateData *)Context[3].Ptr;
    if ( Ptr )
      wil::details_abi::FeatureStateData::RecordUsage(Ptr);
  }
}
