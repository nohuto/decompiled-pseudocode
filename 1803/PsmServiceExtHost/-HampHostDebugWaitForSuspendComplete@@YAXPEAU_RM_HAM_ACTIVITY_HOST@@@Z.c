/*
 * XREFs of ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180065034
 * Callers:
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18006776C (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_ST.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180005CAC (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007310 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

void __fastcall HampHostDebugWaitForSuspendComplete(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  RmpAcquireGlobalLock();
  while ( *((char *)a1 + 1096) < 0 || *((char *)a1 + 1092) >= 0 )
    CempLockSleepConditionVariableExclusive((__int64)&RmpGlobalLock, (__int64)a1 + 1072, 0LL);
  RmpReleaseGlobalLock();
  HampHostAcquireLockExclusiveEx(a1, 0);
  *((_QWORD *)a1 + 79) &= ~0x1000000000000uLL;
  HampHostCheckStartPendingActivities(a1);
  HampHostReleaseLockExclusiveEx(a1);
  RtlWakeAddressAll((char *)a1 + 632);
}
