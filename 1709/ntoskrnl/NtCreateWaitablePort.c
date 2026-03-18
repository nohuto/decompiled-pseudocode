/*
 * XREFs of NtCreateWaitablePort @ 0x1405F0334
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCreateConnectionPort @ 0x140468BE4 (AlpcpCreateConnectionPort.c)
 */

NTSTATUS __stdcall NtCreateWaitablePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectInfoLength,
        ULONG MaxDataLength,
        ULONG NPMessageQueueSize)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS ConnectionPort; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(PortHandle, (int)ObjectAttributes, 0LL, MaxDataLength, 1, 1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ConnectionPort;
}
