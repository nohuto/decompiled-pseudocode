/*
 * XREFs of VslpIumPhase4Initialize @ 0x1401866E8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     VslpIumInitializeTelemetry @ 0x1408C9530 (VslpIumInitializeTelemetry.c)
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
