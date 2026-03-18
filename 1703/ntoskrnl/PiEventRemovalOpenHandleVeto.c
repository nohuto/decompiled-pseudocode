/*
 * XREFs of PiEventRemovalOpenHandleVeto @ 0x1406AA3FC
 * Callers:
 *     PiEventQueryRemoveDevices @ 0x14059A3AC (PiEventQueryRemoveDevices.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x140071FD0 (IoGetDeviceAttachmentBaseRef.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     PnpCollectOpenHandles @ 0x1406A0430 (PnpCollectOpenHandles.c)
 */

void __fastcall PiEventRemovalOpenHandleVeto(
        unsigned int a1,
        PVOID **a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        _DWORD *a5,
        UNICODE_STRING *DestinationString)
{
  char *DeviceNode; // rdi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v9; // rbx

  *a5 = 5;
  PnpCollectOpenHandles(a2, a1, a4);
  DeviceNode = 0LL;
  if ( a3 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a3);
    v9 = DeviceAttachmentBaseRef;
    if ( DeviceAttachmentBaseRef )
      DeviceNode = (char *)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)(DeviceNode + 40));
    ObfDereferenceObject(v9);
  }
  else
  {
    RtlInitUnicodeString(DestinationString, 0LL);
  }
}
