/*
 * XREFs of wil::details::lambda_call__lambda_b140be1596bfe507958c2c38a65a7737___::_lambda_call__lambda_b140be1596bfe507958c2c38a65a7737___ @ 0x1800D94FC
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StartTracking_::_1_::dtor$1 @ 0x1800EA6C1 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--StartT_ea_1800EA6C1.c)
 * Callees:
 *     _lambda_b140be1596bfe507958c2c38a65a7737_::operator() @ 0x1800D83A8 (_lambda_b140be1596bfe507958c2c38a65a7737_--operator().c)
 */

void __fastcall wil::details::lambda_call__lambda_b140be1596bfe507958c2c38a65a7737___::_lambda_call__lambda_b140be1596bfe507958c2c38a65a7737___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    lambda_b140be1596bfe507958c2c38a65a7737_::operator()((RTL_SRWLOCK **)a1);
  }
}
