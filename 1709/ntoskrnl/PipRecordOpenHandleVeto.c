/*
 * XREFs of PipRecordOpenHandleVeto @ 0x1406D54D4
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14055BC8C (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400B05A0 (IoGetDeviceAttachmentBaseRef.c)
 *     PnpCollectOpenHandles @ 0x1406CAD60 (PnpCollectOpenHandles.c)
 */

void __fastcall PipRecordOpenHandleVeto(unsigned int a1, PVOID **a2, struct _DEVICE_OBJECT *a3, __int64 a4, __int64 a5)
{
  char *DeviceNode; // rdi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v8; // rbx

  *(_DWORD *)a5 = 5;
  PnpCollectOpenHandles(a2, a1, a4);
  DeviceNode = 0LL;
  if ( a3 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a3);
    v8 = DeviceAttachmentBaseRef;
    if ( DeviceAttachmentBaseRef )
      DeviceNode = (char *)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 8), (PCUNICODE_STRING)(DeviceNode + 40));
    ObfDereferenceObject(v8);
  }
  else
  {
    RtlInitUnicodeString((PUNICODE_STRING)(a5 + 8), 0LL);
  }
}
