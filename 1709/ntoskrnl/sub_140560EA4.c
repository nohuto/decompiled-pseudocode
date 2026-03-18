/*
 * XREFs of sub_140560EA4 @ 0x140560EA4
 * Callers:
 *     sub_14055EB30 @ 0x14055EB30 (sub_14055EB30.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x14055FE74 (ExpHwidSendSynchronousIrpToDevice.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x1400B05A0 (IoGetDeviceAttachmentBaseRef.c)
 */

PDEVICE_OBJECT __fastcall sub_140560EA4(struct _DEVICE_OBJECT *a1)
{
  PDEVICE_OBJECT result; // rax

  result = IoGetDeviceAttachmentBaseRef(a1);
  if ( !result || (result->Flags & 0x1000) == 0 )
    return 0LL;
  return result;
}
