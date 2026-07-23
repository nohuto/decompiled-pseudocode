/*
 * XREFs of PopUmpoInitializeMonitorChannel @ 0x1408551FC
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x14012D810 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x140131CC0 (ExUnregisterCallback.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x14017E7C0 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x14017EA00 (ZwAlpcSetInformation.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExCreateCallback @ 0x140593970 (ExCreateCallback.c)
 *     PopMonitorProcessLoop @ 0x1405EEEC8 (PopMonitorProcessLoop.c)
 */

__int64 PopUmpoInitializeMonitorChannel()
{
  PCALLBACK_OBJECT v0; // rbx
  PVOID v1; // rsi
  NTSTATUS v2; // edi
  NTSTATUS v3; // eax
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-69h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-61h] BYREF
  _QWORD PortInformation[2]; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+88h] [rbp-9h] BYREF

  v0 = 0LL;
  PopAlpcMonitorServerPort = 0LL;
  PopAlpcMonitorClientPort = 0LL;
  v1 = 0LL;
  CallbackObject = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\PowerMonitorPort");
  memset(&PortAttributes, 0, sizeof(PortAttributes));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  PortAttributes.Flags = 0x100000;
  PortAttributes.MaxMessageLength = 256LL;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 512;
  v2 = ZwAlpcCreatePort(&PopAlpcMonitorServerPort, &ObjectAttributes, &PortAttributes);
  if ( v2 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 1u);
    v0 = CallbackObject;
    v2 = v3;
    if ( v3 >= 0 )
    {
      v1 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopMonitorAlpcCallback, 0LL);
      if ( !v1 )
        goto LABEL_6;
      PortInformation[0] = v0;
      PortInformation[1] = PopAlpcMonitorServerPort;
      v2 = ZwAlpcSetInformation(PopAlpcMonitorServerPort, AlpcRegisterCallbackInformation, PortInformation, 0x10u);
      ObfDereferenceObjectWithTag(v0, 0x746C6644u);
      if ( v2 >= 0 )
      {
        PopMonitorProcessLoop();
        v2 = 0;
LABEL_6:
        if ( v2 >= 0 )
          return (unsigned int)v2;
      }
    }
  }
  if ( PopAlpcMonitorServerPort )
    ZwClose(PopAlpcMonitorServerPort);
  if ( v1 )
    ExUnregisterCallback(v1);
  if ( v0 )
    ObfDereferenceObjectWithTag(v0, 0x746C6644u);
  return (unsigned int)v2;
}
