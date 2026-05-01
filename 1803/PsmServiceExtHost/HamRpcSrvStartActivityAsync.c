/*
 * XREFs of HamRpcSrvStartActivityAsync @ 0x180024E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvStartActivityAsync(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  return HamSrvStartActivityAsync(a1, a2, a3, a4);
}
