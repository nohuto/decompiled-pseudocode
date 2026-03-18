/*
 * XREFs of UsbhFdoPnp_SurpriseRemove @ 0x1C004B650
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_FDO_Pnp_State @ 0x1C001B7E0 (Usbh_FDO_Pnp_State.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_SurpriseRemove(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rdi
  _DWORD *v5; // rax

  Log(a1, 2, 1716736545, 0LL, (__int64)a2);
  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  *((_DWORD *)v4 + 640) |= 0x4000u;
  v5 = FdoExt(a1);
  Usbh_FDO_Pnp_State((__int64)(v5 + 346), 3u);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], a2);
}
