/*
 * XREFs of KeUnsecureProcess @ 0x1401FD25C
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KeUnsecureProcess(__int64 a1)
{
  __int64 v1; // rax
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  v1 = *(_QWORD *)(a1 + 720);
  *(_QWORD *)(a1 + 720) = 0LL;
  v4 = v1;
  return VslpEnterIumSecureMode(1, 29LL, 0LL, (__int64)v3);
}
