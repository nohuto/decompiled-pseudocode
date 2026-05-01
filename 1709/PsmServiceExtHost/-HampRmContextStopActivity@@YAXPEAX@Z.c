/*
 * XREFs of ?HampRmContextStopActivity@@YAXPEAX@Z @ 0x180045AE4
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047218 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047F90 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180016320 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 */

void __fastcall HampRmContextStopActivity(_QWORD *a1)
{
  RmSrvResourceSetReleaseResources(RmSvcGlobals, a1[3], 0);
  a1[3] = -1LL;
}
