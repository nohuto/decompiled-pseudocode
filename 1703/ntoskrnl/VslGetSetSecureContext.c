/*
 * XREFs of VslGetSetSecureContext @ 0x140688040
 * Callers:
 *     PspGetSetContextInternal @ 0x140521E20 (PspGetSetContextInternal.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
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
  return VslpEnterIumSecureMode(1, (unsigned int)(a1 != 0) + 13, 0LL, (__int64)v5);
}
