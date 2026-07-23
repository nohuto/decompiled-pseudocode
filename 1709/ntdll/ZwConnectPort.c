/*
 * XREFs of ZwConnectPort @ 0x1800A1450
 * Callers:
 *     CsrpConnectToServer @ 0x18000699C (CsrpConnectToServer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  NTSTATUS result; // eax

  result = 157;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
