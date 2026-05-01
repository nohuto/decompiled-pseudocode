/*
 * XREFs of CempLockTrackerMarkAcquired @ 0x18001B190
 * Callers:
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18001065C (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180024E68 (-HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18002715C (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18002B9FC (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800315E4 (-HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180031D0C (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003319C (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003487C (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x1800351A8 (-HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180064234 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180067264 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180068778 (-HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180068CFC (-HampSlsAcquireLockExclusive@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CempLockTrackerMarkAcquired(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  DWORD v4; // ebx
  __int64 v6; // rdi
  _QWORD *Value; // r14
  _QWORD *v8; // rax
  char v9; // cl

  v4 = HampLockTrackerId;
  v6 = a3;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    v8 = TlsGetValue(v4);
    v9 = v6 + 1;
    if ( !a4 )
      v9 = v6;
    if ( (~((1LL << v9) - 1) & *v8) != 0 )
      __int2c();
    *Value |= 1LL << v6;
    ++Value[v6 + 1];
  }
}
