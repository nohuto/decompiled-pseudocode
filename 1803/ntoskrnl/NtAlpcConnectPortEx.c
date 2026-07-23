/*
 * XREFs of NtAlpcConnectPortEx @ 0x1404DE174
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpConnectPort @ 0x1404DA5F0 (AlpcpConnectPort.c)
 */

NTSTATUS __cdecl NtAlpcConnectPortEx(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ConnectionPortObjectAttributes,
        POBJECT_ATTRIBUTES ClientPortObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        ULONG Flags,
        PSECURITY_DESCRIPTOR ServerSecurityRequirements,
        PPORT_MESSAGE ConnectionMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES OutMessageAttributes,
        PALPC_MESSAGE_ATTRIBUTES InMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  return AlpcpConnectPort(
           (unsigned __int64)PortHandle,
           0LL,
           (__int64)ConnectionPortObjectAttributes,
           (__int64)ClientPortObjectAttributes,
           (unsigned __int64)PortAttributes,
           Flags,
           ServerSecurityRequirements,
           0LL,
           (__int64)ConnectionMessage,
           (__int64)BufferLength,
           (__int64)OutMessageAttributes,
           InMessageAttributes,
           (__int64)Timeout);
}
