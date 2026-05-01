/*
 * XREFs of HamRpcSrvTerminateIfSuspendedByProcess @ 0x180067900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvTerminateIfSuspendedByProcess(
        struct _HOST_ACTIVITY_MANAGER **a1,
        void *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  return HamSrvTerminateIfSuspendedByProcess(a1, a2, a3, a4);
}
