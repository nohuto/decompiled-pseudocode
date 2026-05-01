/*
 * XREFs of ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180045538
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z @ 0x180044290 (-HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAX1@Z @ 0x180044EB0 (-HampDepGroupRemoveDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAX1@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180004090 (CempLockSleepConditionVariableExclusive.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x180045490 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 */

void __fastcall HampDepGroupWaitEnterStateChange(struct _HAM_DEPENDENCY_GROUP *a1)
{
  HampDepGroupAcquireLockExclusive(a1);
  while ( !(unsigned int)HampDepGroupTryEnterStateChange(a1, 0LL) )
    CempLockSleepConditionVariableExclusive((__int64)a1 + 8, (__int64)a1 + 24);
  HampDepGroupReleaseLockExclusive(a1);
}
