/*
 * XREFs of ZwCreateWaitablePort @ 0x14017F120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateWaitablePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG MaxConnectInfoLength,
        ULONG MaxDataLength,
        ULONG NPMessageQueueSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle, ObjectAttributes, *(_QWORD *)&MaxConnectInfoLength);
}
