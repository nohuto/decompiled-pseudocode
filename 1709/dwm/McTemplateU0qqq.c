/*
 * XREFs of McTemplateU0qqq @ 0x140004AC8
 * Callers:
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x140001290 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140003960 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x1400049BC (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0qqq(_QWORD *a1, __int64 a2, int a3, int a4, char a5)
{
  _BYTE v6[16]; // [rsp+20h] [rbp-50h] BYREF
  int *v7; // [rsp+30h] [rbp-40h]
  __int64 v8; // [rsp+38h] [rbp-38h]
  int *v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  char *v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+90h] [rbp+20h] BYREF
  int v14; // [rsp+98h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v7 = &v13;
  v8 = 4LL;
  v9 = &v14;
  v10 = 4LL;
  v11 = &a5;
  v12 = 4LL;
  return McGenEventWriteUM(a1, &UdwmProcessModeChange_Info, 4LL, (__int64)v6);
}
