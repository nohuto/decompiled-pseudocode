/*
 * XREFs of ?RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001ACD0
 * Callers:
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009AF0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180014AD0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AC60 (-HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x18001AD60 (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

void __fastcall RmpActivityHostFinalCleanup(struct _RM_ACTIVITY_HOST *a1)
{
  HANDLE *v2; // rcx
  struct _HAM_DEPENDENCY_GROUP *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  RmpEmptyWorkerCleanup((struct _RM_ACTIVITY_HOST *)((char *)a1 + 1080));
  if ( *((_DWORD *)a1 + 14) == 1 )
  {
    v4 = (void *)*((_QWORD *)a1 + 116);
    if ( v4 )
      CloseHandle(v4);
    v5 = (void *)*((_QWORD *)a1 + 117);
    if ( v5 )
      CloseHandle(v5);
  }
  v2 = (HANDLE *)*((_QWORD *)a1 + 6);
  if ( v2 )
    RmpPartitionRelease(v2);
  if ( *((_QWORD *)a1 + 101) )
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) + 264LL))();
  if ( *((_QWORD *)a1 + 98) )
    CemRcObjectDereference();
  v3 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 88);
  if ( v3 )
    HampDepGroupRemoveHost(v3, (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64));
  if ( *((_QWORD *)a1 + 85) )
    TpReleaseWork();
  if ( *((_QWORD *)a1 + 84) )
    TpReleaseWork();
}
