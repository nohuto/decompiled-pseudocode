/*
 * XREFs of NtAlpcConnectPort @ 0x140573DAC
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpConnectPort @ 0x1404DA5F0 (AlpcpConnectPort.c)
 */

__int64 __fastcall NtAlpcConnectPort(
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
  return AlpcpConnectPort(a1, a2, 0LL, a3, a4, a5, 0LL, a6, a7, a8, a9, a10, a11);
}
