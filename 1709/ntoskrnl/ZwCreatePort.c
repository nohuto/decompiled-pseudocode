/*
 * XREFs of ZwCreatePort @ 0x14017EEE0
 * Callers:
 *     SeRmInitPhase1 @ 0x140849C70 (SeRmInitPhase1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectionInfoLength,
        ULONG MaxMessageLength,
        ULONG MaxPoolUsage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
