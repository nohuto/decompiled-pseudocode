/*
 * XREFs of McTemplateU0qd @ 0x1800A29F4
 * Callers:
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x1800098A0 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180073C1C (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0qd(__int64 a1, __int64 a2, int a3, int a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  int *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a3;
  v5[2] = &v11;
  v7 = 0;
  v6 = 4;
  v8 = &v12;
  v10 = 0;
  v9 = 4;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmStoryboardInfo, 3LL, (__int64)v5);
}
