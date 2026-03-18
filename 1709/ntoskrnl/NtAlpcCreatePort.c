/*
 * XREFs of NtAlpcCreatePort @ 0x140468E80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCreateConnectionPort @ 0x140468BE4 (AlpcpCreateConnectionPort.c)
 */

__int64 __fastcall NtAlpcCreatePort(HANDLE *a1, int a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ConnectionPort; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(a1, a2, a3, 0, 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ConnectionPort;
}
