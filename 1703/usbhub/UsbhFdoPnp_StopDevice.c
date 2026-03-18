/*
 * XREFs of UsbhFdoPnp_StopDevice @ 0x1C004B5C0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_FDO_Pnp_State @ 0x1C001B7E0 (Usbh_FDO_Pnp_State.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_StopDevice(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rdi
  _DWORD *v5; // rax

  Log(a1, 2, 1716737104, 0LL, (__int64)a2);
  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  v5 = FdoExt(a1);
  Usbh_FDO_Pnp_State((__int64)(v5 + 346), 5u);
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], a2);
}
