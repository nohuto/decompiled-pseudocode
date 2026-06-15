/*
 * XREFs of _lambda_02deec49ef48fa12c9095208f5992a62_::_lambda_invoker_cdecl_ @ 0x180007FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x180004468 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 */

void __fastcall lambda_02deec49ef48fa12c9095208f5992a62_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rsi
  const struct __WIL__WNF_TYPE_ID *v5; // rdx
  const void *v6; // r8

  if ( *Context )
  {
    v4 = (RTL_SRWLOCK *)(Context + 40);
    AcquireSRWLockExclusive((PSRWLOCK)Context + 5);
    if ( *((_QWORD *)Context + 31) - *((_QWORD *)Context + 30) >= 0xCuLL )
    {
      wil_details_WriteSRUMWnfUsageBuffer((__int64 *)Context + 30, v5, v6);
      *((_QWORD *)Context + 31) = *((_QWORD *)Context + 30);
    }
    Context[64] = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
