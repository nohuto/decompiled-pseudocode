/*
 * XREFs of ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18002588C
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180009D04 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18001B8A0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800251CC (-RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpImportanceToRequiredExecutionSpeed(char a1)
{
  if ( (a1 & 0x40) != 0 )
    return 2LL;
  return (a1 & 0xEu) >= 8 && (a1 & 0x30u) >= 0x20;
}
