/*
 * XREFs of VslVerifyPage @ 0x1401F2BA0
 * Callers:
 *     CcBcbProfiler @ 0x1401682E0 (CcBcbProfiler.c)
 *     sub_14043C010 @ 0x14043C010 (sub_14043C010.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslVerifyPage(__int64 a1, int a2)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]
  int v5; // [rsp+30h] [rbp-78h]

  v4 = a1;
  v5 = (a2 & 1) != 0;
  if ( a2 >= 0 )
    return VslpEnterIumSecureMode(2u, 237LL, 0, (__int64)v3);
  v5 = ((a2 & 1) != 0) | 2;
  if ( a1 )
    return VslpEnterIumSecureMode(2u, 237LL, 0, (__int64)v3);
  else
    return 0;
}
