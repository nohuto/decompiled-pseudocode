/*
 * XREFs of McTemplateU0qdq @ 0x1800967B8
 * Callers:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18000DF08 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18000F0D0 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180073C1C (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0qdq(__int64 a1, __int128 *a2, int a3, int a4, char a5)
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
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, 4LL, (__int64)v6);
}
