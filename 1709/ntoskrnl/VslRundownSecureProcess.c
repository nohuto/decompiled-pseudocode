/*
 * XREFs of VslRundownSecureProcess @ 0x1406B4124
 * Callers:
 *     KeRundownSecureProcess @ 0x140202FB4 (KeRundownSecureProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslRundownSecureProcess(__int64 a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = a1;
  return VslpEnterIumSecureMode(2u, 10LL, 0, (__int64)v2);
}
