/*
 * XREFs of RmtSrv_RM_DisconnectFromServer @ 0x1800305F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmtSrv_RM_DisconnectFromServer(void **a1)
{
  return ResourceManagerServerProxy::Handle_RM_DisconnectFromServer(g_pProxy, a1);
}
