/*
 * XREFs of ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180009D04
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A400 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18000481C (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpSystemPriorityBoostThreadBegin@@YAJXZ @ 0x1800052F8 (-RmpSystemPriorityBoostThreadBegin@@YAJXZ.c)
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180008DBC (-RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 *     ?HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18000A0EC (-HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000BD0C (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18002588C (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z @ 0x180031204 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z.c)
 *     ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180041144 (-HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_EXTERNAL_APPLICATI.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180054B88 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800617F0 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpEnforcementUnoptimizeHost(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  int v7; // ebp
  int v8; // r14d
  BOOL v9; // r12d
  int v10; // r14d
  __int64 v12; // rcx
  int v13; // ecx
  int ThreadInformation; // [rsp+70h] [rbp+18h] BYREF

  v3 = a1 + 64;
  if ( (a3 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 0);
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
  }
  if ( (a3 & 0x27) != 0 )
    *(_DWORD *)(a1 + 1156) &= ~(a3 & 0x27);
  if ( (a3 & 8) != 0 )
  {
    RmpEnforcementWaitForInSwapTurn((struct _RM_ACTIVITY_HOST *)a1, (struct _RM_ENFORCER_CONTEXT *)a2);
    if ( (*(_BYTE *)(a1 + 1152) & 0x20) != 0 )
    {
LABEL_23:
      *(_DWORD *)(a1 + 1156) &= ~8u;
      *(_DWORD *)(a1 + 1152) &= ~0x20u;
      if ( (*(_DWORD *)(a2 + 24))-- == 1 )
      {
        v12 = *(_QWORD *)(a2 + 8);
        if ( v12 != a2 + 8 )
          RtlWakeAllConditionVariable(v12 - 24);
      }
      goto LABEL_26;
    }
    *(_DWORD *)(a1 + 1160) |= 8u;
    if ( *(int *)(a1 + 1088) >= 2 || (int)RmpImportanceToRequiredExecutionSpeed(*(unsigned int *)(a1 + 1468)) >= 2 )
    {
      v7 = 1;
    }
    else
    {
      v7 = 0;
      if ( (*(_BYTE *)(a1 + 1468) & 0xEu) < 8 )
      {
        v8 = 0;
        goto LABEL_10;
      }
    }
    v8 = 1;
LABEL_10:
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, a2);
    RmpReleaseGlobalLock();
    v9 = 0;
    if ( v8 )
      v9 = (int)RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 48), 1u) >= 0;
    if ( v7 )
      v10 = RmpSystemPriorityBoostThreadBegin();
    else
      v10 = 0;
    RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 0);
    if ( v7 )
    {
      ThreadInformation = v10;
      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
    }
    if ( v9 )
      RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 48), 0);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
    *(_DWORD *)(a1 + 1160) &= ~8u;
    goto LABEL_23;
  }
LABEL_26:
  if ( a3 < 0 )
  {
    v13 = *(_DWORD *)(a1 + 1160) | 0x80;
    *(_DWORD *)(a1 + 1160) = v13;
    *(_DWORD *)(a1 + 1160) = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)*(_DWORD *)(a1 + 1156)) & 0x100;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, a2);
    RmpReleaseGlobalLock();
    if ( (int)RmpSystemChangePsmApplicationState(a1, 0LL) < 0 )
      HampHostQueueTerminate(v3, 3u, 0x1302u, 0LL, 0);
    if ( *(_DWORD *)(v3 + 560) == 2 )
    {
      HampAppTryChangeExternalState(*(_QWORD *)(v3 + 744), 0LL);
      HampWakeContextUpdateExternalApplicationState(*(_QWORD *)(v3 + 936), 0LL);
    }
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
    *(_DWORD *)(a1 + 1160) &= 0xFFFFFE7F;
    *(_DWORD *)(a1 + 1156) &= 0xFFFFFE7F;
    *(_QWORD *)(v3 + 632) &= 0xFFFFFFFF1FFFFFFFuLL;
  }
  if ( (a3 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 1160) |= 0x40u;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, a2);
    RmpReleaseGlobalLock();
    RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, 0);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v3, 0);
    *(_DWORD *)(a1 + 1160) &= ~0x40u;
    *(_DWORD *)(a1 + 1156) &= ~0x40u;
  }
}
