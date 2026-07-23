/*
 * XREFs of NtAlpcConnectPort @ 0x140573DAC
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpConnectPort @ 0x1404DA5F0 (AlpcpConnectPort.c)
 */

NTSTATUS __cdecl NtAlpcConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        ULONG Flags,
        PSID RequiredServerSid,
        PPORT_MESSAGE ConnectionMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES OutMessageAttributes,
        PALPC_MESSAGE_ATTRIBUTES InMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  return AlpcpConnectPort(
           (unsigned __int64)PortHandle,
           (__int64)PortName,
           0LL,
           (__int64)ObjectAttributes,
           (unsigned __int64)PortAttributes,
           Flags,
           0LL,
           RequiredServerSid,
           (__int64)ConnectionMessage,
           (__int64)BufferLength,
           (__int64)OutMessageAttributes,
           InMessageAttributes,
           (__int64)Timeout);
}
