/*
 * XREFs of VslNotifyShutdown @ 0x14022FF14
 * Callers:
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1404873E0 (PopShutdownSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslNotifyShutdown(unsigned __int8 a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = a1;
  return VslpEnterIumSecureMode(2u, 242LL, 0, (__int64)v2);
}
