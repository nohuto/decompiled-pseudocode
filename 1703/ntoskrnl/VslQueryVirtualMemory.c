/*
 * XREFs of VslQueryVirtualMemory @ 0x1401ED718
 * Callers:
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslQueryVirtualMemory(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v3; // rax
  NTSTATUS result; // eax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  _BYTE v8[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v9; // [rsp+28h] [rbp-80h]
  __int128 v10; // [rsp+30h] [rbp-78h]
  __int128 v11; // [rsp+40h] [rbp-68h]
  __int128 v12; // [rsp+50h] [rbp-58h]

  v3 = *(_QWORD *)(a1 + 720);
  *(_QWORD *)&v10 = a2;
  v9 = v3;
  result = VslpEnterIumSecureMode(1, 38LL, 0LL, (__int64)v8);
  if ( result >= 0 )
  {
    v6 = v11;
    *a3 = v10;
    v7 = v12;
    a3[1] = v6;
    a3[2] = v7;
  }
  return result;
}
