/*
 * XREFs of VslEndSecurePageIteration @ 0x1401F1B70
 * Callers:
 *     HvlpEndSecurePageListIteration @ 0x1401F1008 (HvlpEndSecurePageListIteration.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslEndSecurePageIteration(unsigned __int8 a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  int v6; // [rsp+30h] [rbp-78h]

  v5 = a1;
  result = VslpEnterIumSecureMode(2u, 2049LL, 0, (__int64)v4);
  if ( result >= 0 )
    *a2 = v6;
  return result;
}
