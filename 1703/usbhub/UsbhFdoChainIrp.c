/*
 * XREFs of UsbhFdoChainIrp @ 0x1C003A128
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x1C0008C90 (UsbhFdoInternalDeviceControl.c)
 *     UsbhFdoSystemControl @ 0x1C0015F40 (UsbhFdoSystemControl.c)
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x1C0018800 (UsbhFdoPnp_QueryDeviceRelations.c)
 *     UsbhFdoReturnHubCount @ 0x1C00206C0 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0020750 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoDeviceControl @ 0x1C003A160 (UsbhFdoDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoChainIrp(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax

  v3 = (PDEVICE_OBJECT *)FdoExt(a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v3[151], a2);
}
