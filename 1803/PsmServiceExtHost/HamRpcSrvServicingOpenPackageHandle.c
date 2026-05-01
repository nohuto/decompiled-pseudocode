/*
 * XREFs of HamRpcSrvServicingOpenPackageHandle @ 0x180004230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall HamRpcSrvServicingOpenPackageHandle(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  return HamSrvOpenPackageHandle(a1, a2, a3, a4, a5, a6);
}
