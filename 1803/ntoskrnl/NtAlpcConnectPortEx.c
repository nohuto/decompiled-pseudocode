/*
 * XREFs of NtAlpcConnectPortEx @ 0x1404DE174
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpConnectPort @ 0x1404DA5F0 (AlpcpConnectPort.c)
 */

__int64 __fastcall NtAlpcConnectPortEx(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10,
        __int64 a11)
{
  return AlpcpConnectPort(a1, 0LL, a2, a3, a4, a5, a6, 0LL, a7, a8, a9, a10, a11);
}
