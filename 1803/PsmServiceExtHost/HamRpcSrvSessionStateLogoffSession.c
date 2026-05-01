/*
 * XREFs of HamRpcSrvSessionStateLogoffSession @ 0x180034F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvSessionStateLogoffSession(struct _HAM_CLIENT_CONTEXT *a1, unsigned int a2)
{
  return HamSrvLogoffSession(a1, a2);
}
