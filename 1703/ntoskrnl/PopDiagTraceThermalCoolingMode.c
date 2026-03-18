/*
 * XREFs of PopDiagTraceThermalCoolingMode @ 0x1405D8294
 * Callers:
 *     PopThermalWorker @ 0x1405D7C20 (PopThermalWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140071FD0 (IoGetDeviceAttachmentBaseRef.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceThermalCoolingMode(PDEVICE_OBJECT DeviceObject, __int16 a2)
{
  _UNKNOWN **DeviceNode; // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v6; // rbx
  const WCHAR *v7; // rdx
  unsigned __int16 v9; // [rsp+38h] [rbp-29h] BYREF
  __int16 v10; // [rsp+3Ch] [rbp-25h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-9h] BYREF
  void *v13; // [rsp+68h] [rbp+7h]
  int v14; // [rsp+70h] [rbp+Fh]
  int v15; // [rsp+74h] [rbp+13h]
  __int16 *v16; // [rsp+78h] [rbp+17h]
  __int64 v17; // [rsp+80h] [rbp+1Fh]
  wchar_t *Buffer; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  DeviceNode = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceNode) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COOLING_MODE);
    if ( (_BYTE)DeviceNode )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v6 = DeviceAttachmentBaseRef;
      if ( DeviceAttachmentBaseRef )
        DeviceNode = (_UNKNOWN **)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
      else
        DeviceNode = 0LL;
      if ( DeviceNode )
      {
        v9 = *((_WORD *)DeviceNode + 140) >> 1;
        UserData.Ptr = (ULONGLONG)&v9;
        v7 = L"active";
        *(_QWORD *)&UserData.Size = 2LL;
        v13 = DeviceNode[36];
        v15 = 0;
        v14 = 2 * v9;
        if ( a2 )
          v7 = L"passive";
        RtlInitUnicodeString(&DestinationString, v7);
        v16 = &v10;
        Buffer = DestinationString.Buffer;
        v10 = DestinationString.Length >> 1;
        v19 = 2 * (DestinationString.Length >> 1);
        v17 = 2LL;
        v20 = 0;
        LOBYTE(DeviceNode) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_COOLING_MODE, 0LL, 4u, &UserData);
      }
      if ( v6 )
        LOBYTE(DeviceNode) = ObfDereferenceObject(v6);
    }
  }
  return (char)DeviceNode;
}
