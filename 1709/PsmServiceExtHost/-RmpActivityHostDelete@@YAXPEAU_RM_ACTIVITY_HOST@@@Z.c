/*
 * XREFs of ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A79C
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180016A30 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800319C0 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z @ 0x18001A570 (-RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A59C (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A800 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A848 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180036268 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpActivityHostDelete(struct _RTL_BITMAP **P)
{
  if ( P[160] )
    RmpActivityHostRemoveFromRemediationGroup(P, 1u);
  if ( P[101] )
  {
    (*((void (__fastcall **)(struct _RTL_BITMAP *))P[5][3].Buffer + 33))(P[101]);
    P[101] = 0LL;
  }
  RmpActivityHostRemoveFromTables((struct _RM_ACTIVITY_HOST *)P);
  if ( !*((_DWORD *)P + 14) )
    RmpPsmAppFamilyTableTryRemoveActivityHost((struct _RM_ACTIVITY_HOST *)P);
  RmpActivityHostCleanupCommonState((struct _RM_ACTIVITY_HOST *)P);
  RmpPartitionAddRemoveHost(P[6], -1, 0);
  RmpObjectRelease((char *)P);
}
