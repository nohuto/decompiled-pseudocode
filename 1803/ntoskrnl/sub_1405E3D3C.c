/*
 * XREFs of sub_1405E3D3C @ 0x1405E3D3C
 * Callers:
 *     sub_1405E31F0 @ 0x1405E31F0 (sub_1405E31F0.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x1405E3C04 (ExpHwidSendSynchronousIrpToDevice.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x140064E70 (IoGetDeviceAttachmentBaseRef.c)
 */

PDEVICE_OBJECT __fastcall sub_1405E3D3C(struct _DEVICE_OBJECT *a1)
{
  PDEVICE_OBJECT result; // rax

  result = IoGetDeviceAttachmentBaseRef(a1);
  if ( !result || (result->Flags & 0x1000) == 0 )
    return 0LL;
  return result;
}
