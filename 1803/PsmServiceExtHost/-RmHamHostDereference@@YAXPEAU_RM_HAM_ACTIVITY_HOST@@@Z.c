/*
 * XREFs of ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007E80
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180007B20 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003FF94 (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180040134 (-HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x180040724 (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x180050EB4 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180065930 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

void __fastcall RmHamHostDereference(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  RmpAcquireGlobalLock();
  if ( (*((_QWORD *)a1 + 72))-- == 1LL )
    RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
  RmpReleaseGlobalLock();
}
