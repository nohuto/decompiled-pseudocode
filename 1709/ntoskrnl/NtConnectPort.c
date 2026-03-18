/*
 * XREFs of NtConnectPort @ 0x140468230
 * Callers:
 *     <none>
 * Callees:
 *     NtSecureConnectPort @ 0x14046827C (NtSecureConnectPort.c)
 */

NTSTATUS __stdcall NtConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  return NtSecureConnectPort(
           PortHandle,
           PortName,
           SecurityQos,
           ClientView,
           0LL,
           ServerView,
           MaxMessageLength,
           ConnectionInformation,
           ConnectionInformationLength);
}
