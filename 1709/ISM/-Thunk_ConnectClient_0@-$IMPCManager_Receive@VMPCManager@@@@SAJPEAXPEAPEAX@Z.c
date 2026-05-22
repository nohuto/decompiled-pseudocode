/*
 * XREFs of ?Thunk_ConnectClient_0@?$IMPCManager_Receive@VMPCManager@@@@SAJPEAXPEAPEAX@Z @ 0x18005E670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IMPCManager_Receive<MPCManager>::Thunk_ConnectClient_0(
        MPCManager *a1,
        const struct tagMsgRoutingInfo **a2)
{
  return MPCManager::ConnectionCreated(a1, *a2);
}
