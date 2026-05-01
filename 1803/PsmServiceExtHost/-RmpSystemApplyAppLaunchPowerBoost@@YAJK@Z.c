/*
 * XREFs of ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x180028CFC
 * Callers:
 *     ?RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800258B0 (-RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800289E8 (-RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpSystemApplyAppLaunchPowerBoost(char a1)
{
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+5Ch] [rbp+14h]

  v3 = -1;
  v2 = (2 * a1) & 2 | 1;
  return NtUpdateWnfStateData(&WNF_SEB_UWP_APP_LAUNCH, &v2, 8LL, 0LL, 0LL, 0, 0);
}
