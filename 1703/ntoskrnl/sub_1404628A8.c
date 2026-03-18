/*
 * XREFs of sub_1404628A8 @ 0x1404628A8
 * Callers:
 *     sub_14045EFBC @ 0x14045EFBC (sub_14045EFBC.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140462D04 (ExpHwidSendSynchronousIrpToDevice.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x140071FD0 (IoGetDeviceAttachmentBaseRef.c)
 */

PDEVICE_OBJECT __fastcall sub_1404628A8(struct _DEVICE_OBJECT *a1)
{
  PDEVICE_OBJECT result; // rax

  result = IoGetDeviceAttachmentBaseRef(a1);
  if ( !result || (result->Flags & 0x1000) == 0 )
    return 0LL;
  return result;
}
