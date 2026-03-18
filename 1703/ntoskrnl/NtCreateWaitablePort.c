/*
 * XREFs of NtCreateWaitablePort @ 0x140585D30
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     AlpcpCreateConnectionPort @ 0x140445648 (AlpcpCreateConnectionPort.c)
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
  ConnectionPort = AlpcpCreateConnectionPort(PortHandle, (__int64)ObjectAttributes, 0LL, MaxDataLength, 1, 1);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return ConnectionPort;
}
