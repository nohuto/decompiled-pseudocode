/*
 * XREFs of ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180040264
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B480 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180004090 (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180043E00 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180045038 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x180045490 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 */

void __fastcall RmHamHostStateWorkerWaitForQuiesce(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  struct _HAM_DEPENDENCY_GROUP *v3; // rsi
  unsigned int v7; // ebx

  v3 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 80);
  RmpAcquireGlobalLock();
  while ( 1 )
  {
    HampHostAcquireLockExclusiveEx(a1, 0);
    HampHostUpdateQuiesceState(a1, a2, a3);
    if ( (*((_DWORD *)a1 + 157) & 0x380) == 0x280 )
      break;
    HampHostReleaseLockExclusiveEx(a1);
    CempLockSleepConditionVariableExclusive((__int64)&RmpGlobalLock, (__int64)a1 + 632);
  }
  *((_DWORD *)a1 + 237) |= 0x80u;
  *((_DWORD *)a1 + 238) &= ~0x80u;
  HampDepGroupAcquireLockExclusive(v3);
  v7 = HampDepGroupTryEnterStateChange(v3, 0LL);
  HampDepGroupReleaseLockExclusive(v3);
  HampHostReleaseLockExclusiveEx(a1);
  RmpReleaseGlobalLock();
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 3) + 56LL) + 280LL))(*((_QWORD *)a1 + 93));
  if ( v7 )
    HampDepGroupRunStateChangeWorker(v3);
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx(a1, 0);
}
