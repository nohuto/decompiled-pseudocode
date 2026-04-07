/*
 * XREFs of McTemplateU0ji @ 0x18009F640
 * Callers:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x180002AF8 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180002C14 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x18006CE6C (McGenEventWriteUM.c)
 */

__int64 McTemplateU0ji(__int64 a1, __int128 *a2, __int64 a3, ...)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  va_list v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  v4[2] = a3;
  v6 = 0;
  v5 = 16;
  va_copy(v7, va);
  v9 = 0;
  v8 = 8;
  return McGenEventWriteUM(&Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, 3LL, (__int64)v4);
}
