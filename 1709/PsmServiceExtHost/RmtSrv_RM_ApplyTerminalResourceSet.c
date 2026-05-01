/*
 * XREFs of RmtSrv_RM_ApplyTerminalResourceSet @ 0x180030560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RmtSrv_RM_ApplyTerminalResourceSet(__int64 a1, unsigned int a2)
{
  return RmSrvApplyTerminalResourceSet(*((struct _RM_SERVICE_GLOBALS **)g_pProxy + 2), a2);
}
