/*
 * XREFs of VslUpdateFreezeTimeBias @ 0x140719070
 * Callers:
 *     PsThawProcess @ 0x140565D8C (PsThawProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslUpdateFreezeTimeBias(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+30h] [rbp-78h]

  v2 = *(_QWORD *)(a1 + 720);
  v6 = a2;
  v5 = v2;
  return VslpEnterIumSecureMode(2u, 56LL, 0, (__int64)v4);
}
