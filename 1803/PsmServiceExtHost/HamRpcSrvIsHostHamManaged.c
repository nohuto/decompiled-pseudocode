/*
 * XREFs of HamRpcSrvIsHostHamManaged @ 0x180031920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvIsHostHamManaged(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int8 *a2)
{
  return HamSrvIsHostHamManaged(a1, a2);
}
