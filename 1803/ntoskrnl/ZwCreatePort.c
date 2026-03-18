/*
 * XREFs of ZwCreatePort @ 0x1401A8B00
 * Callers:
 *     SeRmInitPhase1 @ 0x1408B209C (SeRmInitPhase1.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectionInfoLength,
        ULONG MaxMessageLength,
        ULONG MaxPoolUsage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, ObjectAttributes, *(_QWORD *)&MaxConnectionInfoLength);
}
