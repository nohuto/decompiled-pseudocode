/*
 * XREFs of NtReadRequestData @ 0x1406B0D9C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     AlpcpCopyRequestData @ 0x1406B1584 (AlpcpCopyRequestData.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtReadRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG Index,
        PVOID Buffer,
        ULONG BufferLength,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpCopyRequestData(0LL, PortHandle, Message, Index, Buffer, *(_QWORD *)&BufferLength, ReturnLength);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}
