/*
 * XREFs of ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x18001AD60
 * Callers:
 *     ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019784 (-RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001ACD0 (-RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpEmptyWorkerCleanup(struct _RM_EMPTY_WORKER_CONTEXT *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *(_QWORD *)a1 )
  {
    TpReleaseWork();
    *(_QWORD *)a1 = 0LL;
  }
  v2 = (void *)*((_QWORD *)a1 + 1);
  if ( v2 )
    NtClose(v2);
  v3 = (void *)*((_QWORD *)a1 + 2);
  if ( v3 )
    NtClose(v3);
}
