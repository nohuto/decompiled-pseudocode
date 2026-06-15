/*
 * XREFs of wil::details::lambda_call__lambda_bfd102d24aa09ec1a679abce498d7f04___::_lambda_call__lambda_bfd102d24aa09ec1a679abce498d7f04___ @ 0x18001F7E8
 * Callers:
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$13 @ 0x180037399 (_CApplicationManager--RpcGetProcess_--_1_--dtor$13.c)
 * Callees:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001AF08 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_bfd102d24aa09ec1a679abce498d7f04___::_lambda_call__lambda_bfd102d24aa09ec1a679abce498d7f04___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return CApplicationManager::Unregister(*(CApplicationManager **)a1, **(struct CProcess ***)(a1 + 8));
  }
  return result;
}
