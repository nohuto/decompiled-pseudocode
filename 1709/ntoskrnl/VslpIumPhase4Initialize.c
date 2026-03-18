/*
 * XREFs of VslpIumPhase4Initialize @ 0x14015C2E4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     VslpIumInitializeTelemetry @ 0x1408569A4 (VslpIumInitializeTelemetry.c)
 */

NTSTATUS VslpIumPhase4Initialize()
{
  NTSTATUS result; // eax
  _BYTE v1[112]; // [rsp+30h] [rbp-88h] BYREF

  result = VslpIumInitializeTelemetry();
  if ( VslVsmEnabled )
  {
    result = VslpEnterIumSecureMode(2u, 1LL, 0, (__int64)v1);
    if ( result < 0 )
      KeBugCheckEx(0x6Fu, result, 3uLL, 0LL, 0LL);
  }
  return result;
}
