/*
 * XREFs of McTemplateU0jdd @ 0x18009F5D0
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180002D18 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x18006CE6C (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0jdd(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _BYTE v6[16]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+30h] [rbp-40h]
  __int64 v8; // [rsp+38h] [rbp-38h]
  int *v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  char *v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+98h] [rbp+28h] BYREF

  v13 = a4;
  v7 = a3;
  v9 = &v13;
  v8 = 16LL;
  v11 = &a5;
  v10 = 4LL;
  v12 = 4LL;
  return McGenEventWriteUM(
           &Microsoft_Windows_Dwm_Udwm_Provider_Context,
           &UdwmAnimationClock_StateChange,
           4LL,
           (__int64)v6);
}
