/*
 * XREFs of wil::details::lambda_call__lambda_750b57c9ef9b9d871fb25902b17e3c86___::_lambda_call__lambda_750b57c9ef9b9d871fb25902b17e3c86___ @ 0x1800988D0
 * Callers:
 *     _CAudioResourceManager::RetryGetSaDeviceForExclusive_::_1_::dtor$2 @ 0x18009BB41 (_CAudioResourceManager--RetryGetSaDeviceForExclusive_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_750b57c9ef9b9d871fb25902b17e3c86_::operator() @ 0x180098980 (_lambda_750b57c9ef9b9d871fb25902b17e3c86_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_750b57c9ef9b9d871fb25902b17e3c86___::_lambda_call__lambda_750b57c9ef9b9d871fb25902b17e3c86___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_750b57c9ef9b9d871fb25902b17e3c86_::operator()();
  }
  return result;
}
