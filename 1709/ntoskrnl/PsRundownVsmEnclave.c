/*
 * XREFs of PsRundownVsmEnclave @ 0x14071C0FC
 * Callers:
 *     MiCanDeleteEnclave @ 0x140229428 (MiCanDeleteEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PsRundownVsmEnclave(__int64 a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = *(_QWORD *)(a1 + 24);
  return VslpEnterIumSecureMode(2u, 44LL, 0, (__int64)v2);
}
