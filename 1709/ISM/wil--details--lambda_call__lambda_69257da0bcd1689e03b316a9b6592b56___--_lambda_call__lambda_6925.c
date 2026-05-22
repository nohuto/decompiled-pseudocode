/*
 * XREFs of wil::details::lambda_call__lambda_69257da0bcd1689e03b316a9b6592b56___::_lambda_call__lambda_69257da0bcd1689e03b316a9b6592b56___ @ 0x1800C6FF8
 * Callers:
 *     _SpatialInteractionDevices::SpatialInteractionController::StartTracking_::_1_::dtor$1 @ 0x1800D22E1 (_SpatialInteractionDevices--SpatialInteractionController--StartTracking_--_1_--dtor$1.c)
 * Callees:
 *     _lambda_69257da0bcd1689e03b316a9b6592b56_::operator() @ 0x1800C657C (_lambda_69257da0bcd1689e03b316a9b6592b56_--operator().c)
 */

int __fastcall wil::details::lambda_call__lambda_69257da0bcd1689e03b316a9b6592b56___::_lambda_call__lambda_69257da0bcd1689e03b316a9b6592b56___(
        __int64 a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    return lambda_69257da0bcd1689e03b316a9b6592b56_::operator()((RTL_SRWLOCK **)a1);
  }
  return result;
}
