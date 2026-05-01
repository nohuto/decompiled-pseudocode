/*
 * XREFs of ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180064564
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004E354 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180005E9C (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BAB8 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F450 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4B8 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B120 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180034704 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampSystemNotificationClientUnregister@@YAXPEAX@Z @ 0x180060808 (-HampSystemNotificationClientUnregister@@YAXPEAX@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180064234 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU1@@Z @ 0x1800643BC (-HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180064470 (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180064540 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180065DD4 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180066D44 (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180068C78 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampSlsRundown@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x1800695A8 (-HampSlsRundown@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     CemRcTableWaitForEmpty @ 0x18006AA98 (CemRcTableWaitForEmpty.c)
 */

void __fastcall HampManagerRundown(struct _HOST_ACTIVITY_MANAGER *a1)
{
  void *v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rdi
  struct _HAM_DEPENDENCY_GROUP *v8; // rdx
  struct _HOST_ACTIVITY_MANAGER *v9; // rcx
  struct _HAM_HOST_DEPENDENCY *j; // rax
  struct _HAM_DEPENDENCY_GROUP *v11; // rax
  __int64 v12; // rdx
  struct _HAM_DEPENDENCY_GROUP *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  HampWakeManagerPreRundown((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 392));
  if ( *((_QWORD *)a1 + 36) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 35) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 45) )
    HampPdcExitPlmPhase((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 336));
  v2 = (void *)*((_QWORD *)a1 + 43);
  if ( v2 )
  {
    HampSystemNotificationClientUnregister(v2);
    *((_QWORD *)a1 + 43) = 0LL;
  }
  HampSlsRundown((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 504));
  v3 = (_QWORD *)((char *)a1 + 296);
  v4 = 4LL;
  do
  {
    if ( *v3 )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
    ++v3;
    --v4;
  }
  while ( v4 );
  v5 = (_QWORD *)((char *)a1 + 16);
  do
  {
    while ( (_QWORD *)*v5 != v5 )
      HampClientDestroy((struct _HAM_CLIENT_CONTEXT *)(*v5 - 8LL));
    LODWORD(v4) = v4 + 1;
    v5 += 2;
  }
  while ( (unsigned int)v4 < 6 );
  for ( i = HampHostEnumerateHostsInNode((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 112), 0, 0LL);
        ;
        i = HampManagerGetNextHost(v7) )
  {
    v7 = i;
    if ( !i )
      break;
    HampHostQueueTerminate((__int64)i, 3u, 0xB00u, 0LL, 0);
  }
  v8 = 0LL;
  v9 = a1;
  while ( 1 )
  {
    v11 = HampManagerEnumerateDependencyGroups(v9, v8);
    v13 = v11;
    if ( !v11 )
      break;
    HampDepGroupWaitEnterStateChange(v11);
    HampDepGroupAcquireLockExclusive(v13);
    for ( j = HampDepGroupGetFirstDependency(v13); j; j = HampDepGroupGetNextDependency(j) )
    {
      if ( *((_BYTE *)j + 40) != 2 )
        *((_DWORD *)j + 9) |= 1u;
    }
    HampDepGroupReleaseLockExclusive(v13);
    HampDepGroupRunStateChangeWorker(v13);
    v9 = (struct _HOST_ACTIVITY_MANAGER *)*((_QWORD *)v13 + 4);
    v8 = v13;
  }
  while ( 1 )
  {
    HampManagerAcquireLockShared(a1, v12);
    v15 = *((_QWORD *)a1 + 31);
    HampManagerReleaseLockShared(a1, v14);
    if ( !v15 )
      break;
    RtlWaitOnAddress((char *)a1 + 248, &v15, 8LL, 0LL);
  }
  CemRcTableWaitForEmpty((char *)a1 + 152);
  CemRcTableWaitForEmpty((char *)a1 + 200);
  CemRcTableWaitForEmpty((char *)a1 + 424);
}
