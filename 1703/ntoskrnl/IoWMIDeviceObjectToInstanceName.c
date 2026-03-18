/*
 * XREFs of IoWMIDeviceObjectToInstanceName @ 0x140584010
 * Callers:
 *     IoWMIHandleToInstanceName @ 0x140583F90 (IoWMIHandleToInstanceName.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x140071FD0 (IoGetDeviceAttachmentBaseRef.c)
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1405840F8 (WmipGetGuidObjectInstanceInfo.c)
 */

NTSTATUS __stdcall IoWMIDeviceObjectToInstanceName(
        PVOID DataBlockObject,
        PDEVICE_OBJECT DeviceObject,
        PUNICODE_STRING InstanceName)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbp
  NTSTATUS GuidObjectInstanceInfo; // ebx
  SIZE_T v7; // rdx
  wchar_t *PoolWithTag; // rax
  __int64 v9; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  GuidObjectInstanceInfo = WmipGetGuidObjectInstanceInfo(DataBlockObject, DeviceAttachmentBaseRef, &UnicodeString, &v12);
  if ( GuidObjectInstanceInfo >= 0 )
  {
    v7 = (unsigned __int16)(UnicodeString.Length + 32);
    InstanceName->MaximumLength = v7;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x49696D57u);
    InstanceName->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlStringCbPrintfW(PoolWithTag, InstanceName->MaximumLength, L"%ws_%d", UnicodeString.Buffer, v12);
      v9 = -1LL;
      do
        ++v9;
      while ( InstanceName->Buffer[v9] );
      GuidObjectInstanceInfo = 0;
      InstanceName->Length = 2 * v9;
    }
    else
    {
      GuidObjectInstanceInfo = -1073741670;
    }
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
  }
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  return GuidObjectInstanceInfo;
}
