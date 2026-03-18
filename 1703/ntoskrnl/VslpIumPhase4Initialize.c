/*
 * XREFs of VslpIumPhase4Initialize @ 0x140167AFC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     VslpIumInitializeTelemetry @ 0x140825458 (VslpIumInitializeTelemetry.c)
 */

__int64 VslpIumPhase4Initialize()
{
  __int64 result; // rax
  NTSTATUS v1; // eax
  _QWORD v2[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v3[112]; // [rsp+40h] [rbp-88h] BYREF

  result = VslpIumInitializeTelemetry();
  if ( VslVsmEnabled )
  {
    v1 = VslpEnterIumSecureMode(1, 1LL, 0LL, (__int64)v3);
    if ( v1 < 0 )
      KeBugCheckEx(0x6Fu, v1, 3uLL, 0LL, 0LL);
    v2[0] = VslpEnterIumSecureMode;
    v2[1] = VslRetrieveMailbox;
    return IumApiInit(v2);
  }
  return result;
}
