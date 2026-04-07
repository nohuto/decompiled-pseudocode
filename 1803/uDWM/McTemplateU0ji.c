/*
 * XREFs of McTemplateU0ji @ 0x1800A82FC
 * Callers:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x18000C360 (-End@CAnimationClock@@QEAAJXZ.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18000C598 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180073C1C (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0ji(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  v11 = a4;
  v5[2] = a3;
  v7 = 0;
  v6 = 16;
  v8 = &v11;
  v10 = 0;
  v9 = 8;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, 3LL, (__int64)v5);
}
