/*
 * XREFs of VslCloseSecureHandle @ 0x14015F2D0
 * Callers:
 *     VslCreateEnclave @ 0x14071818C (VslCreateEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x14077F9C8 (PsDereferenceVsmEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslCloseSecureHandle(__int64 a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = a1;
  return VslpEnterIumSecureMode(2u, 29LL, 0, (__int64)v2);
}
