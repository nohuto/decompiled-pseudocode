/*
 * XREFs of McTemplateU0 @ 0x140040C18
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019960 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     wil::details::lambda_call__lambda_151e19bf78e10632f606d7719cd7d899___::_lambda_call__lambda_151e19bf78e10632f606d7719cd7d899___ @ 0x1400303B8 (wil--details--lambda_call__lambda_151e19bf78e10632f606d7719cd7d899___--_lambda_call__lambda_151e.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x140034AB4 (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0(__int64 a1)
{
  _BYTE v2[16]; // [rsp+20h] [rbp-28h] BYREF

  return McGenEventWriteUM(a1, &CreateDeviceEndpointInstance_Task_Stop, 1LL, (__int64)v2);
}
