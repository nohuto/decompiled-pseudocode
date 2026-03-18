/*
 * XREFs of KeUnsecureProcess @ 0x14024070C
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

int __fastcall KeUnsecureProcess(__int64 a1)
{
  __int64 v1; // rax
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  v1 = *(_QWORD *)(a1 + 720);
  *(_QWORD *)(a1 + 720) = 0LL;
  if ( v1 )
  {
    v4 = v1;
    LODWORD(v1) = VslpEnterIumSecureMode(2u, 29LL, 0, (__int64)v3);
  }
  return v1;
}
