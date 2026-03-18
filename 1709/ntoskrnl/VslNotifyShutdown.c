/*
 * XREFs of VslNotifyShutdown @ 0x1401F23F4
 * Callers:
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x14043A3E0 (PopShutdownSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslNotifyShutdown(unsigned __int8 a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = a1;
  return VslpEnterIumSecureMode(2u, 241LL, 0, (__int64)v2);
}
