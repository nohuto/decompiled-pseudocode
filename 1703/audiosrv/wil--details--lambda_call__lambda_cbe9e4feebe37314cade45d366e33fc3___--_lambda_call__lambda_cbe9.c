/*
 * XREFs of wil::details::lambda_call__lambda_cbe9e4feebe37314cade45d366e33fc3___::_lambda_call__lambda_cbe9e4feebe37314cade45d366e33fc3___ @ 0x1800AA014
 * Callers:
 *     _CAudioResourceManager::RetryGetSaDeviceForExclusive_::_1_::dtor$2 @ 0x1800ACB05 (_CAudioResourceManager--RetryGetSaDeviceForExclusive_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_cbe9e4feebe37314cade45d366e33fc3_::operator() @ 0x1800AA1AC (_lambda_cbe9e4feebe37314cade45d366e33fc3_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_cbe9e4feebe37314cade45d366e33fc3___::_lambda_call__lambda_cbe9e4feebe37314cade45d366e33fc3___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_cbe9e4feebe37314cade45d366e33fc3_::operator()();
  }
  return result;
}
