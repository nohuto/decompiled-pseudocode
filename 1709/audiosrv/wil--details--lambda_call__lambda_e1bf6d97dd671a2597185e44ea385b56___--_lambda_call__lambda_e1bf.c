/*
 * XREFs of wil::details::lambda_call__lambda_e1bf6d97dd671a2597185e44ea385b56___::_lambda_call__lambda_e1bf6d97dd671a2597185e44ea385b56___ @ 0x18007F468
 * Callers:
 *     _CPolicyConfig::SetDeviceFormat_::_1_::dtor$5 @ 0x180087AAB (_CPolicyConfig--SetDeviceFormat_--_1_--dtor$5.c)
 * Callees:
 *     _lambda_e1bf6d97dd671a2597185e44ea385b56_::operator() @ 0x18007F85C (_lambda_e1bf6d97dd671a2597185e44ea385b56_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_e1bf6d97dd671a2597185e44ea385b56___::_lambda_call__lambda_e1bf6d97dd671a2597185e44ea385b56___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_e1bf6d97dd671a2597185e44ea385b56_::operator()();
  }
  return result;
}
