/*
 * XREFs of ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B684
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180016A30 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001B100 (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsForegroundBoostAppliedOrPending@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B82C (-RmpActivityHostIsForegroundBoostAppliedOrPending@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x18001B8A4 (-RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18001D31C (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpSystemPriorityBoostThreadBegin@@YAJXZ @ 0x18001DEF8 (-RmpSystemPriorityBoostThreadBegin@@YAJXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800365B0 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z @ 0x180040BB8 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z.c)
 *     ?RmpSystemFreezeHostJob@@YAJPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180040E40 (-RmpSystemFreezeHostJob@@YAJPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180046450 (-HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 */

void __fastcall RmpEnforcementUnoptimizeHost(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // edx
  unsigned int IsForegroundBoostAppliedOrPending; // r15d
  BOOL v8; // edi
  BOOL v9; // r14d
  int v10; // edi
  __int64 v12; // rcx
  int ThreadInformation; // [rsp+60h] [rbp+18h] BYREF

  if ( (a3 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 0);
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
  }
  if ( (a3 & 0x27) != 0 )
    *(_DWORD *)(a1 + 1012) &= ~(a3 & 0x27);
  if ( (a3 & 8) != 0 )
  {
    RmpEnforcementWaitForInSwapTurn((struct _RM_ACTIVITY_HOST *)a1, (struct _RM_ENFORCER_CONTEXT *)a2);
    if ( (*(_BYTE *)(a1 + 1008) & 0x20) == 0 )
    {
      *(_DWORD *)(a1 + 1016) |= 8u;
      IsForegroundBoostAppliedOrPending = RmpActivityHostIsForegroundBoostAppliedOrPending((struct _RM_ACTIVITY_HOST *)a1);
      v8 = IsForegroundBoostAppliedOrPending || (*(_BYTE *)(a1 + 1324) & 0xEu) >= 8;
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), v6);
      RmpReleaseGlobalLock();
      v9 = 0;
      if ( v8 )
        v9 = RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 40), 1u) >= 0;
      if ( IsForegroundBoostAppliedOrPending )
        v10 = RmpSystemPriorityBoostThreadBegin();
      else
        v10 = 0;
      RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 0);
      if ( IsForegroundBoostAppliedOrPending )
      {
        ThreadInformation = v10;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
      }
      if ( v9 )
        RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 40), 0);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
      *(_DWORD *)(a1 + 1016) &= ~8u;
    }
    *(_DWORD *)(a1 + 1012) &= ~8u;
    *(_DWORD *)(a1 + 1008) &= ~0x20u;
    if ( (*(_DWORD *)(a2 + 40))-- == 1 )
    {
      v12 = *(_QWORD *)(a2 + 24);
      if ( v12 != a2 + 24 )
        RtlWakeAllConditionVariable(v12 - 24);
    }
  }
  if ( a3 < 0 )
  {
    *(_DWORD *)(a1 + 1016) |= 0x80u;
    *(_DWORD *)(a1 + 1016) ^= ((unsigned __int16)*(_DWORD *)(a1 + 1016) ^ (unsigned __int16)*(_DWORD *)(a1 + 1012)) & 0x100;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpReleaseGlobalLock();
    RmpSystemChangePsmApplicationState(a1, 0LL);
    if ( *(_DWORD *)(a1 + 624) == 2 )
      HampAppTryChangeExternalState(*(_QWORD *)(a1 + 784), 0LL);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
    *(_DWORD *)(a1 + 1016) &= 0xFFFFFE7F;
    *(_DWORD *)(a1 + 1012) &= 0xFFFFFE7F;
    *(_DWORD *)(a1 + 692) &= 0xFFFFFC7F;
  }
  if ( (a3 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 1016) |= 0x40u;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), a2);
    RmpReleaseGlobalLock();
    RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, 0);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
    *(_DWORD *)(a1 + 1016) &= ~0x40u;
    *(_DWORD *)(a1 + 1012) &= ~0x40u;
  }
}
