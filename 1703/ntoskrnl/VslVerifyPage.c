/*
 * XREFs of VslVerifyPage @ 0x1401EDCC0
 * Callers:
 *     CcBcbProfiler @ 0x140173A20 (CcBcbProfiler.c)
 *     sub_14041C010 @ 0x14041C010 (sub_14041C010.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslVerifyPage(__int64 a1, int a2)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]
  int v5; // [rsp+30h] [rbp-78h]

  v4 = a1;
  v5 = (a2 & 1) != 0;
  if ( a2 >= 0 )
    return VslpEnterIumSecureMode(1, 236LL, 0LL, (__int64)v3);
  v5 = ((a2 & 1) != 0) | 2;
  if ( a1 )
    return VslpEnterIumSecureMode(1, 236LL, 0LL, (__int64)v3);
  else
    return 0;
}
