/*
 * XREFs of HamRpcSrvDisconnectStateChangeNotifications @ 0x18001F3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F3E8 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HamRpcSrvDisconnectStateChangeNotifications(struct _HAM_CLIENT_CONTEXT **a1)
{
  HamSrvDisconnect(*a1);
  *a1 = 0LL;
  return 0LL;
}
