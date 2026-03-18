/*
 * XREFs of NtAlpcAcceptConnectPort @ 0x14046537C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpAcceptConnectPort @ 0x140465410 (AlpcpAcceptConnectPort.c)
 */

__int64 __fastcall NtAlpcAcceptConnectPort(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = AlpcpAcceptConnectPort(a1, a3 & 0xC0000000, a2, a4, a5, a6, a7, a8, a9, 0LL, 0LL, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v10;
}
