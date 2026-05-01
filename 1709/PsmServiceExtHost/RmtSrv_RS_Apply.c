/*
 * XREFs of RmtSrv_RS_Apply @ 0x180030620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RS_Apply(__int64 a1, __int64 a2, DWORD a3)
{
  return RmSrvResourceSetApply(*((struct _RM_SERVICE_GLOBALS **)g_pProxy + 2), a2, a3);
}
