/*
 * XREFs of RmtSrv_RS_SetAutoRelease @ 0x180030660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_SetAutoRelease(__int64 a1, unsigned __int64 a2, int a3)
{
  return RmSrvResourceSetSetAutoRelease(*((struct _RM_SERVICE_GLOBALS **)g_pProxy + 2), a2, a3);
}
