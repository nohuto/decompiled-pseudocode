/*
 * XREFs of ?HampRmContextDestroy@@YAXPEAX@Z @ 0x180045AA0
 * Callers:
 *     ?HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z @ 0x180045A14 (-HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z.c)
 *     ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180047480 (-HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180016320 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 */

void __fastcall HampRmContextDestroy(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax

  v1 = a1[2];
  if ( v1 != -1 )
  {
    RmSrvResourceSetReleaseResources(RmSvcGlobals, v1, 0);
    a1[2] = -1LL;
  }
  v3 = *a1;
  a1[1] = 0LL;
  (*(void (__fastcall **)(__int64 *))(v3 + 16))(a1);
}
