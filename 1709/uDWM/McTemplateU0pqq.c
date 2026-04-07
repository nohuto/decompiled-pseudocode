/*
 * XREFs of McTemplateU0pqq @ 0x1800925B8
 * Callers:
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18000D93C (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x18006CE6C (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0pqq(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _BYTE v6[16]; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v7; // [rsp+30h] [rbp-40h]
  __int64 v8; // [rsp+38h] [rbp-38h]
  int *v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  char *v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp-18h]
  __int64 v13; // [rsp+90h] [rbp+20h] BYREF
  int v14; // [rsp+98h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v8 = 8LL;
  v10 = 4LL;
  v7 = &v13;
  v12 = 4LL;
  v9 = &v14;
  v11 = &a5;
  return McGenEventWriteUM(
           &Microsoft_Windows_Dwm_Udwm_Provider_Context,
           &UdwmSystemAnimation_WindowCloak,
           4LL,
           (__int64)v6);
}
