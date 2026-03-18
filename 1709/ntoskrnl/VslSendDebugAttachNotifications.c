/*
 * XREFs of VslSendDebugAttachNotifications @ 0x1406B4174
 * Callers:
 *     DbgkpPostModuleMessages @ 0x1406AA788 (DbgkpPostModuleMessages.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslSendDebugAttachNotifications(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]
  __int64 v8; // [rsp+38h] [rbp-70h]

  v3 = *(_QWORD *)(a1 + 720);
  v7 = a2;
  v8 = a3;
  v6 = v3;
  return VslpEnterIumSecureMode(2u, 15LL, 0, (__int64)v5);
}
