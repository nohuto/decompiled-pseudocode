/*
 * XREFs of HamRpcSrvDisconnectServicing @ 0x1800345F0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180034610 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HamRpcSrvDisconnectServicing(struct _HAM_CLIENT_CONTEXT **a1)
{
  HamSrvDisconnect(*a1);
  *a1 = 0LL;
  return 0LL;
}
