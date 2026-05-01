/*
 * XREFs of ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180041144
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z @ 0x180007F28 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180009D04 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000AC4C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180031CC8 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180031D0C (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 */

void __fastcall HampWakeContextUpdateExternalApplicationState(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rdx

  v2 = a2;
  HampWakeContextAcquireLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)a1, a2);
  *(_BYTE *)(a1 + 184) &= 0xE3u;
  *(_BYTE *)(a1 + 185) |= 0x10u;
  *(_BYTE *)(a1 + 184) |= 4 * (v2 & 7);
  HampWakeContextQueueWorker((struct _HAM_HOST_WAKE_CONTEXT *)a1);
  HampWakeContextReleaseLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)a1, v4);
}
