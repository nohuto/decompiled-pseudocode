/*
 * XREFs of VslGetSetSecureContext @ 0x140718A30
 * Callers:
 *     PspGetSetContextInternal @ 0x1405B7BD0 (PspGetSetContextInternal.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslGetSetSecureContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]
  __int64 v8; // [rsp+38h] [rbp-70h]

  v6 = a2;
  v7 = a3;
  v8 = a4;
  LOWORD(a2) = (a1 != 0) + 13;
  return VslpEnterIumSecureMode(2u, a2, 0, (__int64)v5);
}
