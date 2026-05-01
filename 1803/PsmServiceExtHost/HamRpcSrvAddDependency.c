/*
 * XREFs of HamRpcSrvAddDependency @ 0x180008910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall HamRpcSrvAddDependency(struct _HAM_CLIENT_CONTEXT *a1, void *a2, void *a3)
{
  return HamSrvAddDependency(a1, a2, a3);
}
