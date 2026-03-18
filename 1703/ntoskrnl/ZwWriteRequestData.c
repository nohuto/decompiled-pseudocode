/*
 * XREFs of ZwWriteRequestData @ 0x14017EA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwWriteRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG Index,
        PVOID Buffer,
        ULONG BufferLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, Message, *(_QWORD *)&Index);
}
