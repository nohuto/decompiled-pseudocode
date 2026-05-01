/*
 * XREFs of ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004E354
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180037530 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180005CAC (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18004F47C (-Rundown@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x180053A94 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800582B8 (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180059D28 (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180064564 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall RmpRundownAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbp
  ExecutionModel::ResourceManager *v3; // rcx
  struct _RM_SERVICE_GLOBALS **v4; // rbx
  struct _RM_SERVICE_GLOBALS *v5; // rdi
  char *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  v1 = (char *)a1 + 1160;
  RtlAcquireSRWLockExclusive((char *)a1 + 1232);
  *((_DWORD *)v1 + 20) = GetCurrentThreadId();
  RmpAcquireGlobalLock();
  *((_DWORD *)a1 + 557) |= 2u;
  RmpReleaseGlobalLock();
  *((_DWORD *)a1 + 310) = 0;
  RtlReleaseSRWLockExclusive(v1 + 72);
  HampManagerRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1312));
  v3 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 279);
  if ( v3 )
    ExecutionModel::ResourceManager::Rundown(v3);
  RmpAcquireGlobalLock();
  v4 = *(struct _RM_SERVICE_GLOBALS ***)a1;
  if ( *(struct _RM_SERVICE_GLOBALS **)a1 != a1 )
  {
    do
    {
      v5 = *v4;
      RmpActivatorCleanup((struct _RM_ACTIVATOR *)(v4 - 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4 - 1);
      v4 = (struct _RM_SERVICE_GLOBALS **)v5;
    }
    while ( v5 != a1 );
  }
  RmpReleaseGlobalLock();
  if ( *((_QWORD *)a1 + 141) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)a1 + 141) = 0LL;
  }
  RmpEnforcerContextRundown(a1);
  RmpGameModeRundown((struct _RM_GAME_MODE_CONTEXT *)v1);
  RtlAcquireSRWLockExclusive((char *)a1 + 336);
  *((_DWORD *)a1 + 86) = GetCurrentThreadId();
  *((_DWORD *)a1 + 94) |= 1u;
  while ( 1 )
  {
    v6 = (char *)a1 + 336;
    if ( !*((_DWORD *)a1 + 103) )
      break;
    CempLockSleepConditionVariableExclusive((__int64)v6, (__int64)a1 + 368, 0LL);
  }
  *((_DWORD *)a1 + 86) = 0;
  RtlReleaseSRWLockExclusive(v6);
  v7 = (void *)*((_QWORD *)a1 + 75);
  if ( v7 )
    PowerSettingUnregisterNotification(v7);
  v8 = (void *)*((_QWORD *)a1 + 76);
  if ( v8 )
    PowerSettingUnregisterNotification(v8);
  if ( *((_QWORD *)a1 + 78) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 79) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 80) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  v9 = (void *)*((_QWORD *)a1 + 82);
  if ( v9 )
    NtClose(v9);
  if ( *((_QWORD *)a1 + 73) )
  {
    RmpAcquireGlobalLock();
    TpSetTimer(*((_QWORD *)a1 + 73), 0LL, 0LL, 0LL);
    RmpReleaseGlobalLock();
    TpWaitForTimer(*((_QWORD *)a1 + 73), 1LL);
  }
}
