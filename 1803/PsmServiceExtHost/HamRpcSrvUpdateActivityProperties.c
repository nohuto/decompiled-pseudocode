/*
 * XREFs of HamRpcSrvUpdateActivityProperties @ 0x180024A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvUpdateActivityProperties(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a3)
{
  return HamSrvUpdateActivityProperties(a1, a2, a3);
}
