/*
 * XREFs of IoWMIDeviceObjectToInstanceName @ 0x1405E4F50
 * Callers:
 *     IoWMIHandleToInstanceName @ 0x1405E4ED0 (IoWMIHandleToInstanceName.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140019294 (RtlStringCbPrintfW.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400B05A0 (IoGetDeviceAttachmentBaseRef.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1405E5038 (WmipGetGuidObjectInstanceInfo.c)
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
