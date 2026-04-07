/*
 * XREFs of McTemplateU0j @ 0x1800A823C
 * Callers:
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18000C97C (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x18000D148 (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180073C1C (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0j(__int64 a1, __int128 *a2, __int64 a3)
{
  _BYTE v4[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v7 = 0;
  v5 = a3;
  v6 = 16;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, 2LL, (__int64)v4);
}
