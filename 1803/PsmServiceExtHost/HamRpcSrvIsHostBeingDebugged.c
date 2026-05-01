/*
 * XREFs of HamRpcSrvIsHostBeingDebugged @ 0x1800678D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvIsHostBeingDebugged(
        struct _HOST_ACTIVITY_MANAGER **a1,
        char *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int8 *a8)
{
  return HamSrvIsHostBeingDebugged(a1, a2, a3, a4, a5, a6, a7, a8);
}
