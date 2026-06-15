/*
 * XREFs of wil::details::lambda_call__lambda_151e19bf78e10632f606d7719cd7d899___::_lambda_call__lambda_151e19bf78e10632f606d7719cd7d899___ @ 0x140031384
 * Callers:
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$0 @ 0x140021B80 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$0.c)
 * Callees:
 *     McTemplateU0 @ 0x140042AB4 (McTemplateU0.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_151e19bf78e10632f606d7719cd7d899___::_lambda_call__lambda_151e19bf78e10632f606d7719cd7d899___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      return McTemplateU0();
  }
  return result;
}
