/*
 * XREFs of ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800074A8
 * Callers:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800073E8 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D158 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostCleanupCommonState(struct _RM_ACTIVITY_HOST *a1)
{
  if ( *((_QWORD *)a1 + 173) )
    TpReleaseWork();
  if ( *((_QWORD *)a1 + 153) )
  {
    TpReleaseWork();
    *((_QWORD *)a1 + 153) = 0LL;
  }
}
