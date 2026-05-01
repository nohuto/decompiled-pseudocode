/*
 * XREFs of CempLockSleepConditionVariableExclusive @ 0x180004090
 * Callers:
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180014B10 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800154F0 (-RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x18001B8A4 (-RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 *     RmpDestroyResourceManagerServer @ 0x180031264 (RmpDestroyResourceManagerServer.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180040264 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180045538 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempLockSleepConditionVariableExclusive(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx

  *(_DWORD *)(a1 + 8) = 0;
  v3 = RtlSleepConditionVariableSRW(a2, a1, 0LL, 0LL);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  return v3;
}
