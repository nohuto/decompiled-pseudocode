/*
 * XREFs of VslCreateSecureAllocation @ 0x1401F2E70
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslCreateSecureAllocation(__int64 a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+30h] [rbp-78h]

  v5 = a1;
  result = VslpEnterIumSecureMode(2u, 21LL, 0, (__int64)v4);
  if ( result >= 0 )
    *a2 = v6;
  return result;
}
