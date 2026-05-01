/*
 * XREFs of HamRpcSrvCreateActivity @ 0x1800464E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall __noreturn HamRpcSrvCreateActivity(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        unsigned __int64 *a9)
{
  HamSrvCreateActivity(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
