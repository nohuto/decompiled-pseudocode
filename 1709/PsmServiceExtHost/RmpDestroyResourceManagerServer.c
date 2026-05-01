/*
 * XREFs of RmpDestroyResourceManagerServer @ 0x180031264
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800211B0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180004090 (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180024050 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180032700 (-Rundown@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x180035454 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800358CC (-RmpActivityHostCleanupModule@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180037D04 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180038F20 (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x180039D4C (-RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B31C (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042EC0 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     Pdcv2ActivationClientUnregister @ 0x18004A560 (Pdcv2ActivationClientUnregister.c)
 */

void RmpDestroyResourceManagerServer()
{
  struct _RM_SERVICE_GLOBALS *v0; // rsi
  char *v1; // r13
  __int64 v2; // r14
  struct _RM_SERVICE_GLOBALS **v3; // rbx
  struct _RM_SERVICE_GLOBALS *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  _QWORD *i; // r14
  void *v12; // r8
  void *v13; // rcx
  void *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // rcx
  void *v18; // r8
  __int64 v19; // rcx
  void *v20; // rcx

  v0 = RmSvcGlobals;
  v1 = (char *)RmSvcGlobals + 1136;
  RtlAcquireSRWLockExclusive((char *)RmSvcGlobals + 1208);
  *((_DWORD *)v1 + 20) = GetCurrentThreadId();
  RmpAcquireGlobalLock();
  *((_DWORD *)v0 + 473) |= 2u;
  RmpReleaseGlobalLock();
  *((_DWORD *)v0 + 304) = 0;
  RtlReleaseSRWLockExclusive(v1 + 72);
  HampManagerRundown((struct _RM_SERVICE_GLOBALS *)((char *)v0 + 1288));
  v2 = *((_QWORD *)v0 + 237);
  if ( v2 )
    ExecutionModel::ResourceManager::Rundown(*((ExecutionModel::ResourceManager **)v0 + 237));
  RmpAcquireGlobalLock();
  v3 = *(struct _RM_SERVICE_GLOBALS ***)v0;
  if ( *(struct _RM_SERVICE_GLOBALS **)v0 != v0 )
  {
    do
    {
      v4 = *v3;
      RmpActivatorCleanup((struct _RM_ACTIVATOR *)(v3 - 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3 - 1);
      v3 = (struct _RM_SERVICE_GLOBALS **)v4;
    }
    while ( v4 != v0 );
  }
  RmpReleaseGlobalLock();
  v5 = *((_QWORD *)v0 + 198);
  if ( v5 )
    TpReleaseCleanupGroupMembers(v5, 0LL, 0LL);
  v6 = *((_QWORD *)v0 + 209);
  if ( v6 )
    TpReleaseCleanupGroupMembers(v6, 0LL, 0LL);
  if ( *((_QWORD *)v0 + 138) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)v0 + 138) = 0LL;
  }
  RmpEnforcerContextRundown(v0);
  RmpGameModeRundown((struct _RM_GAME_MODE_CONTEXT *)v1);
  RtlAcquireSRWLockExclusive((char *)v0 + 312);
  *((_DWORD *)v0 + 80) = GetCurrentThreadId();
  *((_DWORD *)v0 + 88) |= 1u;
  while ( 1 )
  {
    v7 = (__int64)v0 + 312;
    if ( !*((_DWORD *)v0 + 97) )
      break;
    CempLockSleepConditionVariableExclusive(v7, (__int64)v0 + 344);
  }
  *((_DWORD *)v0 + 80) = 0;
  RtlReleaseSRWLockExclusive(v7);
  v8 = (void *)*((_QWORD *)v0 + 72);
  if ( v8 )
    PowerSettingUnregisterNotification(v8);
  v9 = (void *)*((_QWORD *)v0 + 73);
  if ( v9 )
    PowerSettingUnregisterNotification(v9);
  if ( *((_QWORD *)v0 + 75) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)v0 + 76) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)v0 + 77) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  v10 = (void *)*((_QWORD *)v0 + 79);
  if ( v10 )
    NtClose(v10);
  if ( *((_QWORD *)v0 + 70) )
  {
    RmpAcquireGlobalLock();
    TpSetTimer(*((_QWORD *)v0 + 70), 0LL, 0LL, 0LL);
    RmpReleaseGlobalLock();
    TpWaitForTimer(*((_QWORD *)v0 + 70), 1LL);
  }
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)v0 + 237) = 0LL;
  }
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)v0 + 536));
  RmpActivityHostCleanupModule(v0);
  RmpAcquireGlobalLock();
  for ( i = (_QWORD *)((char *)v0 + 688);
        (_QWORD *)*i != i;
        RmpCpuSetManagerReleaseClientContext((struct _RM_CPU_SET_CLIENT_CONTEXT *)(*i - 8LL)) )
  {
    ;
  }
  RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_SERVICE_GLOBALS *)((char *)v0 + 680));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)v0 + 704));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)v0 + 728));
  v12 = (void *)*((_QWORD *)v0 + 95);
  if ( v12 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
  RmpReleaseGlobalLock();
  v13 = (void *)*((_QWORD *)v0 + 5);
  if ( v13 )
    CloseHandle(v13);
  v14 = (void *)*((_QWORD *)v0 + 6);
  if ( v14 )
    CloseHandle(v14);
  v15 = *((_QWORD *)v0 + 7);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( *((_QWORD *)v0 + 11) )
    TpReleaseTimer();
  if ( *((_QWORD *)v0 + 20) )
    TpReleaseTimer();
  if ( *((_QWORD *)v0 + 24) )
    TpReleaseTimer();
  v16 = *((_QWORD *)v1 + 8);
  if ( v16 )
    TpReleaseWork(v16);
  v17 = (void *)*((_QWORD *)v0 + 45);
  if ( v17 )
    NtClose(v17);
  v18 = (void *)*((_QWORD *)v0 + 47);
  if ( v18 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
  v19 = *((_QWORD *)v0 + 190);
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    *((_QWORD *)v0 + 190) = 0LL;
  }
  v20 = (void *)*((_QWORD *)v0 + 193);
  if ( v20 )
  {
    Pdcv2ActivationClientUnregister(v20);
    *((_QWORD *)v0 + 193) = 0LL;
  }
  if ( *((_QWORD *)v0 + 70) )
    TpReleaseTimer();
  *((_DWORD *)v0 + 168) &= ~1u;
}
