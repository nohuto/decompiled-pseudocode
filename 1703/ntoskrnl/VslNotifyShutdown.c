/*
 * XREFs of VslNotifyShutdown @ 0x1401ED5D4
 * Callers:
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x14041A6B0 (PopShutdownSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslNotifyShutdown(unsigned __int8 a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = a1;
  return VslpEnterIumSecureMode(1, 240LL, 0LL, (__int64)v2);
}
