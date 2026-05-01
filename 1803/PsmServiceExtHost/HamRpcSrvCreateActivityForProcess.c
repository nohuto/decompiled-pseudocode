/*
 * XREFs of HamRpcSrvCreateActivityForProcess @ 0x1800326C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall HamRpcSrvCreateActivityForProcess(
        struct _HAM_CLIENT_CONTEXT *a1,
        void *a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4,
        unsigned __int8 *a5)
{
  return HamSrvCreateActivityForProcess(a1, a2, a3, a4, a5);
}
