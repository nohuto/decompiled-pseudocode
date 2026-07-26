/*
 * XREFs of ?ndisSetupDeviceCreateIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00F9BB4
 * Callers:
 *     ndisCreateHandler @ 0x1C0008A80 (ndisCreateHandler.c)
 *     ndisCloseIrpHandler @ 0x1C0008F70 (ndisCloseIrpHandler.c)
 *     ndisCloseHandler @ 0x1C005CF2C (ndisCloseHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetupDeviceCreateIrp(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
